#include <iostream>
#include <math.h>
using namespace std;


int CalculPuissance(int n, int p)
{
	for (int i=2 ; i<=p ; i++)
	{
		n=n*n;
	}
	return n;
}

int main (int argc, char * const argv[]) 
{
	int n,p;
	cout << "veuillez saisir un chiffre"<<endl;
	cin >> n;
	cout << "veuillez saisir la puissance à laquelle vous voulez elever le chiffre"<<endl;
	cin >>p;
	cout << CalculPuissance(n, p);
}

