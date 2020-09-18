SRC = src/arraysum.c\
src/checkarmstrong.c\
src/checkprime.c\
src/largestinarray.c\
src/checkperfect.c\
src/missingnoinarray.c\
main.c

INC = -Iinc\

PROJECT_NAME = letsdoit.o

$(PROJECT_NAME): $(SRC)

	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)

	./${PROJECT_NAME}