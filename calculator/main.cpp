#include <iostream>
using namespace std;


    
	int addition (int a, int b)
	{
		return a+b;
	}
	
	int soustraction (int a, int b)
	{
		return a-b;
	}
	
	int main()
	{
		int a,b,choixOperation;
		bool restart=true;
		char reponse;
		
		while (restart==true)
		{
		cout << "veuillez selectionner le type d'operation"<<endl;
	
		cout << "1:addition" <<endl<< "2:soustraction"<<endl;
		
		cin >> choixOperation;
		
		cout << "veuillez saisir le chiffre 1"<<endl;
		cin>>a;
		
		cout << "veuillez saisir le chiffre 2"<<endl;
		cin>>b;
		
		switch (choixOperation) {
			case 1:
				cout << addition(a,b)<<endl;
				break;
			case 2:
				cout << soustraction(a,b)<<endl;
				break;

			default:
				break;
		}
			
			
			cout << "souhaitez vous continuer ??"<<endl;
			cin >> reponse;
			
			if (reponse=='n') {
				restart=false;
			}else if (reponse=='o') {
				restart=true;
			}
			
			
		}
	}
	
	

