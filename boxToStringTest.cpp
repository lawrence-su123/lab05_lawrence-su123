#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box box1,box2;

  initBox(&box1,3.0,4.0,5,6);  
  assertEquals("(3,4,5,6)", boxToString(box1), "boxToString(box1)");

  initBox(&box2,3.1426,6.2832,4.4000,5.5000);
  assertEquals("(3.1,6.2,4.4,5.5)", boxToString(box2), "boxToString(coord2)");
  assertEquals("(3,6,4,5)", boxToString(box2,1), "boxToString(coord2,1)");
  assertEquals("(3.142,6.283,4.400,5.500)", boxToString(box2,4), "boxToString(coord2,4)");
  assertEquals("(3.1416,6.2832,4.4000,5.5000)", boxToString(box2,5), "boxToString(coord2,5)");

		   
  return 0;
}
