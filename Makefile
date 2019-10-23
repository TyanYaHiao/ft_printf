# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 19:40:29 by fsmith            #+#    #+#              #
#    Updated: 2019/09/07 13:36:06 by fsmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

override G +=
SRC_PATH :=		src/
INC_PATH :=		includes/
LIB_PATH :=		libft/
OBJ_PATH :=		.obj/

CC :=			clang
CFLAGS :=		-g -Wall -Wextra -Werror
IFLAGS :=		-I $(INC_PATH) -I $(LIB_PATH)$(INC_PATH)
LFLAGS :=		-lft -L $(LIB_PATH)

HFILES :=		ft_printf

FILES :=		pf_printf all_flagsspec buffer buffer2 double free_dd i_flags\
				i_flags1 i_flags2 l_ll_h_hh_for_i l_ll_h_hh_for_o\
				l_ll_h_hh_for_u l_ll_h_hh_for_x long_double make_ox_for_any\
				make_str_with_precision_for_any none_infinity o_flags\
				o_flags1 parsing_and_flags preparce_for_flags print_float\
				str_calc_extra str_calc u_flags x_flags x_flags1

LIB :=			$(LIB_PATH)libft.a

HDRS :=			$(addprefix $(INC_PATH), $(addsuffix .h, $(HFILES)))
SRCS :=			$(addprefix $(SRC_PATH), $(addsuffix .c, $(FILES)))
OBJS :=			$(addprefix $(OBJ_PATH), $(SRCS:%.c=%.o))

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

all: $(NAME)

$(NAME): $(LIB) $(OBJ_PATH) $(OBJS)
	@cp $(LIB) ./$(NAME)
	@ar rc libftprintf.a $(OBJS)
	@ranlib libftprintf.a
	@echo "\n$(GREEN)libftprintf.a created$(RESET)"

$(LIB):
	@ $(MAKE) -sC $(LIB_PATH)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)$(SRC_PATH)
$(OBJ_PATH)%.o: %.c $(HDRS)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
	@echo -n '.'

clean: mclean
	@make clean -C $(LIB_PATH)

fclean: mfclean
	@make fclean -C $(LIB_PATH)

re: fclean all

mclean:
	@rm -f $(OBJS) $(DEPS)
	@echo "$(RED)libftpritnf objs deleted$(RESET)"

mfclean: mclean
	@rm -f $(NAME)
	@rm -rf $(OBJ_PATH)
	@echo "$(RED)libftpritnf.a deleted$(RESET)"

mre: mfclean all

git:
	git add .
	git commit -am "$(G)"
	git push
