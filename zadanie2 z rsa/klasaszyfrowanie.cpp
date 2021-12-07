#include "klasaszyfrowanie.h"

string klasaszyfrowanie::szyfrpodstawieniowy(string odp)
{
	int przes;
	unsigned char mod;

	string mod2;

	cout << "o ile chcesz przesunac litery? max to 26: ";
	cin >> przes;
	cout << endl;

	if (przes > 26)
	{
		cout << "zbyt duza wartosc" << endl;

		return odp;
	}

	cout << endl;

	for (int i = 0; i < odp.length(); i++)
	{
		if (odp[i] < 123 && odp[i] > 96)
		{
			mod = odp[i] + przes;

			if (mod > 122)
			{
				mod = mod % 123 + 97;

			}
			mod2 += mod;
		}
		else
		{
			mod2 += odp[i];
		}

	}
	return mod2;
}

string klasaszyfrowanie::szyfrprzestawieniowy(string odp2)
{
	cout << endl;

	for (int i = 0; i < odp2.length() - 1; i += 2)
	{
		swap(odp2[i], odp2[i + 1]);
	}
	return odp2;


}



