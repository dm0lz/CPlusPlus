#include <iostream>
using namespace std;
 


int main (int argc, char * const argv[]) 
{
    int x=0, somme=0; 
	double cpt=0;
	double moyenne;
	
	
	do {
		cout << "veuillez entrer un entier strictement positif :"<<endl;
		cin >> x;
		
		if (x>0) {
			somme=somme+x;
			cpt++;
		}else if (x<0) {
			cout << "erreure => veuillez entrer un entier strictement positif :";
		}
		
		} while (x!=0);
	
	if (cpt==0) {
		cout << "vous n'avez pas entré de valeur"<<endl;
		cout << "la moyenne est donc nulle"<<endl;
	}else if (cpt>0) {
		moyenne=somme/cpt;
	}
	
	cout << "la moyenne des valeurs que vous avez saisi est : "<<moyenne;
	
	
	
}
