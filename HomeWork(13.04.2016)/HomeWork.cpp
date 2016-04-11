#include<iostream>
using namespace std;

class Rectangle
{
private:
	double firstside, secondside;
public:

	void SetDataSides(double fs, double ss)
	{
		if (fs < 0 || fs > 20) fs = 1;
		if (ss < 0 || ss > 20) fs = 1;
		this -> firstside = fs;
		this -> secondside = ss;
	}
	
	bool IsItSquare()
	{
		if (firstside == secondside)
			return true;
		return false;
	}

	double Perimeter()
	{
		return 2*firstside + 2*secondside;
	}

	double Square()
	{
		return firstside*secondside;
	}

	void ShowPart()
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

	void DrawRectangle()
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
};

int main(){
	double a, b;
	Rectangle sides;
	cout << "Enter first side of Rectangle:";
	cin >> a;
	system("cls");
	cout << "Enter second side of Rectangle:";
	cin >> b;
	sides.SetDataSides(a, b);
	cout << endl;
	system("cls");
	sides.ShowPart();
	cout<<endl;
	sides.DrawRectangle();
	system("pause");
	return 0;
}

