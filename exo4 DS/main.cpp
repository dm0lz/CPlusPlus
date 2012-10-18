#include <iostream>
using namespace std;

int main (int argc, char * const argv[])
{
	int n=0;
	int valeurmax=0;
	int valeurmin=0;
	int somme;
	
cout << "veuillez saisir le nombre n de valeurs"<<endl;
cin>>n;
	
	for (int i=1; i<=n; i++) 
	{
		cout << "saisir valeur "<< i <<endl;
		int saisie=0;
		cin>>saisie;
			
		if (i==1) 
			{
				valeurmax=saisie;
				valeurmin=saisie;
			}
			else 
			{
				if (saisie>valeurmax) 
					{
					valeurmax=saisie;
					}
				if (saisie<valeurmin) 
					{
					valeurmin=saisie;
					}
			}
		
		somme=somme+saisie;
		
		if (i==n) 
		{
		cout << "la valeur max est : "<<valeurmax<<endl;
		cout << "la valeur min est : "<<valeurmin<<endl;
		cout << "la moyenne est : "<<somme/n;
		}
		
		}
		
	
	
}
