#include <iostream>
using namespace std;


int leplusgranddesdeux(int a, int b)
{
	int resultat;
	
	if (a>b) {
		resultat=1;
	}else {
		resultat=0;
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
	
	cout<<leplusgranddesdeux (a, b)<<endl;
	
	if (leplusgranddesdeux(a, b)==0) {
		cout << "a plus petit que b";
	}else {
		cout << "a plus grand que b";
	}

	
	
	
	
	
}
