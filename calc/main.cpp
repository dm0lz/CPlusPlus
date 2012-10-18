#include <iostream>
using namespace std;

int main (int argc, char * const argv[]) 
	{
		float valeur1=0, valeur2=0;
		int n;
		float quotient;
		
		
		cout << "1. addition"<<endl;
		cout << "2. soustraction"<<endl;
		cout << "3. multiplication"<<endl;
		cout << "4. division"<<endl;
		cout << "5. Quitter"<<endl;
		
		cout << "veuillez choisir un type d operation"<<endl;
		cin >>n;
		
	while (n!=5)
	{
	
	switch (n)
			{
				
				
			case 1 :	cout <<"addition\tveuillez entrer 2 valeurs."<<endl;
				cin>>valeur1;
				cin>>valeur2;
				cout <<"le resultat de cet addition est : "<<valeur1+valeur2<<endl;
				
					break;
				
			case 2 :	cout <<"soustraction\tveuillez entrer 2 valeurs."<<endl;
				cin>>valeur1;
				cin>>valeur2;
				cout <<"le resultat de cette soustraction est : "<<valeur1-valeur2<<endl;
				
					break;
				
			case 3 :	cout <<"multiplication\tveuillez entrer 2 valeurs."<<endl;
				cin>>valeur1;
				cin>>valeur2;
				cout <<"le resultat de cet multiplication est : "<<valeur1*valeur2<<endl;
					
					break;
				
			case 4 :	cout <<"division\tveuillez entrer 2 valeurs."<<endl;
				cin>>valeur1;
				cin>>valeur2;
					quotient=valeur1/valeur2;	
				cout <<"le resultat de cet division est : "<<quotient<<endl;
			
					break;		
				
			case 5 :	
				cout <<"le programme va quitter"<<endl;
				
			}
	
	}
		
		
	}
