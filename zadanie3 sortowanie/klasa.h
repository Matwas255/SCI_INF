#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class sortowanie
{
public:
	int temp, temp2;
	sortowanie();
	~sortowanie();
	vector <int> elementy;
	void babelkowe();
	void wstawieniowe();
	void losoweliczby();
};