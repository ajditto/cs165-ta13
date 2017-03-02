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
};

class HourlyEmployee : public Employee
{
private:
   int hourlyWage;
   
public:
   int getHourlyWage() const { return hourlyWage; }
   void setHourlyWage(int hourlyWage) { this-> hourlyWage = hourlyWage; }
   void display()
   {
      cout << getName() << " - $" << getHourlyWage() << "/hour" << endl;
   }
   
};

class SalaryEmployee : public Employee
{
private:
   int salary;

public:
   int getSalary() { return salary; }
   void setSalary() { this-> salary = salary; }
   void display()
   {
      cout << getName() << " - $" << getSalary() << "/year" << endl;
   }
   
}
