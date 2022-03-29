#include "retangulo.h"
#include <iostream>
#include <locale>

using namespace std;

int main() {
	locale::global(locale(""));
	int numeropontos;
	cout << "Numeros que pontos que ter utilizar"; 
	cin >> numeropontos;
	if (numeropontos <= 1)
		cout << "apaz mas que é isto...";
	else {
		ponto* vPontos = new ponto[numeropontos];
		lePontos(vPontos, numeropontos);
		escrevePontos(vPontos, numeropontos);
		retangulo* pRetangulo = defineRectangulo(vPontos, numeropontos);
		cout << "Area do triangulo é : " << calculaArea(pRetangulo);
		delete[]vPontos;
		delete pRetangulo;
	}
;
}