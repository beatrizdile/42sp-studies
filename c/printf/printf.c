/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:11:00 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/07/28 15:22:33 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("%c\n", 'b');
	printf("%s\n\n", "bilokah");
	int	*ptr;
	printf("ptr not initialized: %p\n", ptr);
	ptr = 42000000000000;
	printf("ptr 42000000000000: %p\n", ptr);
	ptr = -4200000000000;
	printf("ptr -42000000000000: %p\n", ptr);
	ptr = 0;
	printf("ptr 0: %p\n\n", ptr);

	int j = 0;
	printf("int 0: %i\n", j);
	j = -1;
	printf("int -1: %i\n", j);
	j = 2147483647;
	printf("int int_max: %i\n", j);
	j = -2147483648;
	printf("int int_max_negative: %i\n", j);
	j = 2147483647 + 1;
	printf("int int_max + 1: %i\n", j);
	j = -2147483648 - 1;
	printf("int int_max_negative - 1: %i\n\n", j);
	

	unsigned long x = 0;
	printf("unsigned long zero: %u\n", x);
	x = 4294967295;
	printf("unsigned long long_max: %u\n", x);
	x = 4294967296;
	printf("unsigned long long_max: %u\n", x);
	x = -1;
	printf("unsigned long -1: %u\n", x);
	x = -2;
	printf("unsigned long -2: %u\n\n", x);
	
	x = 0;
	printf("x: %x\n", x);
	ptr = 12000000;
	printf("#: %#####x\n", ptr);

	printf("\n42: %#x ", 42);
	printf("\n42: %#X ", 42);
	printf("\n0: %#x ", 0);
	
}
