/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:20:45 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/07/17 12:47:22 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int	argc, char	**argv)
{
	int		fd;
	int		i = 0;
	int		j = 0;
	char	**maps;
	char	*str;
	t_map	map;
	(void) argc;

	map.file = argv[1];
	fd = open(map.file, O_RDONLY);
	while ((str = get_next_line(fd)) != NULL)
	{
		i++;
		free(str);
	}
	close(fd);
	maps = calloc(sizeof(char *), i + 1);

	fd = open(map.file, O_RDONLY);
	while (j <= i)
	{
		maps[j] = get_next_line(fd);
		printf("%s", maps[j]);
		free(maps[j]);
		j++;
	}
	free(maps);
	close(fd);
}
