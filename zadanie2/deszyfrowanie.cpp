#include "deszyfrowanie.h"

string deszyfrowanie::odszyfrowywanie(string odp3)
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
