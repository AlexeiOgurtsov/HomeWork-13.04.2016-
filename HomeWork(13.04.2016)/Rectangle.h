#include<iostream>

class Rectangle
{
private:
	double firstside, secondside;
public:
	Rectangle();
	void SetDataSides(double fs, double ss);
	bool IsItSquare();
	double Perimeter();
	double Square();
	void ShowPart();
	void DrawRectangle();
};
