// babelkowe.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "klasa.h"
using namespace std;


int main()
{
	int liczba;

	cout << "WYBIERZ SPOSOB SORTOWANIA\n";
	cout << "1. babelkowe\n";
	cout << "2. wstawieniowe\n";

	cin >> liczba;


	if (liczba == 1)
	{
		cout << "PRZED SORTOWANIEM: \n";
		sortowanie cos;
		cos.losoweliczby();
		cout << "\n"
		<< "\n";
		cout << "PO SORTOWANIU: \n";
		cos.babelkowe();
		cos.losoweliczby();
		cout << "\n";

	}

	if (liczba == 2)
	{
		cout << "PRZED SORTOWANIEM: \n";
		sortowanie cos2;
		cos2.losoweliczby();
		cout << "\n"
		<< "\n";
		cout << "PO SORTOWANIU: \n";
		cos2.wstawieniowe();
		cos2.losoweliczby();
		cout << "\n";
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
