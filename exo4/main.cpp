#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>
using namespace std;

int main () 
{
	double cotea;
	double coteb;
	double hypotenuse;
	double carrehypotenuse;
	
	cout << "veuillez entrer la valeur du cote a"<<endl;
	cin>>cotea;
	
	cout << "veuillez entrer la valeur du cote b"<<endl;
	cin>>coteb;
	
	carrehypotenuse=(cotea*cotea)+(coteb*coteb);
	hypotenuse=sqrt(carrehypotenuse);
	
	cout << "l hypotenuse a une valeur de "<<hypotenuse;
	
	
	
}
