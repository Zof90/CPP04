# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schouite <schouite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/11 16:15:18 by schouite          #+#    #+#              #
#    Updated: 2026/10/22 15:38:49 by schouite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ARGUMENTS

NAME = Animal
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

## DIR

SRC_DIR = src
OBJ_DIR = obj
INCLUDES = -IINCLUDES

## FILES

CFILES = $(SRC_DIR)/main.cpp \
		 $(SRC_DIR)/Animal.cpp \
		 $(SRC_DIR)/Dog.cpp \
		 $(SRC_DIR)/Cat.cpp \
		 $(SRC_DIR)/WrongCat.cpp \
		 $(SRC_DIR)/WrongAnimal.cpp \
		 
OFILES = $(CFILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
HEADER = INCLUDES/Animal.hpp \
		 INCLUDES/Dog.hpp \
		 INCLUDES/Cat.hpp \
		 INCLUDES/WrongCat.hpp \
		 INCLUDES/WrongAnimal.hpp \

## RULES

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) $(CXXFLAGS) $(OFILES) -o $(NAME)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	@rm -rf $(OBJ_DIR)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re