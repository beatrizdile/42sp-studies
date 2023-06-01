/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_arrays.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 07:52:26 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/05/08 11:16:05 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
// NAO ESQUECE '\0' VIU

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	char	**ptr2;
	// char	**ptr3;

	i = 0;
	
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	
	i = 0;
	while (i < len)
	{
		ptr2 = &ptr;
		// ptr3 = ptr2[i];
		printf("%zu\n", i);
		printf("s content: %c\n", s[start + i]);
		printf("s address: %p\n\n", &s[start + i]);
		
		printf("ptr: %p\n", ptr);
		printf("ptr &: %p\n", &ptr);
		printf("ptr *: %c\n", *ptr);
		printf("ptr content: %c\n", ptr[i]);
		printf("ptr address: %p\n\n", &ptr[i]);
		
		printf("ptr2: %p\n", ptr2);
		printf("ptr2 *: %p\n", *ptr2);
		printf("ptr2 content: %c\n", *(*ptr2+i));
		printf("ptr2 pointing address: %p\n\n\n", &*(*ptr2+i));
		
		// printf("ptr3 content: %c\n", ptr3[i]);
		// printf("ptr3 address: %p\n\n", &ptr3[i]);
		i++;
	}
	
	return (NULL);
}

int main (void)
{
	size_t	len = 5;
	unsigned int start = 0;
	char	*s = "beatri";

	ft_substr(s, start, len);
	
	return (0);
}