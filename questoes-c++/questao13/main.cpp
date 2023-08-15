#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float valorHora, hrsTrabalhadas;
	const float ir = 0.11;
	const float inss = 0.08;
	const float sindicato = 0.05;
	

	cout << "Quanto ganha por hora? ", cin >> valorHora;
	cout << "Quantas horas trabalhadas? ", cin >> hrsTrabalhadas;
	
	float resultado = valorHora * hrsTrabalhadas;
	float impostoRenda = resultado * ir;
	float impostoInss = resultado * inss;
	float impostoSindicato = resultado * sindicato;
	float liquido = resultado - impostoRenda - impostoInss - impostoSindicato;
	
	cout << "Salario bruto: " << resultado << endl;
	cout << "Desconto do Imposto de Renda: " << impostoRenda << endl;
	cout << "Desconto do INSS: " << impostoInss << endl;
	cout << "Desconto do Sindicato: " << impostoSindicato << endl;
	cout << "Salario liquido: " << liquido << endl;
	return 0;
}
