#include <iostream>
using namespace std;

// burada kullan?c?dan �r�n�n fiyat bilgisini alaca??z ve kullan?c?dan alaca??m?z kdv oran? sonras? �r�n�n toplam fiyat?n? ve kdv oran?n? hesaplayaca??z

int main()
{
	double Fiyat, ToplamFiyat, Oran, KdvTutari;

	//  kullan?c?dan �r�n�n fiyat?n? ve kdv oran?n? alal?m
	cout << "�r�n�n fiyat?n? giriniz: ";
	cin >> Fiyat;
	cout << "Kdv oran?n? giriniz: ";
	cin >> Oran;

	// kdv tutar?n? ve toplam fiyat? hesaplayal?m
	KdvTutari = Fiyat * Oran / 100;
	ToplamFiyat = Fiyat + KdvTutari;

	// bu sonu?lar? ekrana yazal?m
	cout << "�r�n�n Toplam Fiyat?: " << ToplamFiyat << endl;
	cout << "�r�ndeki KDV Miktar?: " << KdvTutari << endl;


	return 0;
}