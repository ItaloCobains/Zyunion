#include "../include/lexador.h"

Lexador::Lexador() = default;

bool Lexador::eFinalDoCodigo()
{
	return this->linha >= this->codigo.size() - 1 && this->atual >= this->codigo[this->linha].size() - 1;
}

void Lexador::analisarToken()
{
}

ResultadoLexador Lexador::analisar(vector<string> codigo, int hashArquivo)
{
	this->resultado.erros = vector<ErroLexador>();
	this->resultado.tabelaSimbolos = vector<Simbolo>();
	this->codigo = codigo.size() > 0 ? codigo : vector<string>();
	this->hashArquivo = hashArquivo;
	this->linha = 0;
	this->atual = 0;
	this->inicioSimbolo = 0;

	for (size_t i = 0; i < this->codigo.size(); i++)
	{
		this->codigo[i] = this->codigo[i] + "\0";
	}

	while (!this->eFinalDoCodigo())
	{
		this->inicioSimbolo = this->atual;
		this->analisarToken();
	}

	return this->resultado;
}