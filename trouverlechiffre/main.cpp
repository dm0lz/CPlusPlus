#include<iostream>
#include<cstdlib>

using namespace std;

int main ()
{
	srand((unsigned)time(NULL));
	int nbrealeatoire=rand() % 100;
	
	
    int nombre;
	
	
	do		{
		cout<<"entrez un nombre"<<endl;
		cin>>nombre;
		
		
		if (nombre>100)
		{
		cout<<"erreur !!! Veuillez entrez un nombre comprit entre 0 et 100 !!!"<<endl;
        }
		if(nombre<nbrealeatoire)
        {
			
			cout<<"c est plus !!!"<<endl;
			
        }
		
        if(nombre>nbrealeatoire)
		{
			
			cout<<"c est moins !!!"<<endl;
        }
		
        if(nombre==nbrealeatoire)
        {
            cout<<"BRAVO !!! GAGNE !!!";
        }
        
		
			} while(nombre!=nbrealeatoire);

	
	
	
}

