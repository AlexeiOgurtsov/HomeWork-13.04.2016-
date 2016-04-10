#include<iostream>
using namespace std;

class Rectangle
{
private:
	double firstside, secondside;
	char sym;
public:

	void DataValid(double &side)
	{
		if (side < 0 || side > 20)
			side = 1;
	}

	void SetDataSides(double fs, double ss)
	{
		firstside = fs;
		secondside = ss;
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
			cout << "3) It is Square" << endl;
		else
		{ 
			cout << "3) It isn't Square" << endl;
		}
	}

	void SetDataSymbol(char symbol)
	{
		sym = symbol;
	}

	void DrawRectangle(double fs, double ss, char sym) // Number of characters longer than the length of 1
		//, because the spacing between two characters is equal to 1
	{
		for (int i = 0; i < ss + 1; i++)
		{
			if (i == 0 || i == ss)
				for (int j = 0; j < fs + 1; j++)
				{
				cout << sym;
				if (j == fs + 1)
					cout<<endl;
				}
			else
			{
				cout << sym;
				cout.width(fs);
				cout << sym;
			}
			cout << endl;
		}
	}
};

int main(){
	double a, b;
	char c;
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
	cout << "Enter the Symbol: ";
	cin >> c;
	sides.SetDataSymbol(c);
	system("cls");
	sides.ShowPart();
	cout<<endl;
	sides.DrawRectangle(a, b, c);// Number of characters longer than the length of 1
		//, because the spacing between two characters is equal to 1
	system("pause");
	return 0;
}