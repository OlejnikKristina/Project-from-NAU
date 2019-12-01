# **************************************************************************** #
#                                                                              #
#                                                                              #
#    makefile                                                                  #
#                                                                              #
#    By: Kristina Oliinyk <0lejnikristina@gmail.                               #
#                                                                              #
#    Created: 2019/12/01 17:40:36 by Kristina Ol                               #
#    Updated: 2019/12/01 17:40:36 by Kristina Ol                               #
#                                                                              #
# **************************************************************************** #

NAME		= my_tree
SRC			= BTreeCreateLeaf.cpp BTreeInsertLeaf.cpp \
			BTreeConstDest.cpp BTreeAddFileCabData.cpp \
			BTreeRmTree.cpp BTreeDisplay.cpp
COMPILER	= g++ -g

all:$(NAME)

$(NAME):
	$(COMPILER) -o $(NAME) $(addprefix BTree/, $(SRC)) -I.