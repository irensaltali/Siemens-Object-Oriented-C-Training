#include "pch.h"
#include <iostream>
//Soru 1
//
//b = a ^ 20 - 5 * a + 7a - 3 denklemi için a'ya -4 ile +6 arasında 0,4'Iuk artışlarla değer vererek
//a'nin alabileceği değerlere karşılık b'nin sonucunu bulan ve yazan akış diyagramını
//çiziniz ve C programını yazınız.
//
//
//Soru 2
//
//P TL At yarışından kazanan bir adam bu parayı bir bankaya yatırmıştır.
//Yatırdıktan sonra hesabında P TL bulunan adamın çekebileceği kredi ise
//bankadaki tutarın % 150'sidir. Kredi çekmeden önce bir miktar para (K) çeken adam 
//hak ettiği kredinin tamamını ve kendi hesabındaki parayı çekecektir.Bir zaman
//sonra hesap sahibi çektiği krediyi % 15 faizi ile birlikte bankaya ödeyecektir.
//Bu adamın varsa zararını hesaplayan akış diyagramını çiziniz ve C programını yazınız.
//(P ve K klavyeden girilecektir P > K olmak zorundadır.)
//
//Soru 3
//
//Bir öğretmenin yaptığı sınavda 10 öğrencisinin en yüksek ve en düşük alanını merak etmektedir.
//Tam sayı dizisi olarak girilen notların en küçüğünü ve en büyüğünü bulan birer fonksion yazınız.
//1 - Bu fonksiyonlar int değer dönecek ve console çıktı vermeyecek.
//2 - Bu fonksiyonlar değer dönmeyecek ve console çıktı vermeyecek.

void Soru1();
void Soru2();
void Soru3();

double power(double x, int y) {
	double sonuc = 1;
	for (int i = 0; i < y; i++) {
		sonuc *= x;
	}
	return sonuc;
}

int main()
{
	Soru1();
	Soru2();
	Soru3();
}

void Soru1() {
	for (double a = -4; a < 6; a += 0.4) {
		std::cout << "a: " << a << " ->";
		std::cout << (power(a, 20) - 5 * a + 7 * a - 3) << "\n";
	}
}

void Soru2() {
	int p;
	int k;

	std::cout << "Adamin at yarisindan kazandigi parayi girin: (P):\n";
	std::cin >> p;

	std::cout << "Adamin bakadan çektiği parayı girin:\n";
	std::cin >> k;

	if (k > p) {
		std::cout << "Adamin yatirdigindan daha fazla para bankadan cekemez.\n";
	}
	else {
		float zarar = p - (p - k)*1.725;

		if (zarar >= 0) {
			std::cout << "Adamin zarari yok.\n";
		}
		else {
			std::cout << "Adamin zarari:" << zarar << "\n";
		}
	}
	std::cout << "-SON-";
}

int minByValue() {
	int notlar[10] = { 30,12,44,50,90,54,34,67,99,44 };
	int min=notlar[0];

	for (int& x : notlar) {
		if (min > x)
			min = x;
	}

	return min;
}

void minByReferce(int& min) {
	int notlar[10] = { 30,12,44,50,90,54,34,67,99,44 };
	min = notlar[0];

	for (int& x : notlar) {
		if (min > x)
			min = x;
	}
}

int maxByValue() {
	int notlar[10] = { 30,12,44,50,90,54,34,67,99,44 };
	int max = notlar[0];

	for (int x : notlar) {
		if (max < x)
			max = x;
	}

	return max;
}

void maxByReferce(int& max) {
	int notlar[10] = { 30,12,44,50,90,54,34,67,99,44 };
	max = notlar[0];

	for (int& x : notlar) {
		if (max < x)
			max = x;
	}
}
void Soru3() {

	int notlar[10] = { 30,12,44,50,90,54,34,67,99,44 };

	//SEÇENEK 1
	std::cout << "Minimum not: " << minByValue() << "\n";
	std::cout << "Maximum not: " << maxByValue() << "\n";

	//SEÇENEK 2
	int min;
	minByReferce(min);
	std::cout << "Minimum not: " << min << "\n";
	int max;
	maxByReferce(max);
	std::cout << "Minimum not: " << max << "\n";
}

