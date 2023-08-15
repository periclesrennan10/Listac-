#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float hrsTrabalhadas;
	cout << "Horas trabalhadas: ", cin >> hrsTrabalhadas;
	float valorHr;
	cout << "Valor da hora: ", cin >> valorHr;
	float resultado;
	cout << "Seu salario: " << hrsTrabalhadas * valorHr;
	return 0;
}
