/******************************************************************************
 * Assignment:
 *    Team Acitivity 09, Polyorphism
 * Authors
 *    Andrew Ditto and Dylan Bullock
 * Summary
 *    Fufulling the requirements for ta09
 *****************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Employee {
   private: 
      string name;

   public:
      string getName() { return name; }
      void setName(string name) { this -> name = name; }
      void display() = 0;
}
