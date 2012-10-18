#include <iostream>
using namespace std;



int main (int argc, char * const argv[]) 
{
	int nbFaconsTotal ;        // compteur du nombre de facons de faire 1 euro
    int nbPieces10c ;          // nombre de pieces de 10 centimes
    int nbPieces5c ;           // nombre de pieces de 5 centimes
    int nbPieces2c ;           // nombre de pieces de 2 centimes
    
    nbFaconsTotal = 0 ;
    for (nbPieces10c=0 ; nbPieces10c<=10 ; nbPieces10c++) { //boucle de 0 à 10 pieces de 10c
        for (nbPieces5c=0 ; nbPieces5c<=20 ; nbPieces5c++) { //boucle de 0 à 20 pieces de 5c
            for (nbPieces2c=0 ; nbPieces2c<=50 ; nbPieces2c++) { //boucle de 0 à 50 pieces de 2c
                if ( nbPieces2c*2 + nbPieces5c*5 + nbPieces10c*10 == 100)
                { 
                    nbFaconsTotal ++ ;
                    cout << "1 euro = " ;
                    if (nbPieces2c)  cout << nbPieces2c  << " X 2c   " ;
                    if (nbPieces5c)  cout << nbPieces5c  << " X 5c   " ;
                    if (nbPieces10c) cout << nbPieces10c << " X 10c  " ;
                    cout << "\n" ;
                }
            }
        }
    }
    
    cout << "\nEn tout, il y a " << nbFaconsTotal << " facons de faire 1 euro\n" ;
}
