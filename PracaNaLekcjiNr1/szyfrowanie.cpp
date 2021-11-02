// szyfrowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
#include <string>

string szyfrpodstawieniowy(string odp)
{
	int przes;
	cout << "o ile chcesz przesunac litery? max to 26" << endl;
	cin >> przes;
	for (int i = 0; i < odp.size(); i++)
	{
		if (odp[i] < 123 && odp[i] > 96)
		{
			odp[i] += przes;
			cout << "odp ";
		}

	}
	return odp;
}

int main()
{
	string odp;
	int cyfra;

	cout << "podaj ciag znakow malymi literami" << endl;
	getline(cin, odp);

	cout << "wybierz szyfr" << endl;
	cout << "1. szyfr podstawieniowy" << endl;
	cout << "2. szyfr przestawieniowy" << endl;
	cout << "3. szyfr podstawieniowy i przestawieniowy" << endl;
	cout << "4. odszyfruj tekst" << endl;
	cin >> cyfra;

	
	
	cout << szyfrpodstawieniowy(odp);


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
