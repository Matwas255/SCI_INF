#include "rsa.h"

int modInverse(int a, int m)
{
	for (int x = 1; x < m; x++)
	if (((a % m) * (x % m)) % m == 1)
	return x;
}

string rsa::szyfr_rsa(string tekst_wejsciowy)
{
	int liczba1, liczba2;
	cout << "podaj liczbe\n";
	cin >> liczba1;
	cout << '\n';
	cout << "podaj inna liczbe\n";
	cin >> liczba2;
	cout << '\n';
	int a = liczba1 * liczba2;
	int euler = (liczba1 - 1) * (liczba2 - 1);
	cout << "podaj liczbe z od 1 do " << euler << ". Liczby z i " << euler << " powinny byc wzglednie pierwsze\n";
	int b; cin >> b;
	int c; c = modInverse(b, euler);


	pair<int, int> publiczny;
	publiczny.first = a;
	publiczny.second = b;
	cout << "klucz publiczny to: " << publiczny.first << "   " << publiczny.second << endl;
	pair<int, int> prywatny;
	prywatny.first = a;
	prywatny.second = c;
	cout << "klucz prywatny to: " << prywatny.first << "   " << prywatny.second << endl;
	return " ";
}
