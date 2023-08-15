#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int litrosPorLata = 18;
    const float precoPorLata = 80.0;

    int areaParaPintar;
    cout << "Digite o tamanho da área a ser pintada em metros quadrados: ", cin >> areaParaPintar;

    int litrosNecessarios = ceil(static_cast<float>(areaParaPintar) / 3);
    int latasNecessarias = ceil(static_cast<float>(litrosNecessarios) / litrosPorLata);
    float precoTotal = latasNecessarias * precoPorLata;

    cout << "Quantidade de latas de tinta necessarias: " << latasNecessarias << std::endl;
    cout << "Preco total: R$ " << precoTotal << std::endl;

    return 0;
}

