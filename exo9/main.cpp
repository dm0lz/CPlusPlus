#include <iostream>
using namespace std;

int main() 
{ 
		
	int x=0 , choix;
	
	do {
		cout << "x vaut "<<x<<endl;
		cout << "1 : ajouter 1"<<endl;
		cout << "2 : multiplier par 2"<<endl;
		cout << "3 : multiplier par 4"<<endl;
		cout << "4 : quitter"<<endl;
		cout << "veuillez indiquer votre choix"<<endl;
		cin >> choix;
		
		switch (choix) {
			case 1 : x=x+1;
			break;
			case 2 : x=x*2;
			break;
			case 3 : x=x*4;
			break;
			default:
				
			break;
		}
		
		
	} while (choix!=4);
			
	cout << "finalement x vaut "<<x<<endl;		
			
}




