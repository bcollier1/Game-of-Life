// GOL.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int grid[20][20];
int newgrid[20][20];
int alive;

void gridprint() { //First grid

	//Drawing the first grid
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			cout << grid[i][j];
		}
		cout << "\n";
	}
}

void gridprint2() { //Second grid with rules
	for (int x = 0; x < 20; x++) {
		for (int y = 0; y < 20; y++) {
			if (grid[x + 1][y]==1) {
				alive++;
			}
			if (grid[x - 1][y]==1) {
				alive++;
			}
			if (grid[x][y + 1]==1) {
				alive++;
			}
			if (grid[x][y - 1]==1) {
				alive++;
			}
			if (grid[x + 1][y + 1]==1) {
				alive++;
			}
			if (grid[x - 1][y - 1]==1) {
				alive++;
			}
			if (grid[x + 1][y - 1]==1) {
				alive++;
			}
			if (grid[x - 1][y + 1]==1) {
				alive++;
			}
			if (grid[x][y] == 1 && alive < 2) { //Rule 1
				newgrid[x][y] = 0;
			}
			else if (grid[x][y] == 1 && (alive == 2 || alive==3)) { //Rule 2
				newgrid[x][y] = 1;
			}
			else if (grid[x][y] == 1 && alive > 3) { //Rule 3
				newgrid[x][y] = 0;
			}
			else if (grid[x][y] == 0 && alive == 3) { //Rule 4
				newgrid[x][y] = 1;
			}

		}
	}
}

void gridprint3() {
	for (int x = 0; x < 20; x++) {
		for (int y = 0; y < 20; y++) {
			grid[x][y] = newgrid[x][y];
		}
	}

}

int main(){
	//Variables
	int x[100];
	int y[100];
	int cell;

	//Initalize the first grid
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			grid[i][j] = 0;
		}
	}

	cout << "How many cells would you like to make alive\n";
	cin >> cell;
	cout << "\n";
	gridprint();
	cout << "\nWhat cell would you like to have alive? (y,x)\n\n";

	//Placing alive cells
	for (int i = 0; i < cell; i++) {
		cin >> x[i] >> y[i];
		x[i] = x[i] - 1;
		y[i] = y[i] - 1;
		grid[x[i]][y[i]] = 1;
	}
	system("CLS");

	do {
		gridprint();
		gridprint2();
		gridprint3();
		cout << "\nDo you want to continue?\n\n";
		system("PAUSE");
		cout << "\n";
	}
 
	while (true);
	return 0;
}