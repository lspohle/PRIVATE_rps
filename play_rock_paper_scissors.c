#include "rock_paper_scissors.h"

// Comparing user's and cpu's choice round by round
int    play_rock_paper_scissors(int current_amount, int *score)
{
    int	user;
	int	cpu;

    print_prompt();
    if (get_input_user(&user) == 1)
        return (print_invalid());

    get_input_cpu(&cpu);
	if (results[user][cpu] == WIN)
	    *score += WIN;
	else if (results[user][cpu] == LOSS)
	    *score += LOSS;
	else
	    *score += DRAW;
    print_current_score(*score);
    return (++current_amount);
}

// Heart of the program
int	main(void)
{
    int current_amount = 1;
    int requested_amount;
    int score = 0;
    
    print_welcome();
    if (get_amount_of_rounds(&requested_amount) == 1)
        return (print_invalid());  
	print_options();
    while (current_amount > 0 && current_amount <= requested_amount)
        current_amount = play_rock_paper_scissors(current_amount, &score);

    if (score > DRAW)
	    print_win();
	else if (score < DRAW)
	    print_loss();
	else
	    print_draw(); 
}
