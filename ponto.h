#ifndef PONTO_H
#define PONTO_H

struct ponto {
	int x;
	int y;
};
void lePontos(ponto* const vPontos, int n);
void escrevePontos(ponto* const vPontos, int n);

#endif 