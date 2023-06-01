/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:51:00 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/06/01 16:24:41 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int	max(int num_args, ...)
{
	va_list	args;
	int		max;
	
	va_start(args, num_args);

	for (int i = 0; i < num_args; i++)
	{
		int x = va_arg(args, int);
		if (i == 0)
			max = x;
		else if (x > max)
			max = x;
	}

	va_end(args);
	return (max);
}

void	print(char	*placeholders, ...)
{
	int	num_args = strlen(placeholders);
	
	va_list	args;
	va_start(args, placeholders);

	for (int i = 0; i < num_args; i++)
	{
		if (placeholders[i] == 'd')
		{
			int x = va_arg(args, int);
			printf("%d\n", x);
		}
		else if (placeholders[i] == 'f')
		{
			double x = va_arg(args, double);
			printf("%f\n", x);
		}
	}

	va_end(args);
}

int main(void)
{
	printf("max: %d\n\n", max(4, 5, 8, 2, 7));
	print("df", 10, 3.4);
	return (0);
}
