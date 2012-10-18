#include <iostream>
using namespace std;

int leplusgranddesdeux(int a, int b)
{
	int resultat;
	
	if (a>b) {
		resultat=a;
	}else {
		resultat=b;
	}
	
	return resultat; 
}

int leplusgranddestrois(int a, int b , int c)
{
	int lePlusGrand;

	lePlusGrand = leplusgranddesdeux(leplusgranddesdeux(a, b), c);
		
	return lePlusGrand;
}
	
int main (int argc, char * const argv[]) 
{
	int a, b, c;
	cout << "veuillez entrer 3 valeurs"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	

	cout << "le plus grand des 3 est :"<<leplusgranddestrois(a, b, c);
	
	
	
	
}
