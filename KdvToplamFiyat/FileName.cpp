#include <iostream>
using namespace std;

// burada kullan?c?dan ürünün fiyat bilgisini alaca??z ve kullan?c?dan alaca??m?z kdv oran? sonras? ürünün toplam fiyat?n? ve kdv oran?n? hesaplayaca??z

int main()
{
	double Fiyat, ToplamFiyat, Oran, KdvTutari;

	//  kullan?c?dan ürünün fiyat?n? ve kdv oran?n? alal?m
	cout << "Ürünün fiyat?n? giriniz: ";
	cin >> Fiyat;
	cout << "Kdv oran?n? giriniz: ";
	cin >> Oran;

	// kdv tutar?n? ve toplam fiyat? hesaplayal?m
	KdvTutari = Fiyat * Oran / 100;
	ToplamFiyat = Fiyat + KdvTutari;

	// bu sonu?lar? ekrana yazal?m
	cout << "Ürünün Toplam Fiyat?: " << ToplamFiyat << endl;
	cout << "Üründeki KDV Miktar?: " << KdvTutari << endl;


	return 0;
}