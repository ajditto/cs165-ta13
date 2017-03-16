#ifndef BAG_H
#define BAG_H

/***********************************************************
 * Class: Bag
 * Description: Holds ints...for now
 ***********************************************************/
template <class T>
class Bag
{
private:
   int capacity;
   int size;
   int currentAddIndex;
   T* data;

public:
   Bag();
				
   // Getters
   int getCapacity() { return capacity; }
   int getCount() { return currentAddIndex; }

   T getItem(int index);
   void addItem(T item);
};

template <class T>
Bag<T> :: Bag() {
      data = new T[5];
      capacity = 5;
      currentAddIndex = 0;
   }
				
   // Getters
   template <class T>
   T Bag<T> :: getItem(int index) { return data[index]; }
   
   template <class T>
   void Bag<T> :: addItem(T item) {

      if(currentAddIndex == capacity)
      {        
         capacity *= 2;
         T *newData;

         newData = new T[capacity];

         for(int i = 0; i < currentAddIndex; i++)
         {
            newData[i] = data[i];
         }

         delete [] data;

         data = new T[capacity];

         for(int i = 0; i < currentAddIndex; i++)
         {
            data[i] = newData[i];
         }
      }

      data[currentAddIndex] = item;
      currentAddIndex += 1;
      
   }
#endif


