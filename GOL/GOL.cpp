// GOL.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int grid[20][20];
int cell;
int alive;
int dead;

void gridprint() {

	//Drawing the first grid
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			cout << grid[i][j];
		}
		cout << "\n";
	}
}

int main(){
	//Variables

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
	//gridprint();

	do {
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

	} 
	while (true);
	return 0;
	void rules() {
		for (int x = 0; x < 20; x++) {
			for (int y = 0; y < 20; y++) {
				if cell[x + 1][y]{
					alive++;
				}
					if cell[x - 1][y]{
						alive++;
				}
						if cell[x][y + 1]{
						alive++;
				}
							if cell[x][y - 1]{
								alive++;
							}
								if cell[x + 1][y + 1]{
									alive++;
								}
									if cell[x - 1][y - 1]{
										alive++;
									}
			}
		}
	}
}