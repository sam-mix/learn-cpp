// vect.h -- Vector class with <<, mode state
#ifndef VECT_H_
#define VECT_H_

#include <iostream>

using namespace std;

namespace VECTOR {
	class Vector {
	public:
		enum Mode { RECT, POL};
	// RECT for rectangular,POL for Polar modes
	private:
		double x; // horizontal value 
		double y; // vertical value
		double mag; // length of vector
		double ang; // direction of vector in degrees
		Mode mode;
		// private methods for setting values
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval() const { return x; }
		double yval() const { return y; }
		double magval() const { return mag; }
		double angval() const { return ang; }
		void polar_mode();
		void rect_mode();
		// operator overloading
		Vector operator+(const Vector& v) const;
		Vector operator-(const Vector& v) const;
		Vector operator-() const;
		Vector operator*(double n) const;
		// friend
		friend Vector operator*(double n, const Vector & a);
		friend ostream& operator<<(ostream & os, const Vector & v);

	};
}



#endif // !VECT_H_
