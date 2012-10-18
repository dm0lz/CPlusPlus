#include <iostream>
using namespace std;

bool plusGrand(int a, int b)
{
	bool resultat=true;
	
	resultat=(a>b);
	
	return resultat;
}	


bool estPaire(int val)
{
	bool parite = true;
	
	parite = (val%2==0);
	
	return parite;
	
}

string estPaireString(int val)
{
	string resultat = "impaire";
	
	if (estPaire(val) == true) {
		resultat = "paire";
	}
	return resultat;
}


int main (int argc, char * const argv[]) 
{
    int a, b;
	cout << "veuillez entrer une valeur a"<<endl;
	cin>>a;
	cout << "veuillez entrer une valeur b"<<endl;
	cin>>b;
	
	
	
	if (plusGrand(a, b)==true) 
	{
		cout << "a "<<estPaireString(a)<<" est plus grand que b "<<estPaireString(b);
	}else 
	{ 
		cout << "a "<<estPaireString(a)<<" est plus petit que b "<<estPaireString(b);
	}
	
}
