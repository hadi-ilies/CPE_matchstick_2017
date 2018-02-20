/*
** EPITECH PROJECT, 2017
** header
** File description:
** header
*/

#ifndef MY_H
#define MY_H

#define BNORME j <= play->nb_pipe_line && j <= play->nb_stick
#define TURN_P1 my_turn_part3(array, &line, &matches, play) != 1
#define TURN_P2 ? display_game(&line, &matches) : 0;

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct {
	int line;
	int nb_stick;
	int nb_size;
	int nb_bat;
	int cond;
	int bol;
	int cond_bol;
	int nb_pipe;
	int bol_turn;
	int bol_ctrl_d;
	int save_turn;
	int nb_pipe_line;
} var_t;

void my_ai2(char **array, int *line, int *matches, var_t *play);
void my_ai_part2(char **array, int *line, int *j, int *matches);
void my_ai(char **array, int line, int matches, var_t *play);
int my_turn_part3(char **array, int *line, int *matches, var_t *play);
int my_turn_part2(char **array, int *line, int *matches, var_t *play);
int my_turn_part1(char **array, int *line, int *matches, var_t *play);
void cond1(var_t *play);
void cond2(var_t *play);
void cond3(var_t *play);
void cond4(var_t *play);
void display_game_ia(int line, int matches);
void my_turn(char **array, int line, int matches, var_t *play);
void count_bat(char **array, int *line, var_t *play);
void changes(char **array, int line, int matches, var_t *play);
void my_put_nbr(int a);
void my_turn(char **array, int line, int matches, var_t *play);
void my_putchar(char c);
char *get_next_line_f_shell(int fd);
void cond_into_array(int i, int j, var_t *play, char **array);
void into_array(char **array, var_t *play);
char **matchstick(var_t *play);
var_t *init_struct(char **argv);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
int my_atoi(char *str);
int my_putstr(char const *str);
int my_strlen(char *str);
void display_game(int *line, int *matches);
void rm_bat(char **array, int line,  var_t *play, int *matches);
int i_do_shit(char **array, var_t *play);
void count_bat_line(char **array, int *line, var_t *play);

#endif
