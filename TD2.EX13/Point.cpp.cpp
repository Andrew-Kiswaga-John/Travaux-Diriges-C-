#ifndef POINT1_H
#define POINT1_H

class Point {
	private:
	float x;
	float y;
	
	public:
	Point( float x, float y);
	void deplace( float dx, float dy );
	void affiche () const;
	
};

#endif


	
