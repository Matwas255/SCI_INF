// szyfrowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
#include <string>
#include "klasaszyfrowanie.h"
#include "deszyfrowanie.h"



int main()
{
	string odp;
	string twejsciowy;
	int cyfra;
	string szef3;
	string odp2;
	string odp3;
	string odp4;

	cout << "podaj ciag znakow malymi literami" << endl;
	cout << endl;
	cin >> twejsciowy;
	cout << endl;

	cout << "wybierz szyfr" << endl;
	cout << "1. szyfr podstawieniowy" << endl;
	cout << "2. szyfr przestawieniowy" << endl;
	cout << "3. szyfr podstawieniowy i przestawieniowy" << endl;
	cout << "4. odszyfruj tekst" << endl;
	
	cout << endl;
	cin >> cyfra;
	klasaszyfrowanie cos;
	deszyfrowanie abc;
	
	if (cyfra == 1)
	{
	  odp = cos.szyfrpodstawieniowy(twejsciowy);
	  cout << "odpowiedz: " << odp;
	}
	
	if (cyfra == 2)
	{
		odp2 = cos.szyfrpodstawieniowy(twejsciowy);
		cout << "odpowiedz: " << odp2;
	}

	if (cyfra == 3)
	{
	szef3 = cos.szyfrpodstawieniowy(twejsciowy);
	szef3 = cos.szyfrprzestawieniowy(szef3);
	cout << "odpowiedz: " << szef3;
	}
	
	if (cyfra == 4)
	{
		odp3 = abc.odszyfrowywanie(twejsciowy);
		cout << "odpowiedz: " << odp3;
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
