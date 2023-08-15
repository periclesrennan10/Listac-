#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float altura;
	cout << "Digite sua altura: ", cin >> altura;
	float masculino;
	cout << "(masculino) Seu peso ideal eh: " << (altura * 72.7) - 58;
	float feminino;
	cout << "(feminino) Seu peso ideal eh: " << (altura * 62.1) - 44.7;
	return 0;
}
