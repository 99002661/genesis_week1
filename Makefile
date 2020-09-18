SRC = src/arraysum.c\
src/checkarmstrong.c\
src/checkpalindrome.c\
src/checkprime.c\
src/largestinarray.c\
src/missingnoinarray.c\
main.c

INC = -Iinc\

PROJECT_NAME = letsdoit.exe

$(PROJECT_NAME): $(SRC)

	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)

	./${PROJECT_NAME}