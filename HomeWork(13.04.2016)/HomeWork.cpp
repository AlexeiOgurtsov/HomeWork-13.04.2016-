#include<iostream>
using namespace std;
#include "Rectangle.h"

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


