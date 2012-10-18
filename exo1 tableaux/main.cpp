#include <iostream>
using namespace std;


int main (int argc, char * const argv[]) 
{
	int tab[10], cpt=0;
	
	for (int i=0; i<=10; i++) {
		cout << "veuillez entrer un entier"<<endl;
		cin >> tab [i];
	}
	for (int i=0; i<=10; i++) {
		if (tab[i]>=10) {
			cpt++;
		}
	}
	cout << "le nombre d'entiers superieurs ou egaux à 10 est de :"<<cpt<<endl;
}
