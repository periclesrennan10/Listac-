#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float num1;
	cout << "Digite sua primeira nota: ", cin >> num1;
	float num2;
	cout << "Digite sua segunda nota: ", cin >> num2;
	float num3;
	cout << "Digite sua terceira nota: ", cin >> num3;
	float num4;
	cout << "Digite sua quarta nota: ", cin >> num4;
	float resultado;
	cout << "Sua media foi: " << (num1 + num2 + num3 + num4) / 4;
	return 0;
}
