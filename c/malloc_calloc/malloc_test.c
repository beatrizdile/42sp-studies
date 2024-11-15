/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:00:13 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/05/18 16:06:09 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	size_t	i;

	i = 0;
	printf("malloc de __INT_MAX__: %p\n", malloc(__INT_MAX__));
	printf("malloc de __INT_MAX__ + 1: %p\n", malloc(__INT_MAX__ + 1));
	printf("malloc de __SIZE_MAX__: %p\n", malloc(__SIZE_MAX__));
	printf("malloc de __SIZE_MAX__ - 1: %p\n", malloc(__SIZE_MAX__ - 1));
	printf("malloc de __LONG_MAX__: %p\n", malloc(__LONG_MAX__));
	printf("malloc de __LONG_LONG_MAX__: %p\n", malloc(__LONG_LONG_MAX__));
	printf("malloc de MENOS UM (-1): %p\n", malloc(-1));
	printf("malloc de __SIZE_MAX__ * __SIZE_MAX__ : %p\n", malloc(__SIZE_MAX__ * __SIZE_MAX__));
	printf("malloc de ZERO: %p\n\n", malloc(0));
	printf("calloc de ZERO no size: %p\n", calloc(30, 0));
	printf("calloc de ZERO no nmemb: %p\n", calloc(0, 30));
	printf("calloc de ZERO * ZERO: %p\n", calloc(0, 0));
	printf("calloc de __SIZE_MAX__ * __SIZE_MAX__ : %p\n", calloc(__SIZE_MAX__, __SIZE_MAX__));
	printf("calloc de __INT_MAX__: %p\n", calloc(__INT_MAX__, __INT_MAX__));
	printf("calloc 1 elem de size __INT_MAX__: %p\n", calloc(1, __INT_MAX__));
	printf("calloc 1 elem de size __SIZE_MAX__: %p\n", calloc(1, __SIZE_MAX__));
	printf("calloc __INT_MAX__ elements de 1 size: %p\n\n", calloc(__INT_MAX__, 1));
	printf("2^64: 18446744073709551616: %llu\n", 18446744073709551615);
	printf("sizeof(size_t): %lu\n", sizeof(size_t));
	printf("sizeof(unsigned): %lu\n", sizeof(unsigned));
	printf("sizeof(unsigned long): %lu\n", sizeof(unsigned long));
	printf("sizeof(__SIZE_MAX__): %lu\n", sizeof(__SIZE_MAX__));
	printf("%lu\n", __SIZE_MAX__);
	printf("NULL d: %d\n", NULL);
	printf("NULL p: %p\n", NULL);
	printf("ZERO p: %p\n", 0);
	printf("0x00000000 d: %d\n", 0x00000000);
	printf("0x00000000 p: %p\n", 0x00000000);
	printf("\\0: %p\n", "");
	printf("__SIZE_MAX__ * __SIZE_MAX__: %llu\n", __SIZE_MAX__ * __SIZE_MAX__);
	printf("__INT_MAX__ * __INT_MAX__: %llu\n", __INT_MAX__ * __INT_MAX__);
	printf("__INT_MAX__ + 1: %d\n", __INT_MAX__ + 1);
	printf("__INT_MAX__ + 2: %d\n", __INT_MAX__ + 2);
	printf("__SIZE_MAX__ * __SIZE_MAX__ + 1: %llu\n", __SIZE_MAX__ * (__SIZE_MAX__ + 1)); //estora size_max e fica zero
}
