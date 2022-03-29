#include "ponto.h"
#include <iostream>
#include <locale>

using namespace std;


void lePontos(ponto* const vPontos, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Coordenada X : " << '|' << endl;
		cin >> vPontos[i].x;
		cout << "Coordenada y : " << '|' << endl;
		cin >> vPontos[i].y;
	}
}

void escrevePontos(ponto* const vPontos, int n) {
	for (int i = 0; i < n; i++)
		cout << '(' << vPontos[i].x << ',' << vPontos[i].y << ')' << endl;
}
