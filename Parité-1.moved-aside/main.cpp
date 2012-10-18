#include <iostream>
using namespace std;



bool estpairea(int a)
{
	bool paritea=true;
	paritea=(a%2==0);
	return paritea;
}

bool estpaireb(int b)
{
	bool pariteb=true;
	pariteb=(b%2==0);
	return pariteb;
}


int main (int argc, char * const argv[]) 
{
    int a, b;
	cout << "veuillez entrer une valeur a"<<endl;
	cin>>a;
	cout << "veuillez entrer une valeur b"<<endl;
	cin>>b;
	
	bool testa=true;
	testa=estpairea(a);
	
	bool testb=true;
	testb=estpaireb(b);
	
	if (testa==true) {
		cout << "a est paire"<<endl;
	}else {
		cout << "a est impaire"<<endl;
	}
	
	if (testb==true) {
		cout << "b est paire"<<endl;
	}else {
		cout << "b est impaire"<<endl;
	}


	
	
}
