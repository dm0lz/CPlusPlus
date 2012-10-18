#include <iostream>

using namespace std;


int main (int argc, char * const argv[]) {
    
	
	
	
	
	int nombre;
	char reponse;
	bool recommencer=true;
	
	
	
	do
		
	{
		
	cout<< "Veuillez entrer le nombre dont vous voulez tester la paritée :" <<endl;
	cin>>nombre;
	
	if (nombre % 2 == 0) {
		cout << "le nombre est paire"<<endl;
	}
	else {
		cout << "le nombre est imapire"<<endl;
	}
		
		cout << "souhaiter-vous tester un autre nombre ?? (o/n)" <<endl;
		cin >> reponse;
		
		if (reponse == 'n') {
			recommencer=false;
		}else if (reponse == 'o') {
			recommencer=true;
		}
		
	}
	
	while (recommencer==true);
	
}
