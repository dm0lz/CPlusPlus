
#include <iostream>
using namespace std;

int main (int argc, char * const argv[])
	{
		int nbreallumetterestante=20;
		string joueur;
		int allumette;
		
		
	cout << "Bienvenue au jeu de nim !!!"<<endl;	
	
		
	do
	{
		srand((unsigned)time(NULL));
		int nbrealeatoire = rand() % 3;	
	
		if (allumette>=4 ) 
		{
		cout << "veuillez entrer un chiffre valide"<<endl;
		}	
		
	cout << "il en reste "<<nbreallumetterestante<<endl;
	cout << "joueur, combien en tirez-vous ?"<<endl;	
	cin >> allumette;
		nbreallumetterestante=nbreallumetterestante-allumette;
		
	cout << "il en reste "<<nbreallumetterestante<<endl;
	cout << "l ordi en choisi "<<nbrealeatoire<<endl;	
		nbreallumetterestante=nbreallumetterestante-nbrealeatoire;
		
		
		
	} while (nbreallumetterestante>1);	
		
		
	 if (nbreallumetterestante <= 1) 
		{
			cout << "PERDU !!!";
		}
		
		
	}
