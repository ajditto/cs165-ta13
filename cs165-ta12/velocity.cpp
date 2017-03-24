#include "velocity.h"

#include <iostream>
using namespace std;

// TODO: Put your method bodies here
Velocity operator + (const Velocity & lhs, const Velocity & rhs) {
   Velocity out;

   out.dx = lhs.dx + rhs.dx;
   out.dy = lhs.dy + rhs.dy;
 
   return out;
}

Velocity & operator += (Velocity & lhs, const Velocity & rhs) {
   lhs.dx += rhs.dx;
   lhs.dy += rhs.dy;
}


void Velocity :: prompt()
{
   cout << "dx: ";
   cin >> dx;

   cout << "dy: ";
   cin >> dy;
}

void Velocity :: display() const 
{
   cout << "(dx=" << dx << ", dy=" << dy << ")";
}
