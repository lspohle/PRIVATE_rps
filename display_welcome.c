#include "rock_paper_scissors.h"

// Welcoming the user to RPS
void	print_welcome(void)
{
	ft_printf(PURPLE"\n	╔═════════════════════════════════╗\n");
	ft_printf(PURPLE "	║"CYAN"         Welcome to RPS!      "PURPLE "   ║\n");
	ft_printf(PURPLE "	╚═════════════════════════════════╝");
    ft_printf(BLUE"\n╔═════════════════════════════════════════════════╗\n");
	ft_printf(BLUE"║"CYAN" 😎 Challenge yourself and try defeating me! 😎 "BLUE" ║\n");
	ft_printf(BLUE"╚═════════════════════════════════════════════════╝\n\n"ESCAPE);
}

// Displaying the commen count off
void	print_prompt(void)
{
	char *prompt = "Rock, Paper, Scissors, ...shoot!\n";

	for (size_t i = 0; i < ft_strlen(prompt);  i++)
	{
		ft_printf("%c", prompt[i]);
		fflush(stdout);
		usleep(100000);
	}
}

// Disyplaing the available options
void	print_options(void)
{
	ft_printf(MINT"----------------------------------------------------\n");
	ft_printf(BLUE"Please choose from the following options:\n"ESCAPE);
	ft_printf("1) Rock\n");
	ft_printf("2) Paper\n");
	ft_printf("3) Scissors\n");
	ft_printf(MINT"----------------------------------------------------\n"ESCAPE);
}
