// Sudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

class Sudoku {
public:
	Sudoku() {
		yazdir();
	}
	void yazdir() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << matrix[i][j] << " ";
				if ((j + 1) % 3 == 0)
					cout << "\t";
			}
			cout << endl;
			if((i+1)%3==0)
				cout << endl;

		}
	}

	bool satirKontrol(int sayi,int satir) {
		bool sonuc = false;
		for (int i = 0; i < 9; i++) {
			if (matrix[satir][i] == sayi) {
				sonuc = true;
				break;
			}
		}
		return sonuc;
	}
	bool sutunKontrol(int sayi, int sutun) {
		bool sonuc = false;
		for (int i = 0; i < 9; i++) {
			if (matrix[i][sutun] == sayi) {
				sonuc = true;
				break;
			}
		}
		return sonuc;
	}

private:
	int matrix[9][9] = {
		{9,0,0,5,0,0,0,0,0},
		{6,8,7,3,4,0,0,5,0},
		{0,0,4,1,0,7,0,3,0},
			
		{0,4,0,0,2,6,0,0,8},
		{0,2,6,0,5,1,4,9,0},
		{0,9,1,4,0,3,0,6,2},

		{0,0,2,7,0,0,9,0,5},
		{0,0,0,0,0,0,3,0,1},
		{5,0,0,0,0,9,6,0,7}
	};
};

int main()
{
	cout << "Sudoku oyunumuza hos geldiniz\n\n";
	Sudoku sudoku;

	cout << sudoku.satirKontrol(7, 2);
	cout << sudoku.sutunKontrol(5, 4);
}
