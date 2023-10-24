# include "Point.h"

int main () {
	
	Point point ( 1.5f, 2.5f);
	
	point.affiche();
	
	point.deplace( 2.5f, -2.5f);
	
	point.affiche();
	
	return 0;
}
