# include "Point.h"

# include <iostream>

Point::Point( float x, float y) : x(x), y(y){}

void Point::deplace( float dx, float dy){
	x += dx;
	y += dy;
}

void Point::affiche()const {
	
	std::cout << " ( " << x << " , " << y << " ) " << std::endl;
}
