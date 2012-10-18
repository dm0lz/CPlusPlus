#include <iostream>
using namespace std;

bool estPaire (int val)
{
	bool parite=false;
	if (val%2==0) {
		parite=true;
	}
	return parite;
}

int plusGrand (int a, int b)
{
	int grand;
	if (a>b) {
		grand=a;
	}else {
		grand=b;
	}
	return grand;
}

string estPaireString (int val)
{
	string resultat="impaire";
	if (estPaire(val)==true) {
		resultat="paire";
	}
	return resultat;
}


int main (int argc, char * const argv[]) 
{
    
	int a, b;
	
	cout << "entrer a"<<endl;
	cin>>a;
	cout << "entrer b"<<endl;
	cin>>b;
	
		if (plusGrand(a,b)==a) {
			cout << "a "<<estPaireString(a)<<" plus grand que b "<<estPaireString(b)<<endl;
		}
	
	
}
