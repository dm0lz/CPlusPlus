
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    int nbreallumetterestante = 20;
	
	string joueur1, joueur2;
	
    int allumette=0;
    
    
    cout << "Bienvenue au jeu de nim !!!" << endl;
	
    cout << "Les joueurs vont tirer entre 1 et 3 allumette sur une pile de 20." << endl;
    cout << "Celui qui tire la derniere perd." << endl << endl;
	
	
	
	while(nbreallumetterestante>1)
	{
		
		cout << "\nil en reste" << nbreallumetterestante << endl;
		cout << "joueur1 combien en tirez-vous ?";
		cin >> allumette;
		cout <<endl;
		
		if (allumette>=4 || allumette <=0)
		{
			cout << "\ninvalid";
		}
		
		nbreallumetterestante=nbreallumetterestante-(allumette);
		
		cout << "\nil en reste " << nbreallumetterestante << endl;
		cout << "joueur2 combien en tirez-vous ??";
		cin >> allumette;
		cout << endl;
		
		nbreallumetterestante=nbreallumetterestante-(allumette);		
		
		if (allumette>=4 || allumette <=0)
		{
			cout << "\ninvalid";
		}
		if (nbreallumetterestante == 1)
		{
			
			cout << "PERDU !!!";
			
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

