#include <iostream>
using namespace std;

	void afficheEspaces(int nombresEspaces)
	{
	for (int i=1; i<=nombresEspaces; i++) {
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
	
	void afficheNombreCroissant (int nbre)
	{
		int i, resultat ;
		
		resultat=(nbre*2)-1;
		
		for (i=nbre; i<=resultat-1; i++) {
			cout <<" "<< obtenirUniteDuNombre(i)<<" ";
		}
		
	}
	
	void afficheNombreDecroissant (int nbre)
	{
		int i, resultat;
		
		resultat=(nbre*2)-1;
		
		for (i=resultat; i>=nbre; i--) {
			cout <<" "<< obtenirUniteDuNombre(i)<<" ";
		}
	}
	
	
	void pyramide()
	{
		for (int i=1; i<=10; i++) {

			afficheEspaces(10-i);
			
			afficheNombreCroissant(i);
			afficheNombreDecroissant(i);
			
			afficheEspaces(10-i);
			
			cout << endl;
		}
	}
	
	
	
	int main (int argc, char * const argv[]) 
	{
		pyramide();
	}
