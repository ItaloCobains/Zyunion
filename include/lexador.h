#ifndef FLEGUA_LEXADOR_H
#define FLEGUA_LEXADOR_H

#include <vector>
#include <string>
#include <iostream>

#include "./simbolo.h"

using namespace std;

class Lexador
{
public:
	Lexador();

	ResultadoLexador analisar(vector<string> codigo, int hashArquivo);
	bool eFinalDoCodigo();
	void analisarToken();

private:
	vector<string> codigo;
	ResultadoLexador resultado;
	int inicioSimbolo;
	int linha;
	int atual;
	int hashArquivo;
};

#endif // FLEGUA_LEXADOR_H