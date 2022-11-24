#include "../include/parser.h"

void parser_start(TokenList *list, char *source)
{
	char lex[256];
	int lexi = 0;
	int i = 0;

	while (1)
	{
		memset(lex, 0, 256);
		while (source[i] == ' ', source[i] == '\n', source[i] == '\0')
			lex[lexi++] = source[i++];
		lex[lexi] = '\0';

		
	}
}