#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float farenheit;
	cout << "Digite a temperatura em Farenheit: ", cin >> farenheit;
	cout << "Transformado em graus Celsius" << (farenheit - 32) / 1.8;
	return 0;
}
