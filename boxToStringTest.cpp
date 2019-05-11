#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box box1,box2;

  initBox(&box1,3.0,4.0,5,6);  
  assertEquals("ul=(3,4),w=5,h=6", boxToString(box1), "boxToString(box1)");

  initBox(&box2,3.1426,6.2832,4.4321,5.5432);
  assertEquals("ul=(3.14,6.28),w=4.43,h=5.54", boxToString(box2), "boxToString(box2)");
  assertEquals("ul=(3,6),w=4,h=6", boxToString(box2,1), "boxToString(box2)");
  assertEquals("ul=(3.143,6.283),w=4.432,h=5.543", boxToString(box2,4), "boxToString(box2)");
  assertEquals("ul=(3.1426,6.2832),w=4.4321,h=5.5432", boxToString(box2,5), "boxToString(box2)");

		   
  return 0;
}
