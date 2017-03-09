/******************************************************************************
 * Assignment:
 * 	Team Activity 10, STL and iterators overview
 * Professor:
 * 	Bro. McCracken, CS165
 * Authors:
 * 	Andrew Ditto and Dylan Bullock
 *****************************************************************************/
#include <iostream>
#include <vector>
using namespace std;


void promptNumbers (vector<int*> &numbs);
void displayNumbers(vector<int*> &numbs);
void removeOdds(vector<int*> &numbs);

int main() {
   vector<int*> numbs;
   
   promptNumber(numbs);

   //removeOdds(numbs);

   displayNumbers(numbs);

   return 0;
}

void promptNumbers(vector<int*> &numbs)
{
   int input;
   
   do
   {
      cout << "Enter number: ";
      cin >> input;

      if (input != 0)
      {
         numbs.push_back(input);
      }
   }
   
   while(numbs != 0)
}

void displayNumbers(vector<int*> &numbs)
{
   
}

void removeOdds(vector<int*> &numbs)
{
}
