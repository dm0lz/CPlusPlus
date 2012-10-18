


#include <iostream>
using namespace std;

void plusgrand(int a, int b)
{
	
	
	if (a>b)
	{
		cout << "vrai"<<endl;
		
	}else 
	{
		cout << "false";
	}
}	


int main()
{
	
	int a=0;
	int b=0;
	
	
	cout << "veuillez entrer valeur a"<<endl;
	cin>>a;
	cout << "veuillez entrer valeur b"<<endl;
	cin>>b;
	
	plusgrand (a , b);
	
}






