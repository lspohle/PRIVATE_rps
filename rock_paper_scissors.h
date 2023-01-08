#ifndef ROCK_PAPER_SCISSORS_H
# define ROCK_PAPER_SCISSORS_H
# include "libft/libft.h"
# include <time.h>
# include <stdio.h>
# define RED "\e[38;5;196;1m"
# define PURPLE "\e[38;5;141;1m"
# define YELLOW "\e[38;5;226;1m"
# define GREEN "\e[38;5;41;1m"
# define CYAN "\e[38;5;44;1m"
# define MINT "\e[38;5;43;1m"
# define BLUE "\e[38;5;32;1m"
# define PINK "\e[38;5;212m"
# define ESCAPE "\033[0m"
# define MAX_AMOUNT 5
# define MIN_AMOUNT 0

typedef	enum
{
	LOSS = -1,
	DRAW = 0,
	WIN = 1,
}	result;

static int results[3][3] =
{
	{DRAW, LOSS, WIN},
	{WIN, DRAW, LOSS},
	{LOSS, WIN, DRAW}
};

void	print_welcome(void);
int 	get_amount_of_rounds(int *requested_amount);
int     play_rock_paper_scissors(int current_amount, int *score);
void	print_options(void);
void	print_prompt(void);
int     get_input_user(int *user);
void	get_input_cpu(int *cpu);
void	print_choice(int *input, char *subject);
void	print_current_score(int score);
void	print_win(void);
void	print_loss(void);
void	print_draw(void);
int 	print_invalid(void);

#endif
