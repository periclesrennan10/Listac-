#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float dolar;
	cout << "Digite seu salario em dolar: ", cin >> dolar;
	float resultado;
	cout << "Convertido para real: " << dolar * 4.80;
	return 0;
}
