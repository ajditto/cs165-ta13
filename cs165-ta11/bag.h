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

      if(currentAddIndex == capacity)
      {        
         capacity *= 2;
         int *newData;

         newData = new int[capacity];

         for(int i = 0; i < currentAddIndex; i++)
         {
            newData[i] = data[i];
         }

         delete [] data;

         data = new int[capacity];

         for(int i = 0; i < currentAddIndex; i++)
         {
            data[i] = newData[i];
         }
      }

      data[currentAddIndex] = item;
      currentAddIndex += 1;
      
   }
};

#endif

