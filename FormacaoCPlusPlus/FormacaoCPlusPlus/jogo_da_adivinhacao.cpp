#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	cout << "*********************************************" << endl;
	cout << "***** Bem-vindos ao jogo da adivinha��o *****" << endl;
	cout << "*********************************************" << endl;

	int numero_secreto = 42;
	cout << "O n�mero secreto � " << numero_secreto << ".N�o conte para ninguem!" << endl;

	return 0;
}