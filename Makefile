NAME =		rock_paper_scissors.a

SUBDIR =	libft

SRCS =		display_welcome.c get_input.c display_outcome.c

OBJS =		${SRCS:.c=.o}

GCCW =		gcc -Wall -Wextra

AR =		ar -rc

RM =		rm -f

${NAME}:	${SUBDIR} ${OBJS}
			cp libft/libft.a .
			mv libft.a ${NAME}
			${AR} ${NAME} ${OBJS}
			${GCCW} play_rock_paper_scissors.c rock_paper_scissors.a -o executable && ./executable && rm executable
			${MAKE} fclean

${OBJS}:	${SRCS}
			${GCCW} -c ${SRCS}

${SUBDIR}:	
			cd libft && make

all:		${NAME}

clean:		
			${RM} ${OBJS}
			cd libft && ${MAKE} -s clean

fclean:		clean
			${RM} ${RM} ${NAME}
			cd libft && ${MAKE} -s fclean

re:			fclean all

.PHONY:		all clean fclean re ${SUBDIR}