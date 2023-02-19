#include "../include/utils.h"

Util::Util() = default;

vector<string> Util::devolveConteudoDoArquivo(string nomeDoArquivo)
{
	vector<string> conteudo;
	ifstream arquivo(nomeDoArquivo);

	if (arquivo.is_open())
	{
		string linha;
		while (getline(arquivo, linha))
		{
			conteudo.push_back(linha);
		}
		arquivo.close();
	}
	return conteudo;
}
