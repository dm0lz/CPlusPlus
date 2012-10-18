#include <iostream>
using namespace std;

struct PointGeo
{
	char nom;
	int x;
	int y;
};


void affichePoint(PointGeo point)
{

	cout << point.x << endl;
	cout << point.y << endl;
	cout << point.nom <<endl;
}

PointGeo ptOppose(PointGeo original)
{
	PointGeo resultat;
	
	resultat.nom = original.nom;
	resultat.x = -original.x;
	resultat.y = -original.y;

	return resultat;
}



int main (int argc, char * const argv[]) 
{
	PointGeo monpoint;
	monpoint.x=10;
	monpoint.y=12;
	monpoint.nom='A';
	
	affichePoint(monpoint);
	
	
	PointGeo p1 = {'A' ; 20 ; 50};
	PointGeo p2;
	p2=ptOppose (p1);
	
	
}
