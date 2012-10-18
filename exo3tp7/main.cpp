#include <iostream>
using namespace std;

bool estPremier (int nombre)
{
	bool resultat=true;
	
	for (int i=2; i<=nombre-1; i++) {
		if (nombre%i==0) {
			resultat=false;
		}
	}
	
	return resultat;
}



int main (int argc, char * const argv[]) 
{
	int nombreChoisi=0;
	
	cout << "veuillez saisir un nombre"<<endl;
	cin >> nombreChoisi;
	
	if (estPremier(nombreChoisi)==true) 
		{
	   cout << "le nombre choisi "<<nombreChoisi<<" est premier"<<endl;
		}else if (estPremier==false) 	   
		{
		   cout << "le nombre choisi "<<nombreChoisi<<" n est pas premier"<<endl;
		}

}