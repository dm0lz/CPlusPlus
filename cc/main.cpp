
#include <iostream>

#include <ctime>

#include <cstdlib>



void getVisaNum(int newNum);

void getMasterNum(int newNum);

void getAmexNum(int newNum);

void getVisaDate();

void getMasterDate();

void getAmexDate();



using namespace std;

int main() {
	
	srand((unsigned int) time);
	
	int userSelection,numSelects=4,numOfCards,userWait;
	
	while(true) {
		
		cout <<endl;
		
		cout << "\t1. Visa\n";
		
		cout << "\t2. Mastercard\n";
		
		cout << "\t3. American Express\n";
		
		cout << "\t4. Exit\n\n";
		
		cout << "\tselect: ";
		
		cin >> userSelection;
		
		
		
		if(userSelection <= numSelects) {
			
			switch(userSelection) {
					
				case 1:
					
					system("cls");
					
					cout << "\tHow many do you need? ";
					
					cin >> numOfCards;
					
					system("cls");
					
					cout << "\tType: Visa" <<endl;
					
					cout << "\tNumber\t\t\tDate" << endl;
					
					cout << "\t-----------------------------"<<endl;
					
					getVisaNum(numOfCards);
					
					break;
					
					
					
				case 2:
					
					system("cls");
					
					cout << "\tHow many do you want? ";
					
					cin >> numOfCards;
					
					system("cls");
					
					cout << "\tType: MasterCard" <<endl;
					
					cout << "\tNumber\t\t\tDate" << endl;
					
					cout << "\t-----------------------------"<<endl;
					
					getMasterNum(numOfCards);
					
					break;
					
					
					
				case 3:
					
					system("cls");
					
					cout << "\tHow many you lookin for? ";
					
					cin >> numOfCards;
					
					system("cls");
					
					cout << "\tType: American Express" <<endl;
					
					cout << "\tNumber\t\t\tDate" << endl;
					
					cout << "\t-----------------------------"<<endl;
					
					getAmexNum(numOfCards);
					
					break;
					
					
					
				case 4:
					
					system("cls");
					
					cout << "\n\twww.mrsunjester.info\n\ttripmonster@gmail .com \n\n\ttype 'exit' to exit: ";
					
					cin >> userWait;
					
					exit(0);
					
					break;
					
			}
			
		}
		
	}
	
	
	
	cout << userSelection;
	
	return 0;
	
}



void getVisaNum(int newNum) {
	
	int visaNum[15];
	
	while(newNum != 0) {
		
		cout << "\t4";
		
		for(int i=0;i<=14;i++) {
			
			visaNum[i] = (rand())%10;
			
			printf("%x",visaNum[i]);
			
		}
		
		newNum--;
		
		cout << "\t";
		
		getVisaDate();
		
	}
	
	cout <<endl;
	
}



void getVisaDate() {
	
	int month,year=8;
	
	month = rand() % 12;
	
	if(month > 0) {
		
		cout << month << "/0" << year <<endl;
		
	} else {
		
		cout << "03/0" << year <<endl;
		
	}
	
}



void getMasterNum(int newNum) {
	
	int masterNum[16];
	
	while(newNum != 0) {
		
		cout << "\t51";
		
		for(int i=0;i<=14;i++) {
			
			masterNum[i] = (rand())%10;
			
			printf("%x",masterNum[i]);
			
		}
		
		newNum--;
		
		cout << "\t";
		
		getMasterDate();
		
	}
	
	cout <<endl;
	
}



void getMasterDate() {
	
	int month,year=8;
	
	month = rand() % 12;
	
	if(month > 0) {
		
		cout << month << "/0" << year <<endl;
		
	} else {
		
		cout << "03/0" << year <<endl;
		
	}
	
}



void getAmexNum(int newNum) {
	
	int amexNum[15];
	
	while(newNum != 0) {
		
		cout << "\t34";
		
		for(int i=0;i<=13;i++) {
			
			amexNum[i] = (rand())%10;
			
			printf("%x",amexNum[i]);
			
		}
		
		newNum--;
		
		cout << "\t";
		
		getAmexDate();
		
	}
	
	cout <<endl;
	
}



void getAmexDate() {
	
	int month,year=8;
	
	month = rand() % 12;
	
	if(month > 0) {
		
		cout << month << "/0" << year <<endl;
		
	} else {
		
		cout << "03/0" << year <<endl;
		
	}
	
}