	# Library Name #
NAME	= push_swap

	# Variables #
SRCS	= 	affichage.c \
			bob_the_bricoleur.c \
			cent_years_of_solitude.c \
			cinq_terre.c \
			errare_humanum_est.c \
			find_the_longue_serie_of_world.c \
			ope_renverse.c \
			ope_rotate.c \
			ope_swap_and_push.c \
			push_swap.c \
			putintab.c \
			utils.c \
			utils_2.c

INCLUDES = includes/push_swap.h

	# Colors #
YELLOW		=	\e[38;5;226m
GREEN		=	\e[38;5;118m
RED			=	\033[0;31m
BLUE		=   \x1b[34m
CYAN		=   \x1b[36m
RESET		=	\e[0m

	# Objects #
OBJS	= ${SRCS:.c=.o}
OBJS	:= $(addprefix objs/,${OBJS})

	# Rules #
all:		${NAME}
			@printf "$(RED)<3 <3  Manu le petit canard  <3 <3 \n$(RESET)"

$(NAME):	${OBJS}
			gcc -g -Wall -Werror -Wextra -I includes ${OBJS} -o $(NAME)
			@printf "$(BLUE)\nLes dieux, faisant un tri parmi les hommes, éliminent les pires et les meilleurs, ne laissant\n"
			@printf "$(BLUE)vieillir que les rares mortels qui ont vécu sans haine et sans excès, pour qu'ils conduisent la génération suivante.\n$(RESET)"
			@printf "$(CYAN)==============================================================================================\n$(RESET)"
			@printf "$(GREEN)La vie passe, la moulinette trepasse !\n\n$(RESET)"


objs/%.o:		srcs/%.c
					@mkdir -p objs
					gcc -g -Wall -Werror -Wextra -I includes -o $@ -c $<

norme:		
			@norminette srcs/*
			@norminette includes/*
			@printf "$(YELLOW)\nLa normalité est une expérience plus extrême que ce que les gens veulent communément admettre.\n$(RESET)"
			@printf "$(YELLOW)==============================================================================================\n$(RESET)"
			@printf "$(GREEN)La vie passe, la norminette trepasse !\n$(RESET)"

clean:
			rm -f ${OBJS}
			@printf "$(YELLOW)\nAu fond, est-ce que ranger ça ne revient pas un peu à foutre le bordel dans son désordre ? \n$(RESET)"
			@printf "$(YELLOW)==============================================================================================\n$(RESET)"
			@printf "$(GREEN)Que la paix regne sur ton foyer\n\n$(RESET)"
fclean:
			rm -f ${OBJS}
			rm -f ${NAME}
			rm -rf objs
			@printf "$(YELLOW)\nAu fond, est-ce que ranger ça ne revient pas un peu à foutre le bordel dans son désordre ? \n$(RESET)"
			@printf "$(YELLOW)==============================================================================================\n$(RESET)"
			@printf "$(GREEN)Que la paix regne sur ton foyer\n\n$(RESET)"

re:			fclean all
			@printf "$(YELLOW)\nAimer, désirer, c’est aussi souffrir, et être prêt à recommencer... \n$(RESET)"
			@printf "$(YELLOW)==============================================================================================\n$(RESET)"
			
	
.PHONY: 	bonus all norme clean fclean re
