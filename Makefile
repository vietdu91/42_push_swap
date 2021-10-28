	# Library Name #
NAME	= push_swap

CHECKER = checker

	# Variables #
SRCS	= 	affichage.c \
			bob_the_bricoleur.c \
			cent_years_of_solitude.c \
			cinq_terre.c \
			errare_humanum_est.c \
			evelyne_thomas.c \
			ope_renverse.c \
			ope_rotate.c \
			ope_swap_and_push.c \
			push_b_only_bads.c \
			push_swap.c \
			putintab.c \
			the_best_algo_in_the_world.c \
			the_best_coup_on_bed.c \
			utils.c

SRCS_C	=	checker.c \
			errare_humanum_est_bonus.c \
			fights_of_warriors_and_nains.c \
			ope_renverse_bonus.c \
			ope_rotate_bonus.c \
			ope_swap_and_push_bonus.c \
			putintab_bonus.c \
			sweating_to_check.c \
			utils_bonus.c \
			utils2_bonus.c \
			affichage_bonus.c

INCLUDES = includes/push_swap.h
INCLUDES_C = includes_bonus/push_swap_bonus.h

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
OBJS_C	= ${SRCS_C:.c=.o}
OBJS_C	:= $(addprefix objs_bonus/,${OBJS_C})
	
	# Rules #
all:		${NAME}
			@printf "$(RED)<3 <3  Manu le petit canard  <3 <3 \n$(RESET)"

bonus:		${CHECKER}
			@printf "$(RED)<3 <3  Bienvenue dans ma petite cachette secrète  <3 <3 \n$(RESET)"

$(NAME):	${OBJS}
			gcc -g -Wall -Werror -Wextra -I includes ${OBJS} -o $(NAME)
			@printf "$(BLUE)\nLes dieux, faisant un tri parmi les hommes, éliminent les pires et les meilleurs, ne laissant\n"
			@printf "$(BLUE)vieillir que les rares mortels qui ont vécu sans haine et sans excès, pour qu'ils conduisent la génération suivante.\n$(RESET)"
			@printf "$(CYAN)==============================================================================================\n$(RESET)"
			@printf "$(GREEN)La vie passe, la moulinette trepasse !\n\n$(RESET)"

$(CHECKER):	${OBJS_C}
			gcc -g -Wall -Werror -Wextra -I includes ${OBJS_C} -o $(CHECKER)
			@printf "$(BLUE)\nLe grand processus auquel on est soumis, c'est le processus de la désagrégation, de l'oubli et du tri.\n$(RESET)"
			@printf "$(CYAN)==============================================================================================\n$(RESET)"
			@printf "$(GREEN)La vie passe, la moulinette trepasse !\n\n$(RESET)"

objs/%.o:		srcs/%.c
					@mkdir -p objs
					gcc -g -Wall -Werror -Wextra -I includes -o $@ -c $<

objs_bonus/%.o:		srcs_bonus/%.c
					@mkdir -p objs_bonus
					gcc -g -Wall -Werror -Wextra -I includes -o $@ -c $<

norme:		
			@norminette srcs/*
			@norminette srcs_bonus/*
			@norminette includes/*
			@norminette includes_bonus/*
			@printf "$(YELLOW)\nLa normalité est une expérience plus extrême que ce que les gens veulent communément admettre.\n$(RESET)"
			@printf "$(YELLOW)==============================================================================================\n$(RESET)"
			@printf "$(GREEN)La vie passe, la norminette trepasse !\n$(RESET)"

clean:
			rm -f ${OBJS}
			rm -f ${OBJS_C}
			@printf "$(YELLOW)\nAu fond, est-ce que ranger ça ne revient pas un peu à foutre le bordel dans son désordre ? \n$(RESET)"
			@printf "$(YELLOW)==============================================================================================\n$(RESET)"
			@printf "$(GREEN)Que la paix regne sur ton foyer\n\n$(RESET)"
fclean:
			rm -f ${OBJS}
			rm -f ${OBJS_C}
			rm -f ${NAME}
			rm -rf ${CHECKER}
			rm -rf objs
			rm -rf objs_bonus
			@printf "$(YELLOW)\nAu fond, est-ce que ranger ça ne revient pas un peu à foutre le bordel dans son désordre ? \n$(RESET)"
			@printf "$(YELLOW)==============================================================================================\n$(RESET)"
			@printf "$(GREEN)Que la paix regne sur ton foyer\n\n$(RESET)"

re:			fclean all
			@printf "$(YELLOW)\nAimer, désirer, c’est aussi souffrir, et être prêt à recommencer... \n$(RESET)"
			@printf "$(YELLOW)==============================================================================================\n$(RESET)"
			
	
.PHONY: 	bonus all norme clean fclean re
