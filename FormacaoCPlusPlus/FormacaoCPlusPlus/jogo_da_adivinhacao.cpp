#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	cout << "*********************************************" << endl;
	cout << "***** Bem-vindos ao jogo da adivinhação *****" << endl;
	cout << "*********************************************" << endl;

	const int NUMERO_SECRETO = 42;

	int chute;
	bool nao_acertou = true;
	int tentativas = 0;

	while (nao_acertou) {

		tentativas++;

		cout << tentativas << "ª tentativa" << endl;

		cout << "Qual é o seu chute? ";
		cin >> chute;

		cout << "O valor do seu chute é " << chute << endl;

		bool acertou = chute == NUMERO_SECRETO;
		bool maior = chute > NUMERO_SECRETO;

		if (acertou) {
			nao_acertou = false;
			cout << "Parabéns, você acertou o número secreto." << endl;
		}
		else if (maior) {
			cout << "Seu chute foi maior que o número secreto." << endl;
		}
		else {
			cout << "Seu chute foi menor que o número secreto." << endl;
		}

	}

	cout << "Fim de jogo!" << endl;
	cout << "Você fez " << tentativas << " tentativas" << endl;

	return 0;
}