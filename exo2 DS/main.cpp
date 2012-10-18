#include <iostream>
using namespace std;

int main (int argc, char * const argv[]) 
{
    int choixutil=0;
	float valeur1=0;
	float valeur2=0;
	
cout << "1. Addition"<<endl;
cout << "2. soustraction"<<endl;
cout << "3. multiplication"<<endl;	
cout << "4. division"<<endl;
cout << "5. exit"<<endl;
	
	cout << "veuillez indiquer votre choix"<<endl;
	cin>>choixutil;
	
	if (choixutil<=4)
	{
	
		cout << "veuillez saisir la 1ere valeur"<<endl;
		cin>>valeur1;
		cout << "veuillez saisir la 2eme valeur"<<endl;
		cin>>valeur2;
	}
	switch (choixutil) 
	{
		case 1:
			cout << "le resultat de cette addition est : "<<valeur1+valeur2;
			break;
		case 2 :
			cout <<"le resultat de cette soustraction est : "<< valeur1-valeur2;
			break;
		case 3 :
			cout <<"le resultat de cette multiplication est : "<< valeur1*valeur2;
			break;
		case 4 :
			while (valeur2==0) 
			{
				cout << "veuillez entrer une valeur2 differente de 0"<<endl;
				cin>>valeur2;
			}
			cout <<"le resultat de cette division est : "<< valeur1/valeur2;
			break;
		
	}
}
