#include <iostream>
using namespace std;

void affichePoint(pointGeo pointRecu)
{
	cout << "point " << pointRecu.nom << "de coordonnees "...
}


pointGeo pointOppose(pointGeo original)
{
	pointGeo oppose;
	
	oppose.nom = original.nom;
	oppose.x = -original.x;
	oppose.y = -original.y;
	
	return oppose;
}

void exercice2()
{
	pointGeo unPoint;
	unPoint.nom='B';
	unPoint.x=-10;
	unPoint.y=-12;
}