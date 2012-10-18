#include <iostream>
using namespace std;

struct pointGeo 
{
	char nom;
	int x;
	int y;
};

void affichePoint (pointGeo point)
{
	cout << point.x;
	cout << point.y;
	cout << point.nom;
}

pointGeo pointOppose (pointGeo pt)
{
	pointGeo resultat;
	pt.nom=resultat.nom;
	pt.x=-resultat.x;
	pt.y=-resultat.y;
	return resultat;
}

int main (int argc, char * const argv[]) 
{
	pointGeo monPoint;
	monPoint.x=10;
	monPoint.y=12;
	monPoint.nom='A';
	
	affichePoint(monPoint);
	
	pointGeo p1 = {'A' ; 20 ; 50}<<endl;
	pointGeo p2;
	p2 = pointOppose(p1);
	
	affichePoint(p2);
}
