/* Lista.h */
#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

class lista{
protected:
	struct elo{
		int dado;
		elo * prox;
		elo() :prox(NULL){};
		elo(int elem, elo *prox_elem = NULL) :
			dado(elem), prox(prox_elem) {}
	};
	elo *prim;  /* ponteiro para primeiro elemento */
	void imprime_elo_rec(elo*p){
		if (p == NULL)return;
		else{
			cout << p->dado << ' ';
			imprime_elo_rec(p->prox);
		}
	};

public:
	elo* primeiro(){ return prim; };
	lista() :prim(NULL) {};
	virtual ~lista();
	bool vazia();
	virtual void insere(const int& novo);
	virtual bool remove(const int& elem);
	bool acessanesimo(int n, int& elem);
	int tamanho() const;
	void imprime() const;
	bool busca(int elem, int& i);
	void separa(int elem, lista &l2);
	void concatena(lista &l2);
	void retira_ultimo(void);
	void retira_prefixo(int n);
	bool sublista(lista l2);
	void merge(const lista &l1, const lista &l2);
	void inverte(void);
	void insere_fim(const int&novo);
	int ultimo_x(const int &x);
	void remove_posicoes(const lista &l2);
	void remove_posicoes_2(const lista &l2, const lista &l3);
};
#endif