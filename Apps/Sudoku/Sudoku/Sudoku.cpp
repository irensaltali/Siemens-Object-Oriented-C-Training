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
			if ((i + 1) % 3 == 0)
				cout << endl;

		}
	}

	bool satirKontrol(int sayi, int satir) {
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

	bool kutuKontrol(int sayi, int satir, int sutun) {
		int baslangicSatir = satir / 3;
		baslangicSatir *= 3;
		int baslangicSutun = sutun / 3;
		baslangicSutun *= 3;
		bool sonuc = false;

		for (int i = baslangicSatir; i < baslangicSatir + 3; i++) {
			for (int j = baslangicSutun; j < baslangicSutun + 3; j++) {
				if (matrix[i][j] == sayi) {
					sonuc = true;
					break;
				}
			}
		}
		return sonuc;
	}

	bool bittiMi() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (matrix[i][j] == 0)
					return false;
			}
		}
	}

	void sayiGir(int sayi, int satir, int sutun) {
		if (!satirKontrol(sayi, satir) && !sutunKontrol(sayi, sutun) && !kutuKontrol(sayi, satir, sutun)) {
			matrix[satir][sutun] = sayi;
			yazdir();
		}
	}

	void coz() {
		bool lock = true;
		do {
			lock = true;
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					int holder = 0;
					if (matrix[i][j] == 0) {
						for (int sayi = 1; sayi <= 9; sayi++) {
							if (!satirKontrol(sayi, i) && !sutunKontrol(sayi, j) && !kutuKontrol(sayi, i, j)) {
								if (holder == 0) {
									holder = sayi;
								}
								else {
									break;
								}
							}
						}
						if (holder != 0)
							matrix[i][j] == holder;
					}
				}
			}
		} while (!lock);

		yazdir();
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

	/*cout << sudoku.satirKontrol(7, 2) << endl;
	cout << sudoku.sutunKontrol(5, 4) << endl;
	cout << sudoku.kutuKontrol(1, 0, 0) << endl;*/
	int x = 0;
	do {

		cout << "Oyunu bitirmek icin -1 giriniz." << endl;
		cout << "Yazdirmak icin 1 giriniz." << endl;
		cout << "Sayi girmek icin 2'ye basin. " << endl;
		cout << "Bitt mi? (3) " << endl;
		cout << "Coz. (4) " << endl;
		cin >> x;


		if (x == 1)
			sudoku.yazdir();
		if (x == 2) {
			int sayi, satir, sutun;
			cout << "Girmek istedigiz sayi:";
			cin >> sayi;

			cout << "Girmek istediginiz satir:";
			cin >> satir;

			cout << "Girmek istediginiz sutun:";
			cin >> sutun;

			sudoku.sayiGir(sayi, satir - 1, sutun - 1);
		}
		if (x == 3) {
			if (sudoku.bittiMi())
				cout << "Tebrikler." << endl;
			else
				cout << "Bitmedi." << endl;
		}
		if (x == 4) {
			sudoku.coz();
		}

	} while (x > 0);
}
