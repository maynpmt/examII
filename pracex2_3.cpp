#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
char table[8][8];

void showTable();
void randomTable();

int main(){
	srand(time(0));	
	randomTable();
	showTable();
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}

//Write definition of function randomTable() here.
void randomTable(){
	int i,j;
	char cons[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			table[i][j]=cons[rand()%26];
		}
	}
}


