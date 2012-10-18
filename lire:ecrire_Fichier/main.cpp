#include <iostream>
#include <fstream>
using namespace std;


int main (int argc, char * const argv[]) {

	string userInput(""), ligne;

	cout << "bienvenue dans le tp lecture ecriture dans un fichier"<<endl;
	cout << "veuillez saisir la phrase que vous voulez enregistrer dans le fichier"<<endl;
	cin >> userInput;
	
	string const nomFichier="/Users/molz/fichier.txt";
	ofstream monFluxEcriture(nomFichier.c_str(), ios::app);
	monFluxEcriture << userInput<<endl;
	
	cout << "le programme va maintenant lire dans le fichier :"<<endl;
	
	ifstream monFluxLecture("/Users/molz/fichier.txt");
	
	while (getline(monFluxLecture, ligne)) {
		cout << ligne <<endl;
	}
	

}
