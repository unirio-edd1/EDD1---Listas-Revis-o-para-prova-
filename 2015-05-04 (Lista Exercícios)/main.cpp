#include <iostream>
#include "listaord.h"

int Menu()
{
	int Choice;

	cout << "--------------------------\n";
	cout << "Select from:\n";
	cout << "01. Add integer to list\n";
	cout << "02. Remove item from list\n";
	cout << "03. Print list contents.\n";
	cout << "04. N-esimo elemento da lista.\n";
	cout << "05. Busca elemento da lista.\n";
	cout << "06. Remove faixa.\n";
	cout << "07. Conta ocorrencias.\n";
	cout << "08. Separa.\n";
	cout << "09. Concatena.\n";
	cout << "10. Retira ultimo.\n";
	cout << "11. Retira prefixo.\n";
	cout << "12. Inverte.\n";
	cout << "0. Quit.\n";
	cout << "Your choice: ";
	cin >> Choice;
	return Choice;
}

int main(int argc, char *argv[])
{
	lista_ord Lista;
	lista L2;

	int Choice, Item, n, min, max;

	while (Choice = Menu())

		switch (Choice) {
		case 0:
			return 0;
		case 1:
			cout << "Enter item to add: ";
			cin >> Item;
			Lista.insere(Item);
			break;
		case 2:
			if (Lista.remove(Item))
				cout << "Item " <<
				Item << " removed.\n";
			break;
		case 3:
			cout << "Conteudo da lista:\n";
			Lista.imprime();
			break;
		case 4:
			cout << "Entre valor de n: ";
			cin >> n;
			if (Lista.acessanesimo(n, Item))
				cout << "Nesimo: Item =" << Item << "\n";
			break;
		case 5:
			cout << "Entre Item: ";
			cin >> Item;
			if (Lista.busca(Item, n)) {
				cout << "Item " << Item << " eh o " << n << " Item da Lista\n";
			}
			break;
		case 6:
			cout << "Entre min e max: ";
			cin >> min >> max;
			Lista.remove_faixa(min, max);
			break;
		case 7:
			cout << "Entre val: ";
			cin >> Item;
			cout << "ocorrencias = " << (Lista.conta_ocorrencias(Item)) << "\n";
			break;
		case 8:
			cout << "Entre val: ";
			cin >> Item;
			Lista.separa(Item, L2);
			L2.imprime();
			break;
		case 9:
			cout << "Concatena: ";
			L2.imprime();
			L2.concatena(Lista);
			L2.imprime();
			break;
		case 10:
			cout << "Retira ultimo: ";
			Lista.retira_ultimo();
			break;
		case 11:
			cout << "Entre n: ";
			cin >> n;
			Lista.retira_prefixo(n);
			break;		
		case 12:
			L2.insere(1);
			L2.insere(4);
			L2.insere(2);
			L2.imprime();
			L2.inverte();
			L2.imprime();			
			break;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}