#include<iostream>
#include "Rectangle.h"

using namespace std;


Rectangle:: Rectangle()
{
	firstside = 1;
	secondside = 1;
}

void Rectangle :: SetDataSides(double fs, double ss)
{
	if (fs < 0 || fs > 20 || ss < 0 || ss > 20)
		return;
	this->firstside = fs;
	this->secondside = ss;
}

bool Rectangle :: IsItSquare()
{
	if (firstside == secondside)
		return true;
	return false;
}

double Rectangle :: Perimeter()
{
	return 2 * firstside + 2 * secondside;
}

double Rectangle :: Square()
{
	return firstside*secondside;
}

void Rectangle :: ShowPart()
{
	cout << "1) Perimeter = " << Perimeter() << endl;
	cout << "2) Square = " << Square() << endl;
	if (IsItSquare())
		cout << "3) It is a Square" << endl;
	else
	{
		cout << "3) It isn't a Square" << endl;
	}
}

void Rectangle :: DrawRectangle()
{
	if (firstside == 1 && secondside == 1)
	{
		cout << (char)218;
		cout << (char)191;
		cout << endl;
		cout << (char)192;
		cout << (char)217;
		cout << endl;
		return;
	}
	cout << (char)218;
	for (int i = 0; i < firstside - 1; i++)
		cout << (char)196;
	cout << (char)191;
	cout << endl;
	for (int i = 0; i < firstside; i++)
	{
		cout << (char)179;
		cout.width(firstside);
		cout << (char)179;
		i++;
		cout << endl;
	}
	cout << (char)192;
	for (int i = 0; i < firstside - 1; i++)
		cout << (char)196;
	cout << (char)217;
	cout << endl;
}
