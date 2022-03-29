#include "retangulo.h"
#include <iostream>
#include <locale>
using namespace std;

retangulo* defineRectangulo(const ponto* const vPontos, int n) {
	int xmax = vPontos[0].x;
	int ymax = vPontos[0].y;  // Canto Superior Esquerdo ----> Menor X e maior Y .................... Canto Inferior Direito --------> Maior X e menor Y 
	int xmin = vPontos[0].x;
	int ymin = vPontos[0].y;



	retangulo* pRetangulo = new retangulo;

	
	//pRetangulo = NULL;
	
	for (int i = 0; i < n; i++) {
		if (vPontos[i].x < xmin)
			xmin = vPontos[i].x;
		if (vPontos[i].x > xmax)
			xmax = vPontos[i].x;
		if (vPontos[i].x < ymin)
			ymin = vPontos[i].y;
		if (vPontos[i].x > ymax)
			ymax = vPontos[i].y;
	}


	pRetangulo->supEsq.x = xmin;
	pRetangulo->supEsq.y = ymax; // mesma coisa que em cima em comentario , so que agora tamos a fazer referencia desses valores.
	pRetangulo->infDir.x = xmax;
	pRetangulo->infDir.y = ymin;

	return pRetangulo;
}
int calculaArea(const retangulo* const pRec) {
	return (pRec->infDir.x - pRec->supEsq.x) * (pRec->supEsq.y - pRec->infDir.y); // Quem n sabia esta vaia a aula sff , vcs sao burros.
}

