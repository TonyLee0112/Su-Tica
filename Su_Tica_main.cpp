#include <iostream>
#include <cmath>
#include "coordinate_system.h"
using namespace std;
void main() {
	coordinate ex;
	const float Pi = 3.1415926;
	ex = coordinate(2, Pi/2,0, 2);
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