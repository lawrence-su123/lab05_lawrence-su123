#include <iostream>
#include <string>
#include <sstream>  // for ostringstream
#include <iomanip> // for setprecision
#include <cmath>
using namespace std;


#include "shapes.h"
#include "shapeFuncs.h"
#include "utility.h"

// Compute distance between two coordinates

double distanceBetween(Coordinate p, Coordinate q) {
	double x = 0;
	x = sqrt(pow(q.x-p.x,2.0)+pow(q.y-p.y,2.0));
	return x; // @@@ STUB
	// HINTS: The distance formula is something you hopefully remember
	//   from H.S. algebra, but if not, Wikipedia is your friend.
	//   The sqrt function is available when you use #include <cmath>, 
	//   and pow(expresssion,2.0) will return expression squared.
	// You can access p.x, p.y, q.x and q.y and use those in your formula.

}


// The function initCoordinate below illustrates passing a struct by coordinateer.
// Inside this function:
//  p   is the address of the struct Coordinate
// (*p) refers to the struct Coordinate itself (we dereference the coordinateer)
// (*p).x refers to the x member of the coordinate
// (*p).y refers to the y member of the coordinate
// p->x is a shortcut for (*p).x ( -> means deference AND THEN go inside the struct)
// p->y is a shortcut for (*p).y ( -> means deference AND THEN go inside the struct)


void initCoordinate(struct Coordinate *p, double xVal, double yVal) {
	(*p).x = xVal;
	(*p).y = yVal;

	//return; //@@@ for a void function, the stub is just a bare return that does nothing
}


string coordinateToString(Coordinate p, int precision) {
	ostringstream oss;
	oss << setprecision(precision); // set precision to 3 decimal places
	oss << "(" << p.x << "," << p.y << ")";
	return oss.str();
}

string boxToString(Box b, int precision) {

	ostringstream oss;
	oss << setprecision(precision);
	oss << "ul=(" << b.ul.x <<","<<b.ul.y<< "),w="<<b.width<<",h="<<b.height;
		// SAMPLE FORMAT: ul=(3.4,-5),w=5,h=7
	//

	return oss.str(); // TODO: Delete this line and comment and replace with appropriate code
}



bool coordinatesApproxEqual(Coordinate coord1, 
		Coordinate coord2, 
		double tolerance) {
	// Two coordinates are approximately equal if the distance between them
	// is less than our tolerance.  (If we want to test for 
	// exact equality, we can pass in a value of zero.)

	return distanceBetween(coord1,coord2) < tolerance;

}

bool boxesApproxEqual(Box b1, Box b2, double tolerance) {

	// Two boxes are approximately equal if their upper left corners are approximately 
	// equal, and if their corresponding widths and height are approx equal.

	// Remember: to test whether double values a and b are approximately equal, you need:
	//   fabs(a - b) < tol
	// Don't use a==b since this doesn't take tolerance into account.
	// You'll need to use this technique for width and height

	// You may find it helpful to abstract out an "approxEqual" function that takes
	// two parameters of type "double".  Put the prototype in your utility.h 
	// and the definition in your utility.cpp file.
if (coordinatesApproxEqual(b1.ul, b2.ul,tolerance))
		{
	if (abs(b1.width-b2.width)<=tolerance&& abs(b1.height-b2.height)<=tolerance){
			return true;
			}
			}
	// TODO: FILL THIS IN WITH APPROPRIATE CODE
	
	return false; // STUB!  TODO: Delete this line and comment and replace with appropriate code
}


// Now write a function to initialize a box.
// You'll need to initialize the upper left x and y,
// the width and the height.
// Note: there is a struct Coordinate inside the struct Box.
// So here's a clue: For the x value, use (*b).ul.x or (b->ul).x 
//  The y value is similar.
// There is also a way to "reuse" initCoordinate, if you are feeling 
//  confident in your understanding of coordinateers and structs.

void initBox(struct Box *b, double ulx, double uly, double w, double h)
{
(*b).ul.x= ulx;
(*b).ul.y= uly;
(*b).width = w;
(*b).height = h;
	
	return; // @@@ For a void function a "naked return" is a "do nothing" stub
}


double areaOfBox(Box b) {
	double area = 0;
	area = b.width * b.height;
	return area;  /* stub---make sure all tests fail initially */
	// you can use b.width to access width, and b.height to access height
}
