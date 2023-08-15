#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float celsius;
	cout << "Digite a temperatura em graus Celsius: ", cin >> celsius;
	float resultado;
	cout << "Transformado para Farenheit: " << (celsius * 9/5) + 32;
	return 0;
}
