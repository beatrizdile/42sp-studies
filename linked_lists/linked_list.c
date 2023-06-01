/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 10:58:36 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/05/16 13:35:00 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// head		tail
//  |		  |
//	6 -> 7 -> 8 -> null

// STRUCT NODE
typedef struct Node
{
	int		data;
	struct	Node *next;
} Node;


// HOW TO COUNT THE NUMBER OF NODES IN A LINKED LIST
void	count_n_print_node(struct Node *head)
{
	size_t		count;
	struct Node	*ptr;
	ptr = head;
	count = 0;
	printf("dentro da count n print:\n");
	
	if (head == NULL)
		printf("Linked List is empty\n");
	while (ptr != NULL)
	{
		count++;
		printf("ptr->data: %d\n", ptr->data);
		ptr = ptr->next;
	}
	printf("count: %zu\n", count);
}

// HOW TO RETURN THE LAST NODE
struct Node	*return_last_node(struct Node *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
		head = head->next;

	return (head);
}

// HOW TO ADD NODE AT THE END OF LINKED LIST
void	add_at_end(struct Node *head, int data)
{
	struct Node	*ptr;
	ptr = head;
	
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = (struct Node *)malloc(sizeof(struct Node));
	ptr->next->data = data;
	ptr->next->next = NULL;
}

// HOW TO ADD NODE AT THE BEGGINNING OF LINKED LIST (inserting the value of head)
struct Node	*add_at_beg(struct Node *head, int data)
{
	struct Node	*ptr;
	ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = head;
	head = ptr;
	return (head);
}

// HOW TO ADD NODE AT THE BEGGINNING OF LINKED LIST (inserting the adress of head)
void	add_at_beg_adress_of_head(struct Node **head, int data)
{
	struct Node	*ptr;
	ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = *head;
	*head = ptr;
}

// HOW TO ADD NODE AT A CERTAIN POSITION
void	add_at_position(struct Node **head, int data, int pos)
{
	struct Node	*ptr;
	struct Node	*add_node;
	ptr = *head;
	add_node = (struct Node *)malloc(sizeof(struct Node));
	add_node->data = data;

	pos--;
	while (pos != 1)
	{
		ptr = ptr->next;
		pos--;
	}
	add_node->next = ptr->next;
	ptr->next = add_node;
}

// HOW TO DELETE THE FIRST NODE OF THE LIST
struct Node	*delete_first_node(struct Node *head)
{
	if (!head)
		printf("List is already empty!");
	else
	{
		struct Node *temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
	return (head);
}

int main(void)
{
	struct Node *head = NULL;
	head = (struct Node *)malloc(sizeof(struct Node));
	head->data = 42;
	head->next = NULL;


	struct Node *current = NULL;
	current = (struct Node *)malloc(sizeof(struct Node));
	current->data = 43;
	current->next = NULL;
	head->next = current;

	current = (struct Node *)malloc(sizeof(struct Node));
	current->data = 44;
	current->next = NULL;
	head->next->next = current;

	printf("print do main:\n");
	printf("head->data: %d\n", head->data);
	printf("head->next->data: %d\n", head->next->data);
	printf("head->next->next->data: %d\n", head->next->next->data);
	count_n_print_node(head);

	add_at_end(head, 24);
	head = add_at_beg(head, 69);
	add_at_beg_adress_of_head(&head, 99);
	add_at_position(&head, 0, 4);

	count_n_print_node(head);

	head = delete_first_node(head);

	count_n_print_node(head);
	return (0);
}
