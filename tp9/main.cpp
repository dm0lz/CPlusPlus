#include <iostream>
using namespace std;


void remplirTableau (int tab[], int tailleTableau)
{
	for (int i=0; i<tailleTableau; i++) {
		tab[i]= rand() % 100;
	}
}


void affciheTableau (int tab[], int tailleTableau)
{
	for (int i=0; i<tailleTableau; i++) {
		cout << tab[i]<<endl;
	}
}

int retourneIndice(int tab[], int tailleTableau)
{
	int casePlusGrandeValeur=0;
	for (int i=0;i<tailleTableau; i++) {
		if (tab[i]>tab[casePlusGrandeValeur]) {
			casePlusGrandeValeur=i;
		}
		
	}
	return casePlusGrandeValeur;
}

int retourneIndiceIntervalle(int tab[], int tailleTableau, int borneInferieure)
{
	int casePlusGrandeValeur=borneInferieure;
	
	for (int i=borneInferieure; i<tailleTableau ; i++) {
		if (tab[i]>tab[casePlusGrandeValeur]) {
			casePlusGrandeValeur=i;
		}
	}
	return casePlusGrandeValeur;
}

void fonctionTriDecroissant(int tab[] , int tailleTableau )
{
	
	for (int caseEnCours=0; caseEnCours<tailleTableau; caseEnCours++) {
		int casePlusGrandeValeur = retourneIndiceIntervalle(tab, 4, caseEnCours);
		//cout << tab[casePlusGrandeValeur]<<endl;
		if (casePlusGrandeValeur!=caseEnCours) {
		int temp=tab[caseEnCours];
		tab[caseEnCours]=tab[casePlusGrandeValeur];
		tab[casePlusGrandeValeur]=temp;
		
		}
	}
}

int main (int argc, char * const argv[]) {
	srand((unsigned)time(NULL));
	int tab[4];
	remplirTableau(tab, 4);
	affciheTableau(tab, 4);
	cout << "l'indice de la case contenant la plus grande valeur est "<< retourneIndice(tab, 4);
	cout << endl;
	cout << "l'indice de la case contenant la plus grande valeur dans l'intervalle spécifié est "<<retourneIndiceIntervalle(tab, 4, 2);
	cout << endl;
	fonctionTriDecroissant(tab, 4);
	//cout << endl;
	cout<< "le classement par ordre decroissant donne " <<endl;
	affciheTableau(tab, 4);
}
