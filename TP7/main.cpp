//exo 1

#include <iostream>
using namespace std;

int nombreCoupsPourTrouver()
{
	
	srand ((unsigned)time(NULL));
	int score=0, chiffreChoisi=0;
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
		
		score++;
	}while(nombreAleatoire!=chiffreChoisi);
	
	if (nombreAleatoire==chiffreChoisi){
		cout << "bravo !!!"<<endl;
	}
	cout << endl;
	cout << "il vous a fallu "<<score<<" coups pour trouver le bon chiffre"<<endl; 
	cout << endl;
	return score;
}	


void exercice1 ()
{
	int reponse, compteurParties, meilleurScore, pireScore, somme, moyenne;
	
	do {
		nombreCoupsPourTrouver();
		cout << "souhaitez-vous rejouer ??? (0 pour oui et 1 pour non)";
		cin >> reponse;
		compteurParties++;
	} while (reponse==0);
	
	if (reponse==1)
	{
		cout << "vous avez joue "<<compteurParties<<" partie(s)"<<endl;
		cout << "votre score moyen est de " << moyenne<<endl;
		cout << "votre meilleur score est " << meilleurScore<<endl;
		cout << "votre pire score est " << pireScore<<endl;
		moyenne=somme/compteurParties;
		somme=somme+nombreCoupsPourTrouver();
	}
	
	for (int i = 0; i <= compteurParties; i++) {
		
        if (i == 0) { //Au premier passage on initialise les valeurs min et max
            pireScore = nombreCoupsPourTrouver();
            meilleurScore = nombreCoupsPourTrouver();
        }
        
        //Recherche de la valeur minimale
        if (nombreCoupsPourTrouver() < pireScore) {
            pireScore = nombreCoupsPourTrouver();
        }
        
        //Recherche de la valeur maximale
        if (nombreCoupsPourTrouver() > meilleurScore) {
            meilleurScore = nombreCoupsPourTrouver();
        }
        
        //Au augmente notre somme pour calculer notre moyenne a la fin de la boucle
        somme = somme + nombreCoupsPourTrouver();
    }
	
	moyenne = somme / compteurParties;
	
	
}




//exo 2 :




int CalculPuissance(int n, int p)
{
	for (int i=2 ; i<=p ; i++)
	{
		n=n*n;
	}
	return n;
}

void ex2 () 
{
	int n,p;
	cout << "veuillez saisir un chiffre"<<endl;
	cin >> n;
	cout << "veuillez saisir la puissance à laquelle vous voulez elever le chiffre"<<endl;
	cin >>p;
	cout << CalculPuissance(n, p);
}


//exo 3 :


#include <iostream>
using namespace std;

bool estPremier (int nombre)
{
	bool resultat=true;
	
	for (int i=2; i<=nombre-1; i++) {
		if (nombre%i==0) {
			resultat=false;
		}
	}
	
	return resultat;
}



void ex3 ()
{
	int nombreChoisi=0;
	
	cout << "veuillez saisir un nombre"<<endl;
	cin >> nombreChoisi;
	
	if (estPremier(nombreChoisi)==true) 
	{
		cout << "le nombre choisi "<<nombreChoisi<<" est premier"<<endl;
	}else if (estPremier==false) 	   
	{
		cout << "le nombre choisi "<<nombreChoisi<<" n est pas premier"<<endl;
	}
	
}


	
int main (int argc, char * const argv[]) 
{
	exercice1();
	ex2();
	ex3;
	
	
	
}








