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
   
};

int main() {
   Employee * e[3];
   char letter;
   int counter;

   do{
      cout << "Enter 'h' for hourly or 's' for salaray: ";

      if (letter = 'h') {
         string name;
         int hourly;
        
         cout << "Enter the employee name: ";
         getline (cin, name);
         cin.ignore();
         cout << "Enter the employee hourly wage: ";
         cin >> hourly;

         HourlyEmployee * h = new HourlyEmployee;
         h -> setName(name);
         h -> setHourlyWage(hourly);
         e[counter] = h;

         couter++;
      }
      else if (letter = 's') {
         string name;
         int salary;
        
         cout << "Enter the employee name: ";
         getline (cin, name);
         cin.ignore();
         cout << "Enter the employee yearly salary: ";
         cin >> salary

         SalaryEmployee * s = new SalaryEmployee;
         h -> setName(name);
         h -> setSalary(hourly);
         e[counter] = s;

         couter++;
      }
   while (counter < 3);
 
   
