#ifndef FLEGUA_UTIL_H
#define FLEGUA_UTIL_H

#include <fstream>
#include <vector>

using namespace std;

class Util
{
public:
	Util();
	vector<string> devolveConteudoDoArquivo(string nomeDoArquivo);

private:
};

#endif // FLEGUA_UTIL_H
