#include <iostream>
#include <cmath>
#include "coordinate_system.h"
using namespace std;
void main() {
	coordinate ex;
	const double Pi = 3.14159265358979;
	ex = coordinate(3, Pi/3, Pi, 2);
	ex.Show_Spherical();
	ex.Sph2Car();
	ex.Show_Cartesian();
	ex.Car2Cyl();
	ex.Show_Cylindrical();
	ex.Cyl2Sph();
	ex.Show_Spherical();
	ex.Sph2Car();
	ex.Show_Cartesian();
}