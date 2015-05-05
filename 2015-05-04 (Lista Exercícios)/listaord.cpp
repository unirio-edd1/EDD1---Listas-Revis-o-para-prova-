#include "listaord.h"

void lista_ord::insere(const int &novo){
	elo *p, *q, *ant = NULL;

	q = new elo(novo);
	for (p = prim; ((p != NULL) && (p->dado<novo)); p = p->prox)
		ant = p;
	if (ant == NULL)
		prim = q;
	else
		ant->prox = q;
	q->prox = p;
}

bool lista_ord::remove(const int &elem){

	elo *p, *ant = NULL;

	for (p = prim; ((p != NULL) && (p->dado<elem)); p = p->prox)
		ant = p;
	if ((p == NULL) || (p->dado != elem))
		return false;
	if (ant == NULL) prim = p->prox;
	else ant->prox = p->prox;
	delete p;
	return true;
}

void lista_ord::remove_faixa(int min, int max) {
	elo * p = this->prim,
		* ant = NULL;

	if (min > max) return;

	while (p != NULL && p->dado <= max) {

		if (p->dado >= min) {
			if (p == prim) {
				prim = prim->prox;
				delete p;
				p = prim;
			}
			else {
				ant->prox = p->prox;
				delete p;
				p = ant->prox;
			}
			
		}
		else {
			ant = p;
			p = p->prox;
		}
	}
}

/* Solução 1 */
//void lista_ord::remove_faixa(int min, int max) {
//	elo * p = prim;
//	int aux;
//
//	if (min > max) return;
//
//	while (p != NULL && p->dado <= max) {
//		if (p->dado >= min) {
//			aux = p->dado;
//			p = p->prox;
//			remove(aux);
//		}
//		else {
//			p = p->prox;
//		}
//	}
//}

int lista_ord::conta_ocorrencias(int val) {
	return 0;
}