/*********************
 * circle.h
 *******************/

#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle : public Point {
   private:
      float r;

   public:
      Circle() : r(0) { }

      //getter
      float getR() const { return r; }

      //setter
      void setR(float r) {this -> r = r; }

      void promtForCircle();
      void displayCircle();
};

#endif
