#include <iostream>
#include <cmath>
#include "coordinate_system.h"
using namespace std;

void coordinate::Car2Cyl() {
	rho = sqrt(x * x + y * y);
	phi = atan(y / x);
	cout << "Data is transformed to Cartesian from Cylindrical" << endl;
}
void coordinate::Car2Sph() {
		r = sqrt(x * x + y * y + z * z);
		theta = acos(z / r);
		phi = atan(y / x);
		cout << "Data is transformed to Cartesian from Spherical" << endl;
	}
void coordinate::Cyl2Sph() {
	r = sqrt(rho * rho + z * z);
	theta = asin(rho / r);
	cout << "Data is transformed to Cylindrical from Spherical" << endl;

}
void coordinate::Cyl2Car() {
	x = rho * cos(phi);
	y = rho * sin(phi);
	cout << "Data is transformed to Cylindrical from Cartesian" << endl;
}
void coordinate::Sph2Car() {
	z = r * cos(theta);
	x = r * sin(theta) * cos(phi);
	y = r * sin(theta) * sin(phi);
	cout << "Data is transformed to Spherical from Cartesian" << endl;
}
void coordinate::Sph2Cyl() {
	z = r * cos(theta);
	rho = r * sin(theta);
	cout << "Data is transformed to Spherical from Cylindrical" << endl;
}

void coordinate::Show_Cartesian() {
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
	cout << "z : " << z << endl;
}
void coordinate::Show_Cylindrical() {
	cout << "rho : " << rho << endl;
	cout << "phi : " << phi << endl;
	cout << "z : " << z << endl;
}
void coordinate::Show_Spherical() {
	cout << "r : " << r << endl;
	cout << "theta : " << theta << endl;
	cout << "phi : " << phi << endl;
}

void coordinate::Get_every() {
	if (k == 0) {
		Car2Cyl();
		Car2Sph();
	}
	else if (k == 1) {
		Cyl2Car();
		Cyl2Sph();
	}
	else if (k == 2) {
		Sph2Car();
		Sph2Cyl();
	}
};
coordinate coordinate::operator+(coordinate b) {
	coordinate c;
	c.x = x + b.x;
	c.y = y + b.y;
	c.z = z + b.z;
	c.rho = rho + b.rho;
	c.phi = phi + b.phi;
	c.theta = theta + b.theta;
	c.r = r + b.r;
	return c;
};
coordinate coordinate::operator-(coordinate b) {
	coordinate c;
	c.x = x - b.x;
	c.y = y - b.y;
	c.z = z - b.z;
	c.rho = rho - b.rho;
	c.phi = phi - b.phi;
	c.theta = theta - b.theta;
	c.r = r - b.r;
	return c;
};