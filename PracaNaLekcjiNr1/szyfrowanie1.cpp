// szyfrowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
#include <string>

string szyfrpodstawieniowy(string odp)
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

string szyfrprzestawieniowy(string odp2)
{
	cout << endl;
	
	for (int i = 0; i < odp2.length() - 1; i += 2)
	{
		swap(odp2[i], odp2[i + 1]);
	}
	return odp2;

	
}

string odszyfrowywanie(string odp3)
{
	string jd = odp3;

	for (int z = 1; z < 26; z++)
	{
		for (int i = 0; i < odp3.length(); i++)
		{
			if (odp3[i] > 96 && odp3[i] < 123)
			{
				odp3[i] -= z;
				if (odp3[i] < 97)
				{
					odp3[i] = odp3[i] % 123 + 26;
					
				}

				
			}
			
			
		}
		cout << odp3 << endl;
		odp3 = jd;
	}
	
	return odp3;
}


int main()
{
	string odp;
	int cyfra;
	string szef3;

	cout << "podaj ciag znakow malymi literami" << endl;
	cout << endl;
	getline(cin, odp);
	cout << endl;

	cout << "wybierz szyfr" << endl;
	cout << "1. szyfr podstawieniowy" << endl;
	cout << "2. szyfr przestawieniowy" << endl;
	cout << "3. szyfr podstawieniowy i przestawieniowy" << endl;
	cout << "4. odszyfruj tekst" << endl;
	cout << endl;
	cin >> cyfra;

	
	if (cyfra == 1)
	{
	  cout << "odpowiedz: " << szyfrpodstawieniowy(odp);
	}
	
	if (cyfra == 2)
	{
		cout <<  "odpowiedz: " << szyfrprzestawieniowy(odp);
	}

	if (cyfra == 3)
	{
		szef3 = szyfrpodstawieniowy(odp);
		szef3 = szyfrprzestawieniowy(szef3);
		cout << "odpowiedz: " << szef3;
	}

	if (cyfra == 4) 
	{

		cout << odszyfrowywanie(odp);
	}
	
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
