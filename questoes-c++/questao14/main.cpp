#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	for (int i = 1; i <= 9; ++i) {
        cout << "Tabuada do " << i << ":" << endl;
        for (int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    } 
	return 0;
}
