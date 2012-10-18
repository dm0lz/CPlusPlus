#include <iostream>
using namespace std;

void viderTableau(int tabl[] , int tailletableau)
{
	for (int i=0; i<tailletableau; i++) {
		tabl[i]=0;
	}
}
void remplirTab(int tab[], int tailletableau)
{
	bool continuer=true;
	char rep;
	
	
	for (int i=0; i<tailletableau && continuer==true ; i++) {
		cout << "veuillez saisir la valeur "<<i<<" du tableau"<<endl;
		cin >> tab[i];
		cout << "souhaitez vous continuer (o/n) ??"<<endl;
		cin >> rep;
		if (rep=='n') {
			continuer=false;
		}else if (rep=='o') {
			continuer=true;
		}
		}

}
/*
int compteNbreElements (int tablo[])
{
	int compteur;
	while (tablo[]=100) {
		compteur++;
	}
	return compteur;
}

int calculMoyenneValeursPositives(int tab [])
{
	int moyenne, somme,compteur, totalSomme;
	while (tab[]>0) {
		totalSomme=totalSomme+somme;
		compteur++;
	}
	moyenne=totalSomme/compteur;
	return moyenne;
}
*/

void afficheTab(int tailletableau, int tab[])
{
	for (int i=0; i<tailletableau; i++) {
		cout << tab[i];
	}
	
}

int main (int argc, char * const argv[]) 
{
	int tab[3];
	remplirTab(tab,3);
	afficheTab(tab,3);
	
}
