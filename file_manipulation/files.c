/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:17:45 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/05/23 15:09:29 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// OPEN AN EXISTING FILE AND READING IT (fopen & fgets & fclose)
// int main(void)
// {
// 	FILE	*fptr;
	
// 	char content[1000];
	
// 	fptr = fopen("test.txt", "r");
// 	if (!fptr)
// 		printf("File Open Unsucessful\n");
// 	else
// 		printf("File Open Sucessful\n\n");
// 		while(fgets(content, 1000, fptr)){
// 			printf("%s", content);
// 		}
	
// 	fclose(fptr);
// 	return (0);
// }


// CREATE A NEW FILE AND WRITE INTO IT (fopen & fputs & fclose)
// int main(void)
// {
// 	FILE	*fptr;

// 	fptr = fopen("newFile.txt", "w");
	
// 	fputs("adoro programar\n", fptr);
// 	fputs("mentiraaaaaaaaaaa", fptr);

// 	fclose(fptr);

// 	return (0);
// }


// USING OPEN
// RETURN VALUE OF OPEN: On success, open() returns the new file
// descriptor (a nonnegative integer).  On error, -1 is returned and
// errno is set to indicate the error.
int main(void)
{
	int 	file_descriptor;
	char	buffer[1024];
	int		n;

	file_descriptor = open("message.txt", 0);
	n = read(file_descriptor, buffer, 1024);
	write(1, buffer, n);

	return (0);
}
