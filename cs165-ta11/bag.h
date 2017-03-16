#ifndef BAG_H
#define BAG_H

/***********************************************************
 * Class: Bag
 * Description: Holds ints...for now
 ***********************************************************/
class Bag
{
private:
   int capacity;
   int size;
   int currentAddIndex;
   int* data;

public:
   Bag() {
      data = new int[5];
      capacity = 5;
      currentAddIndex = 0;
   }
				
   // Getters
   int getCapacity() { return capacity; }
   int getCount() { return currentAddIndex; }

   int getItem(int index) { return data[index]; }
   void addItem(int item) {
      data[currentAddIndex] = item;
      currentAddIndex += 1;
   }
};

#endif

