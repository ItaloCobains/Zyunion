#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "../include/flegua.h"

using namespace std;

int main(int argc, char *argv[])
{

	if (argc < 2)
	{
		cout << "Uso: " << argv[0] << " <arquivo>" << endl;
		return 1;
	}

	Flegua flegua(argv[1]);

	return 0;
}