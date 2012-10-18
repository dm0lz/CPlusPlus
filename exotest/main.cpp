#include <iostream>
using namespace std;

int main (int argc, char * const argv[])
{
	int n=0;
	int valeurmax=0;
	int valeurmin=0;
	float moyenne=0;
	int saisie=0;
	int somme=0;
	
	cout << "combien de valeurs n desirez-vous entrer ??"<<endl ;
	cin>>n;
	
		for (int i=1 ; i<=n ; i++) 
		{
			cout << "veuillez saisir la valeur "<<i<<endl;
			
			cin >> saisie;
		
	
			if (i==1) 
			{
				valeurmax=saisie;
				valeurmin=saisie;
			}
			
				else if (saisie>valeurmax) 
				{
					valeurmax=saisie;
				}
				else if (saisie<valeurmin)
				{
					valeurmin=saisie;
				}
				
			
			somme=somme+saisie;
			moyenne=somme/n;
		
			
			if (i==n)
			{
	
	cout << "la valeurmax est : "<<valeurmax<<endl ;
	cout << "la valeurmin est : "<<valeurmin<<endl;
	cout << "la moyenne est : "<<moyenne<<endl;
				
			}
		}
	
	
	
	
}
