/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "my.h"

char *get_next_line_f_shell(int fd)
{
	int i = 0;
	char *array2 = malloc(sizeof(char) * 10000);
	int ctrl_d = 0;

	for (; (ctrl_d = read(fd, &array2[i], 1)) > 0; i++) {
		if (array2[i] == '\n') {
			array2[i] = '\0';
			return (array2);
		}
	} if (ctrl_d == 0 && array2[0] == '\0')
		return (NULL);
	if (ctrl_d == 0 && array2 != NULL) {
		array2[i] = '\0';
		return (array2);
	}
	return (NULL);
}
