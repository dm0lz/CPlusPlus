#include <iostream>
using namespace std;

void remplirTableau (int tab[], int tailleTableau)
{
		
	for (int i=0; i<tailleTableau; i++) {
		
		tab[i] = rand() % 100;
		
	}
}

void afficheTableau (int tab[] , int tailleTableau)
{
	for (int i=0; i<tailleTableau; i++) {
		cout << tab[i]<<endl;
	}
}


int retourneIndice (int tab[] , int tailleTableau)
{
	int casePlusGrandeValeur = 0;
	for (int caseEnCours=0;  caseEnCours<tailleTableau; caseEnCours++) {
		if (tab[caseEnCours]>tab[casePlusGrandeValeur]) {
			casePlusGrandeValeur=caseEnCours;
		}
	}
	return casePlusGrandeValeur;
}

int retourneIndiceIntervalle(int tab[] , int tailleTableau , int borneInferieure)
{
	int casePlusGrandeValeurIntervalle = borneInferieure ;
	
	for (int caseEnCours=borneInferieure; caseEnCours<tailleTableau; caseEnCours++) {
		
		if (tab[caseEnCours]>tab[casePlusGrandeValeurIntervalle]) {
			casePlusGrandeValeurIntervalle=caseEnCours;
		}
	}
	return casePlusGrandeValeurIntervalle;
	
}

void fonctionTriDecroissant(int tab[] , int tailleTableau , int i=0)
{
	int casePlusGrandeValeur = 0;
	for (int caseEnCours=0; caseEnCours<tailleTableau; caseEnCours++) {
		int temp=tab[caseEnCours];
		tab[caseEnCours]=tab[casePlusGrandeValeur];
		tab[casePlusGrandeValeur]=temp;
	/*
	if (i==0) {
		tab[i]=tab[retourneIndice (tab , tailleTableau)];
		cout << tab[i];
		cout << endl;
	}
	int borneInferieure=i++;
	if (i>0) {
		tab[i]=tab[retourneIndiceIntervalle(tab ,tailleTableau, borneInferieure)];
	}
		cout << tab[i];
	}*/
}
	

int main (int argc, char * const argv[]) {
	
	srand((unsigned)time(NULL));
	int tab[5];
	
	remplirTableau(tab , 5);
	afficheTableau(tab , 5);
	cout << endl;
	cout << retourneIndice(tab , 5);
	cout << endl;
	cout << retourneIndiceIntervalle(tab , 5 , 3 );
	cout << endl;
	fonctionTriDecroissant(tab , 5);
}
