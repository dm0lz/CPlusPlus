#include <iostream>
using namespace std;

int puissance (int nb, int p)
{
	int resultat=1;
		for (int i=1; i<=p; i++) 
		{
			resultat=resultat*nb;
		}
	
	
	return resultat;
}

int main (int argc, char * const argv[]) 
{
	
	int a=2;
	puissance(a, 3);
	int pp=puissance (a,3);
	cout << pp;

   
}
/*int main()
{
	int a=2;
	cout << puissance(a, 3);
	
}*/

/* int main()
{
	cout<< puissance(puissance(2, 2), 2)
}*/