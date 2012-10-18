#include <iostream>
using namespace std;


int main ()
{
	double suitechiffre;
	int nbrevaleurspaires;
	double modulo;
	
	cout << "veuillez entrer une suite de chiffre se terminant par 0 !!!"<<endl;
	cin>>suitechiffre;
	
	modulo=suitechiffre % 7;
	cout << "il y a "<<modulo<<" valeurs divisibles par 7 dans cette suite de chiffre !!!"<<endl;
	
	
	nbrevaleurspaires=(suitechiffre/2);
	cout << "il y a "<<nbrevaleurspaires<<" valeurs paires dans cette suite de chiffre."<<endl;
	
	

}
