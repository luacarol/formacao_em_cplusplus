#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	cout << "*********************************************" << endl;
	cout << "***** Bem-vindos ao jogo da adivinhação *****" << endl;
	cout << "*********************************************" << endl;

	return 0;
}