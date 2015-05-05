#include "lista.h"

/* Testa se lista está vazia */
bool lista::vazia(){
	return (prim == NULL);
}

/* Insere elemento no início da lista. */
void lista::insere(const int& novo){
	elo *p;
	p = new elo(novo);
	p->prox = prim;
	prim = p;
}

bool lista::acessanesimo(int n, int& elem) {
	return true;
}

bool lista::busca(int elem, int& i) {
	return true;
}

/* assumindo que a lista "l2" venha vazia, a função fecha uma lista no "N" elemento. e daí em diante remove para a "l2" */
void lista::separa(int elem, lista &l2) {
	elo * p;

	for (p = this->prim; p != NULL && p->dado != elem; p = p->prox) {}

	if (p != NULL && p->dado == elem) {
		l2.prim = p->prox;
		p->prox = NULL;
	}
}

void lista::concatena(lista &l2) {

}

void lista::retira_ultimo(void) {
	elo * p = this->prim, 
		* ant = NULL;
	
	while (p != NULL) {
		if (p->prox == NULL) {
			if (p == this->prim) {
				delete this->prim;
				this->prim = NULL;
			}
			else {
				delete ant->prox;
				ant->prox = NULL;				
			}			
			break;
		}

		ant = p;
		p = p->prox;
	}
}

/* Remove os n primeiros itens da pilha */
void lista::retira_prefixo(int n) {
	elo * p = this->prim;	
	int cont = 0;

	while (p != NULL && cont < n) {
		prim = prim->prox;
		delete p;
		p = prim;

		cont++;
	}
}

/* Remove da lista o primeiro elemento com valor igual a "novo". Ret. true se removeu. */
bool lista::remove(const int& elem){
	elo *p,
		*ant; /* ponteiro p/
			  anterior */
	/*for (p = prim; ((p != NULL) && (p->dado != elem)); p = p->prox)
		ant = p;
	if (p == NULL) return false;
	if (p == prim) prim = prim->prox;
	else ant->prox = p->prox;
	delete p;*/
	return true;
}

/* Ret. o tamanho da lista */
int lista::tamanho() const {
	int tam = 0;
	elo *p;

	for (p = prim; p != NULL; p = p->prox)
		tam++;
	return tam;
}

/* Imprime todos os elementos da lista */
void lista::imprime() const {
	elo *p;
	cout << "Elementos da lista" << endl;
	for (p = prim; p != NULL; p = p->prox)
		cout << p->dado << ' ';
	cout << endl;
}

/* Inverte um array de caracteres */
void lista::inverte(void) {
	elo * p = this->prim,
		* prox = NULL;

	this->prim = NULL;

	while (p != NULL) {
		prox = p->prox;

		p->prox = prim;
		prim = p;

		p = prox;
	}
}

lista::~lista(){
	elo *p = prim;
	while (prim != NULL)
	{
		p = prim->prox;
		delete prim;
		prim = p;
	}
}