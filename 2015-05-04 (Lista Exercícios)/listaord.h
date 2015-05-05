#ifndef LISTA_ORD_H
#define LISTA_ORD_H
#include "lista.h"

class lista_ord : public lista{
public:
	void insere(const int &novo);
	bool remove(const int &elem);
	void remove_faixa(int min, int max);
	int conta_ocorrencias(int val);
};

#endif