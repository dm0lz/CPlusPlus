#include <iostream>
using namespace std;

typedef float points;

int calculMoyenne (int nbreNotes)
{
	points note=0, coef=0, sommecoef=0, sommenote=0, moyenne=0;
	
	
	for (int i=1; i<=nbreNotes; i++) {
		cout << "veuillez saisir note "<<i<<endl;
		cin >> note;
		cout << "veuillez saisir le coef pour la note "<<note<<endl;
		cin >> coef;
		sommenote=sommenote+(note*coef);
		sommecoef=sommecoef+coef;
	}
	moyenne=sommenote/sommecoef;
	return moyenne;
}
	
	
	
	
	
	

int main (int argc, char * const argv[])
{
	int n;
	cout << "combien de notes desirez vous saisir"<<endl;
	cin >> n ;
	cout << "la moyenne de ces notes est "<<calculMoyenne(n);
}
