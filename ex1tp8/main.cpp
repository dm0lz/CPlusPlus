#include <iostream>
using namespace std;

void viderTableau(int tabl[] , int tailletableau)
{
	for (int i=0; i<tailletableau; i++) {
		tabl[i]=0;
	}
}
void fonctsaisie(int tab[], int tailletableau)
{
	for (int i=0; i<tailletableau; i++) {
		cout << "veuillez saisir la valeur "<<i<<" du tableau"<<endl;
		cin >> tab[i];
	}
	
}
int compteNbreElements (int tab[] , int tailletableau)
{
	int compteur=0;
	for (int i=0; i<tailletableau; i++) {
		if (tab[i]==100) {
			compteur++;
		}
	}
	return compteur;
}

int calculMoyenne (int tab[] , float tailletableau)
{
	float somme;
	
	for (int i=0; i<tailletableau; i++) {
		if (tab[i]>0) {
			somme= tab[i] +somme;
		}
		
	}
	
	return somme/tailletableau;
}
	

int main (int argc, char * const argv[]) 
{
	int tab[2];
	
	viderTableau(tab,3);
	fonctsaisie(tab,3);
	cout << "il y a "<<compteNbreElements(tab,3)<<" elements de valeur 100 dans le tableau" <<endl;
	cout <<"la moyenne de ces elements est "<< calculMoyenne(tab,3);
}
