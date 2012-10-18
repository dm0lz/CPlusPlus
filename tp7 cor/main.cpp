// Emmanuelle.Olivier.cpp.cpp†: dÈfinit le point d'entrÈe pour l'application console.
//

#include <iostream>
using namespace std;
#include<time.h>


//exo 1

int nombreCoupsPourTrouver()
{
	
	srand ((unsigned)time(NULL));
	int score=0, chiffreChoisi=0;
	int nombreAleatoire = (rand() % 100+0);
	cout << nombreAleatoire;
	
	do {
		
		do
		{
			cout << "veuillez saisir un chiffre entre 0 et 100"<<endl;
			cin >> chiffreChoisi;
			
		}while (chiffreChoisi<0 || chiffreChoisi>100);
		
		if (chiffreChoisi<nombreAleatoire)
		{
			cout << "Plus !!!"<<endl;
		}else if (chiffreChoisi>nombreAleatoire)
		{
			cout << "Moins !!!"<<endl;
		}
		
		score++;
		
	}while(nombreAleatoire!=chiffreChoisi);
	
	if (nombreAleatoire==chiffreChoisi)
	{
		cout << "bravo !!!"<<endl;
	}
	
	cout << endl;
	cout << "il vous a fallu "<<score<<" coups pour trouver le bon chiffre"<<endl; 
	cout << endl;
	
	return score;
}	


int main ()
{
	int reponse = 0; 
	int i = 0;
	int monscore = 0;
	int compteurParties = 0;
	int pireScore = 1;
	int meilleurScore = 1;
	float masomme = 0;
	float moyenne = 0;
	
	do 
	{
		
		monscore = nombreCoupsPourTrouver();
		
		do
		{
			cout << "souhaitez-vous rejouer ??? (0 pour oui et 1 pour non)";
			cin >> reponse;
			
			//Je recalcule mon pire score ma moyenne et mon meilleur score
			
			//Recherche de la valeur minimale
			if (monscore > pireScore)
			{
				pireScore = monscore;
			}
			
			//Recherche de la valeur maximale
			if (monscore < meilleurScore) 
			{
				meilleurScore = monscore;
			}
			
			
		}while(reponse!=0 && reponse!=1);
		
		compteurParties++;
		
		//Au augmente notre somme pour calculer notre moyenne a la fin de la boucle
		masomme = masomme + monscore;
		
		moyenne = masomme / compteurParties;
		
	} while (reponse==0);
	
	
	cout << "vous avez joue "<<compteurParties<<" partie"<<endl;
	cout << "votre score moyen est de " << moyenne<<endl;
	cout << "votre meilleur score est " << meilleurScore<<endl;
	cout << "votre pire score est " << pireScore<<endl;
	
	cout<<endl;
}

