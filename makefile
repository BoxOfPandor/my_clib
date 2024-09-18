##
## EPITECH PROJECT, 2023
## makefile
## File description:
## Task 01 - make file
##

SRC_DIRS    = print \
			  string \
			  number \
			  memory \
			  list
C_FILE      = $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c))
OBJ_DIR     = OBJ
O_FILE      = $(patsubst %.c, $(OBJ_DIR)/%.o, $(C_FILE))
CFLAGS      = -Wall -Wextra -Werror -I./include

all: libmy

libmy: $(O_FILE)
	ar rc libmy.a $(O_FILE)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	gcc -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJ_DIR)/*.o

fclean: clean
	rm -f libmy.a

re: fclean all