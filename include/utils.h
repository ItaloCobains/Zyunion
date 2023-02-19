#ifndef ZYUNION_UTIL_H
#define ZYUNION_UTIL_H

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

#endif // ZYUNION_UTIL_H
