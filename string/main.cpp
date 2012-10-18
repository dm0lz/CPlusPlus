#include <iostream>
using namespace std;

int main (int argc, char * const argv[]) {
	
	string mot,motMelange;
	int position=0;
	
	cout << "veuillez entrer un mot :"<<endl;
	cin >> mot;
	cout << endl;
	
	cout << "le mot fait "<<mot.size()<<" lettres" << endl;
	
	while (mot.size()!=0) {
		position=rand() % mot.size();	
		motMelange=mot[position]+motMelange;
		mot.erase(position, 1);
	}
	
	cout << "le mote aleatoirement genere est : "<<motMelange;
	
	
}
