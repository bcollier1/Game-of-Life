// GOL.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	//Variables
	int cell;
	int grid[20][20];
	int x[100];
	int y[100];

	//Initalize the first grid
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			grid[i][j] = 0;
		}
	}

	cout << "How many cells would you like to make alive\n";
	cin >> cell;
	cout << "\n";

	do {

		//Drawing the second grid
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				cout << grid[i][j];
			}
			cout << "\n";
		}
		cout << "\nWhat cell would you like to have alive? (y,x)\n\n";
		
		//Placing alive cells
		for (int i = 0; i < cell; i++) {
				cin >> x[i] >> y[i];
				x[i] = x[i] - 1;
				y[i] = y[i] - 1;
				grid[x[i]][y[i]] = 1;
		}
		system("CLS");

	} 
	while (true);
	return 0;
}