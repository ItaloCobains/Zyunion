CC = gcc
CFLAGS = -c -std=c99 -g 
LDFLAGS = -g
SRC = ${wildcard src/*.c}
HDR = ${wildcard include/*.h}
OBJ = ${SRC:.c=.o}
EXEC = Zyunion

all: ${SRC} ${OBJ} ${EXEC}

${EXEC}: ${OBJ}
	${CC} ${LDFLAGS} $^ -o $@

%.o: %.c ${HDR}
	${CC} ${CFLAGS} $< -o $@

clean:
	rm **/*.o ${EXEC}