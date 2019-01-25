// Homework1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void Aysel();
void Demet();
void Bekir();
void Semih();
void Zeynep();
void Muslum();
void Ahmet();
void Oguzhan();
void Onur();
void Ceyhun();
void Mert();

void Iren();

int main()
{
	//Aysel(); //MANTIK YANLIŞ
	//Demet(); //DOĞRU
	//Bekir(); //DOĞRU
	//Semih(); //DOĞRU - do while daha güzel olurdu.
	//Zeynep(); //Program hatalı
	//Muslum(); //Program hatalı - Hiç bişi yapılmamış
	//Ahmet(); //YANLIŞ
	//Oguzhan(); //DOGRU
	//Onur(); //YOK
	//Ceyhun(); //YOK
	//Mert(); //YOK

	Iren();
}

void Aysel() {
	int derinlik, miktar, toplamMiktar;
	double kayıpMiktar;

	std::cout << "Derinligi giriniz :";
	std::cin >> derinlik;

	std::cout << "Bor miktarini giriniz :";
	std::cin >> miktar;
	std::cout << " \n";

	toplamMiktar = miktar;
	kayıpMiktar = miktar * 0.04;

	for (derinlik; derinlik > 0; derinlik--)
	{
		miktar = miktar - kayıpMiktar;
	}
	std::cout << "Cikan bor miktari : " << miktar << "\n";
	std::cout << "Toplam miktar : " << toplamMiktar;
	std::cout << " \n ";
}

void Demet() {
	std::cout << "Metreyi giriniz:" << "\n";
	int metre;
	std::cin >> metre;
	std::cout << "Kiloyu giriniz:" << "\n";
	double kilo;
	std::cin >> kilo;
	while (metre != 0)
	{
		metre--;
		kilo = kilo - (kilo*0.04);
	}
	std::cout << "Kalan toplam bor miktari:" << kilo << "\n";
}

void Bekir() {
	std::cout << "Kaç kilo çıkarılacaktır?Kilo:" << "\n";
	double k;
	std::cin >> k;

	std::cout << "Kaç metreden çıkarılacaktır? Metre:" << "\n";
	int m;
	std::cin >> m;

	while (m != 0)
	{

		k = k - (k*0.04);
		m--;
	}
	std::cout << "Bor miktarı: " << k << "\n";
}

void Semih() {
	int Derinlik;
	double Agirlik;
	std::cout << "Maden derinliğini metre cinsinden giriniz.\n";
	std::cin >> Derinlik;
	double toplam = 0;
	std::cout << "Kepçedeki borun ilk andaki ağırlıgını kg cinsinden giriniz.\n";
	std::cin >> Agirlik;
	int sayac = 0;

	while (Agirlik != 0)
	{
		sayac++;
		for (int i = Derinlik; i > 0; i--)
		{
			Agirlik = Agirlik - Agirlik * 0.04;

		}
		toplam += Agirlik;
		std::cout << sayac << ".Kepçede kalan bor miktarı: " << Agirlik << "\n";
		std::cout << "Kepçedeki borun ilk andaki ağırlıgını kg cinsinden giriniz.\n";
		std::cin >> Agirlik;
	}

	std::cout << sayac << "Kepçede çıkartılan Toplam bor miktarı: " << toplam;
}

void Zeynep() {
	/*double derinlik, madenMiktari;
	std::cout << "maden derinliğini(metre cinsinden) ve kepçedeki maden miktarını(kg) cinsinden giriniz.";
	std::cin >> derinlik;
	std::cin >> madenMiktari;
	for (int i > 0; i = derinlik; i++)
	{
		for (int j > 0; j = madenMiktari; j -= (j*0.4))
		{
			std::cout << i * j;
		}
	}*/
}

void Muslum() {
	/*cout << 4 << "m derinlikteki kazi alanindan kepçe ile çikarilan " << endl;

	cout << " x kg bor  madeninden  kalan bor miktarı =" << 100 << "kg dir" << endl; ;*/


}

void Ahmet() {
	int derinlik;

	int miktar;

	int topmiktar;

	double dokulen;



	std::cout << "madenin derinligini giriniz\n";

	std::cin >> derinlik;



	std::cout << "kepcedeki maden agirligi kac\n";

	std::cin >> miktar;

	dokulen = miktar * 0.04;



	for (int i = derinlik; i > 0; i--)

	{

		std::cout << "cikan miktar:" << (miktar - miktar * 0.04) << "\n";
	}

	std::cout << "toplam miktar:", topmiktar;

	std::cout << "cikan miktar:", miktar;
}

void Oguzhan() {



	std::cout << "Bor kac metre derinlikten cikartildi.?" << "\n";
	int metre;
	std::cin >> metre;
	std::cout << "Cikarilan borun kepcedeki miktarini giriniz" << "\n";
	double agirlik;
	std::cin >> agirlik;
	char Key;
	double toplamBor = 0;
	while (agirlik != 0)
	{
		for (int a = 0; a < metre; a++)
		{
			agirlik = agirlik - (agirlik * 0.04);
		}

		toplamBor += agirlik;
		std::cout << "Kepcede kalan bor miktari" << agirlik << "\n";
		std::cout << "Tekrar hesap yapmak istiyor musunuz E/H basiniz" << "\n";
		std::cin >> Key;
		if (Key == 'e')
		{
			std::cout << "Cikarilan borun kepcedeki miktarini giriniz" << "\n";
			std::cin >> agirlik;
		}
		else if (Key == 'h')
		{
			std::cout << "Cikartilan toplam bor miktari:" << toplamBor << "\n";
			break;
		}


	}
}

void Onur() {

}

void Ceyhun() {

}

void Mert() {

}

void Iren() {
	char doit = 'e';
	while (doit == 'e')
	{
		int m;
		float kg;

		std::cout << "Maden derinliği (m):\n";
		std::cin >> m;


		std::cout << "Bor miktarD1 (kg):\n";
		std::cin >> kg;

		for (int i = m; i > 0; i--)
		{
			kg = kg * 0.96;
		}

		std::cout << "Kalan miktar: " << kg << "\n\n";
		std::cout << "Tekrar hesaplamak istiyor musunuz? (e/h):\n\n";
		std::cin >> doit;
	}

	std::cout << "-SON-";

}