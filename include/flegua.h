#ifndef FLEGUA_FLEGUA_H
#define FLEGUA_FLEGUA_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "utils.h"
#include "lexador.h"
#include "simbolo.h"

using namespace std;

class Flegua
{
public:
	Flegua(string nomeArquivo);

private:
	Util util;
	Lexador lexador;
};

#endif // FLEGUA_FLEGUA_H