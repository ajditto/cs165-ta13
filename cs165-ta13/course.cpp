#include "course.h"
#include <string>
#include <iostream>
using namespace std;

Course::Course(int size)
{
   // TODO: Fill this in
   this -> size = size;

   classList = new Student [size];
}

Course :: Course (const Course & rhs) {
   this -> size = rhs.size;
   this -> name = rhs.name;

   classList = new Student [this -> size];

   for (int i = 0; i < this -> size; i++) {
      classList[i] = rhs.classList[i];
   }
}

Course:: ~Course()
{
   cout << "Cleaning up course: " << getName() << ".\n";
   
   if(classList != NULL)
   {
      delete [] classList;

      classList = '\0';
   }
}


Student Course::getStudent(int index) const
{
   // TODO: Fill this in
   return classList[index];
}

void Course::setStudent(int index, const Student & student)
{
   // TODO: Fill this in
   classList[index] = student;
}

void Course::displayList() const
{
   cout << "Class list for course: " << name << endl;

   for (int i = 0; i < size; i++)
   {
      classList[i].display();
   }
}

Course & Course :: operator = (const Course & lhs) {
   if (classList != NULL) {
      delete [] classList;
      classList = NULL;
   }
  
   size = lhs.size;
   classList = new Student [size];

   for (int i = 0; i < size; i++) {
      classList[i] = lhs.classList[i];
   }
   
   return *this;
}
