#include "../include/utils.h"

char *read_ascii_file(const char *path)
{
	// Cria a variavel file
	FILE *file = fopen(path, "r");
	if (!file)
	{
		printf("Não consegui abrir o arquivo: %s\n", path);
		return NULL;
	}

	// Pega o tamanho do arquivo
	fseek(file, 0, SEEK_END);
	int size = ftell(file);
	fseek(file, 0, SEEK_SET);

	// Ler o arquivo
	char *buf = (char *)malloc(sizeof(char) * (size + 1));
	if (!buf)
	{
		printf("A alocação de memoria para o arquivo não funcionou \n");
		return NULL;
	}
	fread(buf, 1, size, file);
	buf[size] = '\0';
	fclose(file);

	// retorna o conteudo
	return buf;
}
