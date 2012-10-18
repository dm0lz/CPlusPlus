#include <iostream>
using namespace std;

bool palindrome (char tab[] , int tailleTableau)
{
	
	bool palindromite=true;
	
	for (int i=0; i<tailleTableau/2; i++) 
	{
		if (tab[i] != tab[tailleTableau-1]) {
			palindromite=false;
		}
	}
	
	return palindromite;
	
}



void saisie(char tab[] , int tailleTableau)
{
	for (int i=0; i<tailleTableau ; i++) {
		
		cout << "veuillez saisir le "<<i<<"e caractere"<<endl;
		cin>>tab[i];
		
	}
}

void afficher(char tab[] , int tailleTableau)
{
	for (int i=0; i<tailleTableau; i++) {
		cout << tab[i];
	}

}


int main (int argc, char * const argv[]) 
{
	int tailleMot;
	cout << "combien de lettres ???"<<endl;
	cin>>tailleMot;
	char tab[tailleMot];
	saisie(tab,tailleMot);
	afficher(tab,tailleMot);
	
	cout << endl;
	
	if (palindrome(tab,tailleMot)==1) {
		cout << "pas palindrome";
	}
	if (palindrome(tab,tailleMot)==0) {
		cout << "palindrome";
	}
	
	
}
