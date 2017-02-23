#include <iostream>
#include <iomanip>

#include "circle.h"

void Circle :: promptForCircle()
{
   promptForPoint();

   cout << "Enter radius: ";
   cin >> r;
}

void Circle :: display()
{
   Point :: display();

   cout << " - Radius: " << getR();
}
