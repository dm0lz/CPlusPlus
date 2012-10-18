#include <iostream>
using namespace std;


struct Date {
	int jour;
	int mois;
	int annee;
};

struct Personne {
	string nom;
	Date dateEmbauche;
	Date datePoste;
};

void afficheDate (Date madate)
{
	cout << madate.jour << "/" << madate.mois << "/" << madate.annee;
}

void affichePersonne (Personne mapersonne)
{
	cout << mapersonne.nom<<endl;
	cout << "Embauche le ";
	afficheDate(mapersonne.dateEmbauche);
	cout << "En poste depuis le ";
	afficheDate(mapersonne.datePoste);

}
				

Personne creerPersonne ()
	{
		Personne mapersonne;
		char reponse;
		
		cout << "veuillez saisir votre nom"<<endl;
		cin >> mapersonne.nom;
		cout << "A quelle date avez-vous ete embauche (j/m/a) ??"<<endl;
		cin >> mapersonne.dateEmbauche.jour;
		cin >> mapersonne.dateEmbauche.mois;
		cin >> mapersonne.dateEmbauche.annee;
		
		cout << "La date d'embauche correspond elle à la date du poste ??"<<endl;
		cin >> reponse;
		if (reponse==0) {
			mapersonne.dateEmbauche=mapersonne.datePoste;
		}else {
			cout << "quelle est la date du poste ??"<<endl;
			cin >> mapersonne.datePoste.jour;
			cin >> mapersonne.datePoste.mois;
			cin >> mapersonne.datePoste.annee;
		}
		return mapersonne;
	}
				

int main (int argc, char * const argv[]) 
{
	Personne mapersonne=creerPersonne;
	affichePersonne(mapersonne);
}
 

