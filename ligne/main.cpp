#include <iostream>
using namespace std;

void afficheEspaces (int nombresEspaces)
{
	for (int i=0; i<=nombresEspaces ; i++)
	{cout << " ";
	}
}

int obtenirUniteDuNombre(int nbre)
{
	int unite;
	
	while (nbre>=10) {
		unite=nbre-10;
	}
	return unite;
}

void afficheNombresCroissants (int nbre)
{
	for (int i=nbre; i<=((2*nbre)-1); i++) {
		cout << obtenirUniteDuNombre(nbre);
	}
}

void afficheNombresDecroissants (int nbre)
{
	for (int i=nbre; i>=((2*nbre)-1); i--) {
		cout << obtenirUniteDuNombre(nbre);
	}
}

void pyramide(int nbre)
{
	
	obtenirUniteDuNombre(nbre);
	afficheNombresCroissants(nbre);
	afficheEspaces(nbre);
	afficheNombresDecroissants(nbre);
	
	
}

int main (int argc, char * const argv[]) 
{
	
	pyramide(9);
}

