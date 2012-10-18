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

void afficheDate (Date maDate)
{
	cout << maDate.jour<<"/"<<maDate.mois<<"/"<<maDate.annee;
	
}

void affichePersonne (Personne maPersonne)
{
	cout << maPersonne.nom<<endl;
	afficheDate(maPersonne.dateEmbauche);
	afficheDate(maPersonne.datePoste);
}

Personne creerPersonne ()
{
	Personne p;
	
	cout << "veuillez saisir votre nom"<<endl;
	cin >> p.nom;
	
	cout << "A quelle date avez-vous ete embauché ?? (jj/mm/an)"<<endl;
	cin >> p.dateEmbauche.jour;
	cin >> p.dateEmbauche.mois;
	cin >> p.dateEmbauche.annee;
	
	cout << "depuis quelle date êtes-vous en poste ?? (jj/mm/an)"<<endl;
	cin >> p.datePoste.jour;
	cin >> p.datePoste.mois;
	cin >> p.datePoste.annee;
	
}

int main (int argc, char * const argv[]) 
{
	Personne mapersonne=creerPersonne();
	affichePersonne(mapersonne);
}
