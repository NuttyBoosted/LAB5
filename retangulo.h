#ifndef RETANGULO_H
#define RETANGULO_H
#include "ponto.h"
struct retangulo {
	ponto supEsq;
	ponto infDir;
};

retangulo* defineRectangulo(const ponto* const vPontos, int n);

int calculaArea(const retangulo* const pRec);

void escreveRet(const retangulo* const pRec);

#endif