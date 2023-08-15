#include <iostream>
#include <math.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float raio;
	cout << "Digite o raio do circulo: ", cin >> raio;
	float resultado;
	cout << "A area do circulo eh: " << 3.14 * pow(raio, 2);
	return 0;
}
