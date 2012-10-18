#include <iostream>

using namespace std;
int main (int argc, char * const argv[]) 
{
	int n;
	float somme;
	
	do
	{
	cout << "saisir le nombre"<<endl<<endl;
	cin>>n;
	}while (n<1);
	
	for (float i=1; i<=n; i++)
	{
		somme=somme+(1/i);
	}
	cout << "la somme est egale a : "<<somme<<endl;
	
}
