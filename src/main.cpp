#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "../include/utils.h"

using namespace std;

int main(int argc, char *argv[])
{
	Util util;

	if (argc < 2)
	{
		cout << "Uso: " << argv[0] << " <arquivo>" << endl;
		return 1;
	}

	vector<string> conteudoDoArquivo = util.devolveConteudoDoArquivo(argv[1]);

	for (int i = 0; i < conteudoDoArquivo.size(); i++)
	{
		cout << conteudoDoArquivo[i] << endl;
	}

	return 0;
}