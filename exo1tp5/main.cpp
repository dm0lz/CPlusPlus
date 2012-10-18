#include <iostream>
using namespace std;

int nbChiffresDuCarre(int n)
{

	int carre;
	int compteurDeChiffre=1;
	
	carre=n*n;
	
	while (carre>=10) {
			
			carre=carre/10;
			compteurDeChiffre++;
		}
	
	
	
	
	return compteurDeChiffre;
}





int main (int argc, char * const argv[]) 
{
	int n;
	cout << "veuillez entrer un chiffre n"<<endl;
	cin>>n;
    cout <<"le carre de n comporte "<< nbChiffresDuCarre(n)<<" chiffre"<<endl;

}
