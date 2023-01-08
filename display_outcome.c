#include "rock_paper_scissors.h"

// Displaying the choice of the user/cpu
void	print_choice(int *input, char *subject)
{
    char *str;

    ft_printf(BLUE"%s:"ESCAPE, subject);
	if (*input == 0)
        str = " Rock\n";
    else if (*input == 1)
        str = " Paper\n";
    else
        str = " Scissors\n";
    for (size_t i = 0; i < ft_strlen(str);  i++)
    {
        ft_printf("%c", str[i]);
        fflush(stdout);
        usleep(100000);
    }
}

// The user won -> displaying congrats
void	print_win(void)
{
	ft_printf(PURPLE"╔══════════════════════════════════════════════════╗\n");
	ft_printf(PURPLE"║"GREEN"        🎉🥳 Congratulations! You won! 🥳🎉       "PURPLE"║\n");
	ft_printf(PURPLE"╚══════════════════════════════════════════════════╝");
    ft_printf(BLUE"\n	╔═════════════════════════════════╗\n");
	ft_printf(BLUE "	║"CYAN"     At least this time... 😉   "BLUE " ║\n");
	ft_printf(BLUE "	╚═════════════════════════════════╝\n"ESCAPE);
}

// The user lost -> displaying loss
void	print_loss(void)
{
	ft_printf(PINK"╔══════════════════════════════════════════════════╗\n");
	ft_printf(PINK"║"RED"  🥴 That was close! Heads up and try again! 😊"PINK"   ║\n");
	ft_printf(PINK"╚══════════════════════════════════════════════════╝\n"ESCAPE);
}

// Neither wons/lost -> displaying info
void	print_draw(void)
{
	ft_printf(PURPLE"╔══════════════════════════════════════════════════╗\n");
	ft_printf(PURPLE"║"MINT"       😇 Draw! Great minds think alike! 😇"PURPLE"       ║\n");
	ft_printf(PURPLE"╚══════════════════════════════════════════════════╝\n"ESCAPE);
}

// Drawing attention to the invalid input
int	print_invalid(void)
{
    ft_printf(BLUE"\n        ╔════════════════════════════════╗\n");
	ft_printf(BLUE"        ║"CYAN"     Are you mocking me? 🧐     "BLUE"║\n");
	ft_printf(BLUE"        ╚════════════════════════════════╝\n\n"ESCAPE);
    return (1);
}

// Display current score
void	print_current_score(int score)
{
	if (score > DRAW)
        printf(GREEN"Your current score: %d"ESCAPE"\n\n", score);
    else if (score < DRAW)
        printf(RED"Your current score: %d"ESCAPE"\n\n", score);
    else
        printf(YELLOW"Your current score: %d"ESCAPE"\n\n", score);
}