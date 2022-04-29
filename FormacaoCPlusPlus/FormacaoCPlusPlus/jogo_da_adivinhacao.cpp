#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	cout << "*********************************************" << endl;
	cout << "***** Bem-vindos ao jogo da adivinha��o *****" << endl;
	cout << "*********************************************" << endl;

	const int NUMERO_SECRETO = 42;

	int chute;

	cout << "Qual � o seu chute? ";
	cin >> chute;

	cout << "O valor do seu chute � " << chute << endl;

	bool acertou = chute == NUMERO_SECRETO;
	bool maior = chute > NUMERO_SECRETO;

	if (acertou) {
		cout << "Parab�ns, voc� acertou o n�mero secreto." << endl;
	}
	else if (maior) {
		cout << "Seu chute foi maior que o n�mero secreto." << endl;
	}
	else {
		cout << "Seu chute foi menor que o n�mero secreto." << endl;
	}

	return 0;
}