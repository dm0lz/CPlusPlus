#include <iostream>
using namespace std;


bool anneeBissextile (int a)
{
	
	bool bissextile=false;
	if ((a%4==0 && a%100!=0) || a%400==0) {
		bissextile=true;
	}
	return bissextile;
}

string anneeBissextileString (int a)
{
	string bissextilite="pas bissextile";
	if (anneeBissextile(a)==true) {
		bissextilite="bissextile";
	}
	return bissextilite;
}

int main (int argc, char * const argv[]) 
{
	int a;
	cout << "veuillez entrer une annee"<<endl;
	cin>>a;
	cout << "l annee que vous avez entre est "<<anneeBissextileString(a)<<endl;
   
}
