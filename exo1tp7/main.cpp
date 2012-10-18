#include <iostream>
using namespace std;

int nombreCoupsPourTrouver()
{
	
	srand ((unsigned)time(NULL));
	int compteur=0, chiffreChoisi=0;
	int reponse;
	int nombreAleatoire = (rand() % 100+0);
	cout << nombreAleatoire;
	do {
		cout << "veuillez saisir un chiffre entre 0 et 100"<<endl;
		cin >> chiffreChoisi;
		
		if (chiffreChoisi<nombreAleatoire) {
			cout << "Plus !!!"<<endl;
		}else if (chiffreChoisi>nombreAleatoire)
		{
			cout << "Moins !!!"<<endl;
		}
		
		compteur++;
	}while(nombreAleatoire!=chiffreChoisi);
	
	if (nombreAleatoire==chiffreChoisi){
		cout << "bravo"<<endl;
		}
	
	cout << "il vous a fallu "<<compteur<<" coups pour trouver le bon chiffre"<<endl; 
	
	return compteur;
}	
	

int main (int argc, char * const argv[]) 
{
	int reponse;
	
	
	do {
		nombreCoupsPourTrouver();
		cout << "souhaitez-vous rejouer ??? (0 pour oui 1 et 1 pour non)";
		cin >> reponse;
	} while (reponse==0);
	if (reponse==1)
	{
		cout << "vous avez joue "<<nombreCoupsPourTrouver()+1<<" partie";
	}
	
}
		
		
	
	




