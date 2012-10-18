

#include <iostream>
using namespace std;


bool plusgrand(int a, int b)
{
	bool resultat=true;
	
	resultat=(a>b);

	return resultat;
}	
	

int main()
{
	
	int a=0;
	int b=0;
	
	
	cout << "veuillez entrer valeur a"<<endl;
	cin>>a;
	cout << "veuillez entrer valeur b"<<endl;
	cin>>b;
	
	
	
	if (plusgrand (a , b)==true) 
	{
	
	cout << "la premiere valeur saisie ("<<a<<") est plus grande que la seconde ("<<b<<")"<<endl;
	
	}else
	{
	
		cout << "la premiere valeur saisie ("<<a<<") est plus petite que la seconde ("<<b<<")"<<endl;
	
	}

}
	

	
	
	
	

