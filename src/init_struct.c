/*
** EPITECH PROJECT, 2018
** init_struct
** File description:
** init_struct
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

var_t *init_struct(char **argv)
{
	var_t *play = malloc(sizeof(var_t));

	play->line = my_atoi(argv[1]);
	play->nb_stick = my_atoi(argv[2]);
	play->nb_size = (play->line * 2) + 1;
	play->nb_bat = 0;
	play->cond = 0;
	play->bol = 0;
	play->cond_bol = 1;
	play->nb_pipe = 0;
	play->bol_turn = 0;
	play->bol_ctrl_d = 0;
	play->save_turn = 0;
	play->nb_pipe_line = 0;
	return (play);
}
