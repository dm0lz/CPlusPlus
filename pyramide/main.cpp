#include <iostream>
using namespace std;




	void afficheEspaces(int nombreEspaces)
	{
		for (int i=0; i<nombreEspaces; i++) {
			cout << "***";
		}
	}

	int obtenirUniteDuNombre (int nbre)
	{
		while (nbre>=10) {
		nbre = nbre - 10;
		}
		return nbre;
	}
	
	void afficheNombresCroissants (int nbre)
	{
		for (int i=nbre ; i<=((nbre*2)-1) ; i++) {
			cout << obtenirUniteDuNombre(nbre);
		}
		
	}
	
	void afficheNombresDecroissants (int nbre)
	{
		for (int j=nbre ; j>=((nbre*2)-1) ; j--) {
			cout << obtenirUniteDuNombre(nbre);
		}
		
	}
	
/*void pyramide(int nbre)
{
	obtenirUniteDuNombre(nbre);
	afficheNombresCroissants(nbre);
	cout << "*";
	afficheNombresDecroissants(nbre);
	afficheEspaces(nbre);
}*/

void pyramide()
{
	int choixUti=0, nbreEspace=0 ,init=1;
	cout << "\nEntrez votre choix: ";
	cin>>choixUti;
	cout << "\n\n";
	nbreEspace= choixUti;
	
	for(int i = 0;i<nbreEspace; i++)
	{
		afficheEspaces(nbreEspace-i);		
		afficheNombresCroissants(init);
		afficheNombresDecroissants(init);
		afficheEspaces(nbreEspace-i);
		init++;
		cout <<endl;
	}
}

int main()
{
	
	pyramide(8);
}
