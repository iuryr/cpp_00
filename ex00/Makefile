NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror --std=c++98

SRC_DIR = src/
SRC_FILES = $(addprefix $(SRC_DIR), \
	  megaphone.cpp)

OBJ_DIR = obj/
OBJ_FILES = $(addprefix $(OBJ_DIR), $(notdir $(SRC_FILES:.cpp=.o)))

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@$(CC) $(FLAGS) $(SRC_FILES) -o $(NAME)

#pattern rule for object files
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling object" $(notdir $@)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo Done.

clean:
	@echo "Removing object files and directory..."
	@rm -rf $(OBJ_DIR)
	@echo "Done."

fclean: clean
	@echo "Removing executable..."
	@rm -f $(NAME)
	@echo "Done."

re: fclean all

.PHONY : all clean fclean re
