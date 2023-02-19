CC = g++
CFLAGS = -c -std=c++17 -g 
LDFLAGS = -g
SRC = ${wildcard src/*.cpp}
HDR = ${wildcard include/*.h}
OBJ = ${SRC:.c=.o}
EXEC = flegua

all: ${SRC} ${OBJ} ${EXEC}

${EXEC}: ${OBJ}
	${CC} ${LDFLAGS} $^ -o $@

%.o: %.c ${HDR}
	${CC} ${CFLAGS} $< -o $@

clean:
	rm **/*.o ${EXEC}