#ifndef FLEGUA_SIMBOLO_H
#define FLEGUA_SIMBOLO_H

#include <string>
#include <vector>

using namespace std;

typedef struct
{
	string lexema;
	string tipo;
	string literal;
	int linha;
	int hashArquivo;
} Simbolo;

typedef struct
{
	int linha;
	string caractere;
	string mensagem;
} ErroLexador;

typedef struct
{
	vector<Simbolo> tabelaSimbolos;
	vector<ErroLexador> erros;
} ResultadoLexador;

#endif // FLEGUA_SIMBOLO_H