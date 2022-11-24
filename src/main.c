#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/utils.h"

// Zyunion compile file.zy

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Poucos argumentos foram passados\n");
		return 1;
	}

	if (strcmp(argv[1], "compile") == 0)
	{
		char *source = read_ascii_file(argv[2]);
		printf("%s\n", source);
		free(source);
	}

	return 0;
}