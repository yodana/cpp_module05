NAME		=	bureaucrat

SRC 		= 	main.cpp Bureaucrat.cpp
HEADERS		=	Bureaucrat.hpp

SRC_FOLDER	=	srcs/
BIN_FOLDER	=	bin
OBJ_FOLDER	=	$(BIN_FOLDER)/obj
INCLUDE_FOLDER = includes/


DEPS		= $(patsubst %,$(INCLUDE_FOLDER)/%,$(HEADERS))
OBJ 		= $(addprefix $(OBJ_FOLDER)/,$(SRC:.cpp=.o))
SRCLOCA		= $(shell find $(SRC_FOLDER) -type d)
OBJLOCA		= $(subst $(SRC_FOLDER), $(OBJ_FOLDER), $(SRCLOCA))

YELLOW 		= \033[0;33m
GREEN		= \033[0;32m
END_COLOR	= \033[0m

FLAGS		=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		@c++ -o $(NAME) $(OBJ)
		@printf "$(GREEN)\\nCompilation finish \\n$(END_COLOR)"

$(OBJ_FOLDER)/%.o:	$(SRC_FOLDER)/%.cpp $(DEPS) | $(OBJ_FOLDER)
	@c++ $(FLAGS) -c $< -o $@ -g

$(OBJ_FOLDER):
	@mkdir -p $(OBJLOCA)

$(BIN_FOLDER):
	@mkdir -p $(BIN_FOLDER)

clean :
	@rm -rf $(BIN_FOLDER)
	@printf "$(GREEN)Clean [OK] $(END_COLOR)\n"

fclean : clean 
	@rm -rf $(NAME)
	@printf "$(GREEN)Fclean [OK] $(END_COLOR)\n"

re : fclean all

.PHONY : all clean fclean re