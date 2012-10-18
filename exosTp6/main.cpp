#include <iostream>
#include <math.h>
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

double distanceEntrePoints (PointGeo pt1, PointGeo pt2)
{
	double dx, dy, distance;
	dx=(pt1 . x)-(pt2 . x);
	dy=(pt1 . y)-(pt2 . y);
	distance=sqrt(dx*dx)+(dy*dy);
	return distance;
}

bool pythagore (PointGeo a, PointGeo b, pointGeo c)
{
	bool estRectangle=false;
	double ab=distanceEntrePoints(a,b);
	double bc=distanceEntrePoints(b,c);
	double ac=distanceEntrePoints(a,c);
	
	if ((ab*ab)+(ac*ac)==(bc*bc) ⎮⎮ (ab*ab)+(bc*bc)==(ac*ac) ⎮⎮ (bc*bc)+(ac*ac)==(ab*ab)) {
		estRectangle=true;
	}
	return estRectangle;
}


string pythagoreString ()
{
	PointGeo a,b,c;
	string resultat="pas rectangle";
	if (pythagore(a,b,c)==true) {
		resultat="rectangle";
	}
	return resultat;
}

int main (int argc, char * const argv[]) 
{
	PointGeo a,b,c;
	a={'A', 1, 1};
	b={'B', 2, 3};
	c={'C', 3, 3};
	
	cout << "le triangles abc est "<<pythagoreString(a,b,c);
	
	
}
