#include <iostream>
#include <cmath>
#include "coordinate_system.h"
using namespace std;
void main() {
	coordinate ex[5];
	const float Pi = 3.1415926;
	for (int i = 0; i < 5; i++) {
		cout << i << "¹ø Â° Coordinate object" << endl;
		ex[i]= coordinate( 2*i+1,i+3 ,i-4 , 0);
		ex[i].Get_every();
		ex[i].Show_Cartesian();
		ex[i].Show_Cylindrical();
		ex[i].Show_Spherical();
	}
	
}