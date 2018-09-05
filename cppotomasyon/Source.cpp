#include<iostream> 
#include<string> 
#include <clocale> 
using namespace std;

class ak_ort
{
public:
	double notAl()
	{
		const int notCesidi = 8;
		const char notlar[notCesidi][2] = {
			'A', 'A',
			'B', 'A',
			'B', 'B',
			'C', 'B',
			'C', 'C',
			'D', 'C',
			'D', 'D',
			'F', 'F'
		};
		double degerler[notCesidi] = { 4, 3.5, 3, 2.5, 2, 1.5, 1, 0 };
		char harf[3];
		cin >> harf;
		for (int a = 0; a < notCesidi; a++)
		{
			if (harf[0] == notlar[a][0] && harf[1] == notlar[a][1])
			{
				return degerler[a];
			}
		}
	}

	void f(int n)
	{
		double top1 = 0, i, top2 = 0;
		for (int k = 1; k <= n; k++)
		{
			cout << k << ".dersin kredisini giriniz :" " ";
			cin >> i;
			top1 += i;
			cout << "Harf notunu giriniz :" " ";
			top2 += notAl()*i;
		}
		cout << endl;
		cout << "*************************************************************************" << endl;
		cout << endl;
		cout << "Akademik ortalamanýz =" " " << top2 / top1 << endl;
		cout << endl;
		cout << "*************************************************************************" << endl;
		cout << endl;
		if (top2 / top1<1.6)
		{
			cout << "Akademik uyarýnýz vardýr!!!" << endl;
			cout << endl;
			cout << "*************************************************************************" << endl;
		}
		if (1.6 <= top2 / top1 && top2 / top1 <= 1.8)
		{
			cout << "Sýnýrdasýn dostum biraz daha çalýþ!!!" << endl;
			cout << endl;
			cout << "*************************************************************************" << endl;
		}
	}
};

void main()
{
	setlocale(LC_ALL, "turkish");
	cout << "*************************************************************************" << endl;
	cout << endl;
	cout << "\t \t   AKADEMIK ORTALAMA HESAPLAMA PROGRAMI" << endl;
	cout << endl;
	cout << "*************************************************************************" << endl;
	cout << endl;
	cout << "\t \t \t     HARF NOTLARI" << endl;
	cout << "*************************************************************************" << endl;
	cout << endl;
	cout << "AA = 4 \t BA = 3.5 \nBB = 3 \t CB = 2.5 \nCC = 2 \t DC = 1.5 \nDD = 1 \t FF = 0 " << endl;
	cout << endl;
	cout << "*************************************************************************" << endl;
	cout << endl;
	int a;
	cout << "Ders sayisini giriniz :" " ";
	cin >> a;
	cout << endl;
	ak_ort ns; ns.f(a);
	system("pause");
}