#include "../include/flegua.h"

Flegua::Flegua(string nomeArquivo)
{
	vector<string> conteudoDoArquivo = util.devolveConteudoDoArquivo(nomeArquivo);

	lexador = Lexador();

	ResultadoLexador resultadoLexador = lexador.analisar(conteudoDoArquivo, -1);
}