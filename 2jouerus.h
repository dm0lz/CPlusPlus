
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //total allumettes
    const int nbreallumettemax = 20;
    
    //declare les variables
    
	string player1, player2;
    int allumette;
    bool perdant = false;
	
	
    cout << "Bienvenue au jeu de nim !!!" << endl;
    cout << "Les joueurs vont tirer entre 1 et 4 allumette sur une pile de 20." << endl;
    cout << "Celui qui tire la dernière la dernière perd." << endl << endl;
    
	
	if (allumette == 1)
	{
		perdant = true;
		cout << "PERDU !!!";
		
	
	
	
    cout << "il en reste" << nbreallumettemax << endl;
    cout << "joueur1 combien en tirez-vous ?";
    cin >> allumette;
    
    do
    {
		if ( allumette < 20 )
		{ cout << "il en reste " << nbreallumettemax  << endl;
			cout << "joueur2 combien en tirez-vous ??";
			cin >> allumette;
			cout << endl; }
		
		if ( allumette < 20 )
		{ 
			cout << "il en reste" << nbreallumettemax << endl;
			cout << "joueur1 combien en tirez-vous ??";
			cin >> allumette;
			cout << endl; 
		}
		
		
	}while (allumette > 0);
	}
	
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


/*
 *  2jouerus.h
 *  exo2joueurs
 *
 *  Created by molz on 25/10/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

