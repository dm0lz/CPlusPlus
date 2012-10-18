//Nim -- two-player game

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //total sticks
    const int MAX_STICKS = 20;
    
    //declare variables
    string player1, player2;
    int sticks;
    
    cout << "\tWelcome to Nim!" << endl << endl;
    
    cout << "Players take turns picking up from 1 to 4 sticks from a pile of 20." << endl;
    cout << "Whoever picks up the last stick wins." << endl << endl;
    
    cout << "There are " << MAX_STICKS << " stick<s> left." << endl;
    cout << "Player 1 - how many will you take? ";
    cin >> sticks;
    
    do
    {
		if ( sticks < 20 )
		{ cout << "There are " << (MAX_STICKS - sticks) << " stick<s> left." << endl;
			cout << "Player 2 - how many will you take? ";
			cin >> sticks;
			cout << endl; }
		
		if ( sticks < 20 )
		{ cout << "There are " << (MAX_STICKS - sticks) << " stick<s> left." << endl;
			cout << "Player 1 - how many will you take? ";
			cin >> sticks;
			cout << endl; }
		
		
	}while (sticks > 0);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


/*
 *  2jouerus.h
 *  exo2joueurs
 *
 *  Created by molz on 25/10/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

