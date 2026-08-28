// main.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	// Create a valid rectangle object
	Rectangle box(5.0, 3.0);
	if (box.Valid())
	{
		cout << "Valid Rectangle: " << endl;
		cout << "Length: " << box.getLength() << endl;
		cout << "Width: " << box.getWidth() << endl;
		cout << "Area: " << box.getArea() << endl;
	}
	else
	{
		cout << "The rectangle is invalid." << endl;
	}
	return 0;
}