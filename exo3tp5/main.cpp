#include <iostream>
using namespace std;

bool estSyracusien (int n)
{
	
	bool syracusite=false;
	
	
	do{
		if (n%2==0) {
			n=n/2;
		}else {
			n=(3*n)+1;
		}
	}while (n!=1);
	if (n=1){
		syracusite=true;
	}
	
	return syracusite;
}
	



int main (int argc, char * const argv[]) 
{
	int n;
	cout << "veuillez entrer un chiffre"<<endl;
	cin>>n;
	cout << "le chiffre que vous avez entre est un "<<estSyracusien(n);
	
	
}
