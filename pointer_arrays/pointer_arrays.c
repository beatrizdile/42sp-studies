/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 07:52:26 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/05/13 13:04:45 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int		i = 0;
	char 	*ptr = "beatri";
	char 	**ptr2;

	ptr2 = &ptr;

	printf("ptr: %p\n", ptr);
	printf("&ptr: %p\n", &ptr);
	printf("*ptr: %c\n\n", *ptr);
	
	printf("ptr2: %p\n", ptr2);
	printf("&ptr2: %p\n", &ptr2);
	printf("*ptr2: %p\n", *ptr2);
	printf("**ptr2: %c\n\n", **ptr2);

	printf("--------------------------\n\n");
	while (i < 6)
	{
		printf("ptr+%d: %p\n", i, ptr+i);
		printf("*(ptr2+%d): %p\n", i, *(ptr2+i));
		printf("ptr[%d] = '%c'\n", i, ptr[i]);
		printf("*(*ptr2+%d) = '%c'\n", i, *(*ptr2+i));
		printf("*(ptr+%d) = '%c'\n", i, *(ptr+i));
		printf("ptr+%d = '%s'\n", i, ptr+i);
		printf("ptr+%d = '%p'\n\n", i, ptr+i);

		//printf("ptr2")
		i++;
	}
	
	return (0);
}