#include <iostream>
using namespace std;

void remplirTableau(int tabl[], int tailleTableau)
{

	for (int i=0; i<tailleTableau; i++) {
		
			cout << "veuillez entrer la valeur "<<i<<" du tableau :"<<endl;
			cin >> tabl[i];
			cout << endl;
		}
		
}


void afficherTableau(int tabl[], int tailleTableau)
{
	for (int i=0; i<tailleTableau; i++) {
		cout << tabl[i];
	}
}

int main (int argc, char * const argv[]) {
	
	int tab[3];
	remplirTableau(tab,3);
	afficherTableau(tab,3);
}
