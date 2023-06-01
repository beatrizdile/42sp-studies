/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_basics.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:38:56 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/05/15 13:00:30 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// Student:
// 	-name (string)
// 	-id (string)
// 	-age (int)
// 	-grades (int array)


// WITHOUT TYPEDEF - always use struct when calling the struct "Student"
// struct Student
// {
// 	char	name[50];
// 	char	id[10];
// 	int		age;
// 	int		grade[5];
// };
//
// 	struct Student kevin;


// WITH TYPEDEF - giving the name student to the struct, just use "Student"
// calling the struct, like a regular variable
// typedef struct
// {
// 	char	name[50];
// 	char	id[10];
// 	int		age;
// 	int		grade[5];
// } Student;
// Student kevin;


typedef struct
{
	char	name[50];
	char	id[10];
	int		age;
	int		grade[5];
} Student;

int main(void)
{
	Student kevin;

	strcpy(kevin.name, "Kevin");
	strcpy(kevin.id, "007");
	kevin.age = 40;

	printf("Name: %s\n", kevin.name);
	printf("ID: %s\n", kevin.id);
	printf("Age: %d\n", kevin.age);
	
	for (int i = 0; i < 5; i++)
		kevin.grade[i] = i;
		
	for (int i = 0; i < 5; i++)
		printf("Grades[%d]: %d\n", i, kevin.grade[i]);
	return (0);
}
