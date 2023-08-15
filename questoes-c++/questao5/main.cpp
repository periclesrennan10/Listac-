#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float metro;
	cout << "Digite a quantidade de metros: ", cin >> metro;
	float resultado;
	cout << "Convertido para centimetros: " << metro * 100;
	return 0;
}
