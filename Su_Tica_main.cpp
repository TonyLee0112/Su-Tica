#include <iostream>
#include <cmath>
#include "coordinate_system.h"
using namespace std;
void main() {
	coordinate ex1,ex2, result;
	const float Pi = 3.1415926;
	ex1 = coordinate(2, 4, 10, 0);
	ex2 = coordinate(-5, 1, -3, 1);
	ex1.Get_every(); ex2.Get_every();
	result = ex1 + ex2;
	result.Show_Cartesian();
	result.Show_Cylindrical();
	result.Show_Spherical();
}