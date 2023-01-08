#include "rock_paper_scissors.h"

// Displaying option to choose amount of rounds
// Getting the user's input
int	get_amount_of_rounds(int *requested_amount)
{
    char    *question;
    char    input[2];

    question = "How often do you wish to play?\n";
    for (size_t i = 0; i < ft_strlen(question);  i++)
    {
        ft_printf("%c", question[i]);
        fflush(stdout);
        usleep(100000);
    }
	ft_printf(ESCAPE);

    scanf("\n%2s", input);
    *requested_amount = ft_atoi(input);
    if (*requested_amount > 5 || *requested_amount < 1)
        return (-1);
    return (0);
}

// Getting the user's input
// Checking its validity 
int get_input_user(int *user)
{
    char    input[2];

	scanf("\n%2s", input);
    *user = ft_atoi(input);
    if (*user > 3 || *user < 1)
        return (-1);
    *user -= 1;
	print_choice(user, "\nYour choice");
    return (0);
}

// Generating the cpu's input
void	get_input_cpu(int *cpu)
{
    srand(time(0));
    *cpu = rand() % 2;
	print_choice(cpu, "My choice  ");
}
