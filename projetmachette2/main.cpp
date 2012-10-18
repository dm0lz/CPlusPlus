#include <iostream>
using namespace std;

struct Mot {
	string mot;
	string definition;
};

void proposition()
{
	cout << "**************************************" << endl;
	cout << "veuillez choisir l'action a effectuer"<<endl;
	cout << endl;
	cout << "0 : quitter le programme" << endl;
	cout << "1 : ajouter une definition" << endl;
	cout << "2 : supprimer une definition" << endl;
	cout << "3 : afficher une definition" << endl;
	cout << "4 : modifier une definition" << endl;
	cout << "5 : sauvegarder et recharger"<<endl;
	cout << "**************************************" << endl;
	cout << endl;
}

void ajouterDefinition (Mot tableau[], int indiceActuel)
{
	cout << "ajouter une definition"<<endl;
	cout << endl;
	cout << "quel mot souhaitez-vous ajouter ??"<<endl;
	cin >> tableau[indiceActuel].mot;
	cout << "quelle est la definition de ce mot ??"<<endl;
	cin >> tableau[indiceActuel].definition;
	cout << endl;
}

void afficherDefinition (Mot tableau[], int tailleTableau)
{
	string saisieUser;
	
	cout << "De quel mot souhaitez-vous afficher la definition ??"<<endl;
	cin >> saisieUser;
	
	for (int i=0; i<tailleTableau; i++) {
		
	if (tableau[i].mot==saisieUser) {
		
		cout << "la definition de ce mot est : "<<endl;
		cout << tableau[i].definition;
		cout << endl;
		}
	if (tableau[i].mot!=saisieUser){
			do  {
		cout << "le mot n'est pas defini"<<endl;
			}while(tableau[i].mot==saisieUser);
		}
	}
}


int main (int argc, char * const argv[]) {
	
	int indiceActuel = 0;
	const int tailleTableau=100;
    Mot tableau[tailleTableau];
	int choix=0;
	do{
		proposition();
		cout << "veuillez saisir votre choix : ";
		cin>>choix;
		
		switch (choix) {
			case 1:
				ajouterDefinition(tableau, indiceActuel);
				indiceActuel++;	
				break;
			case 2:
				//supprimerDefinition(tableau, tailleTableau);
				break;
			case 3:
				afficherDefinition(tableau, indiceActuel);
				break;
			case 4:
				//modifierDefinition(tableau, tailleTableau);
				break;
			case 5:
				cout << "sauvegarder et recharger"<<endl;
				break;
			default:
				break;
		}
	}while(choix!=0); 	
}

