#include<iostream>
using namespace std;

class Rectangle
{
private:
	double firstside, secondside;
public:

	void DataValid(double &side)
	{
		if (side < 0 || side > 20)
			side = 1;
	}

	void SetDataSides(double fs, double ss)
	{
		this -> firstside = fs;
		this -> secondside = ss;
	}
	
	bool IsItSquare(double fs, double ss)
	{
		if (fs == ss)
			return true;
		return false;
	}

	double Perimeter(double fs, double ss)
	{
		return 2 * fs + 2 * ss;
	}

	double Square(double fs, double ss)
	{
		return fs*ss;
	}

	void ShowPart()
	{
		cout << "1) Perimeter = " << Perimeter(firstside, secondside) << endl;
		cout << "2) Square = " << Square(firstside, secondside) << endl;
		if (IsItSquare(firstside, secondside))
			cout << "3) It is a Square" << endl;
		else
		{ 
			cout << "3) It isn't a Square" << endl;
		}
	}

	void DrawRectangle(double fs, double ss)
	{
		if (fs == 1 && ss == 1)
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
		for (int i = 0; i < fs - 1; i++)
			cout << (char)196;
		cout << (char)191;
		cout << endl;
		for (int i = 0; i < fs; i++)
		{
			cout << (char)179;
			cout.width(fs);
			cout << (char)179;
			i++;
			cout << endl;
		}
		cout << (char)192;
		for (int i = 0; i < fs - 1; i++)
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
	sides.DataValid(a);
	system("cls");
	cout << "Enter second side of Rectangle:";
	cin >> b;
	sides.DataValid(b);
	sides.SetDataSides(a, b);
	cout << endl;
	system("cls");
	sides.ShowPart();
	cout<<endl;
	sides.DrawRectangle(a, b);
	system("pause");
	return 0;
}

