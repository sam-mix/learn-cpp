// vect.cpp -- methods for the Vector class
#include "vect.h"

namespace VECTOR{
	// compute degrees in one radian
	const double Red_to_deg = 45.0 / atan(1.0);
	// should be about 57.29577951308234

	// private methods
	// calculates magnitude from x and y
	void Vector::set_mag() {
		mag = sqrt(x*x + y*y);
	}

	void Vector::set_ang() {
		if (x == 0.0 && y == 0.0) {
			ang = 0.0;
		} else {
			ang = atan2(y,x);
		}
	}

	// set x from polar coordinate
	void Vector::set_x() {
		x = mag * cos(ang);
	}

	// set y from polar coordinate
	void Vector::set_y() {
		y = mag * sin(ang);
	}

	// public methods
	Vector::Vector() {
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	// construct vector from rectangular coordinates if form is r 
	// (the default) or else from polar coordinates if form is p
	Vector::Vector(double n1, double n2, Mode form) {
		mode = form;
		if (form == RECT) {
			x = n1;
			y = n2;
			set_mag();
			set_ang();
			return;
		}
		if (form == POL) {
			mag = n1;
			ang = n2;
			set_x();
			set_y();
			return;
		}
		cout << "Incottect 3rd argument to Vector() -- ";
		cout << "Vector set to 0" << endl;
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	// reset vector from rectangular coordinates if form is 
	// RECT (the default ) or else form polar coordination if 
	// form is POL
	void Vector::reset(double n1, double n2, Mode form) {
		mode = form;
		if (form == RECT) {
			x = n1;
			y = n2;
			set_mag();
			set_ang();
			return;
		}
		if (form == POL) {
			mag = n1;
			ang = n2;
			set_x();
			set_y();
			return;
		}
		cout << "Incottect 3rd argument to Vector() -- ";
		cout << "Vector set to 0" << endl;
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	Vector::~Vector() {// destructor
	}

	void Vector::polar_mode() { // set to polar mode
		mode = POL;
	}

	void Vector::rect_mode() { // set to rectangular mode
		mode = RECT;
	}

	// operator overloading
	// add two Vectors
	Vector Vector::operator+(const Vector & v) const {
		return Vector(x + v.x, y + v.y);
	}

	// subtract Vector b from a
	Vector Vector::operator-(const Vector& b) const {
		return Vector(x - b.x, y - b.y);
	}

	// negative Vector
	Vector Vector::operator-() const {
		return Vector(-x,-y);
	}

	// multiple n
	Vector Vector::operator*(double n) const {
		return Vector(x * n, y * n);
	}

	// reverse sign of Vector 
	// display rectangular coordinations if mode is RECT,
	// else display polar coordinations if mode is POL
	ostream& operator<< (ostream& os, const Vector& v) {
		if (v.mode == Vector::RECT) {
			os << "(x,y) = (" << v.x <<", " << v.y << ")" << endl;
			return os;
		}

		if (v.mode == Vector::POL) {
			os << "(m,a) = (" << v.mag <<", " << v.ang << ")" << endl;
			return os;
		}
		os << "Vector object mode is invalid." << endl;
		return os;
	}

}

