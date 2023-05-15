#pragma once
class coordinate {
public:
	// constructor
	coordinate() { x = 0; y = 0; z = 0; rho = 0; phi = 0; r = 0; theta = 0; }
	coordinate(float a, float b, float c, int kind) {
		if (kind == 0) { x = a; y = b; z = c; rho = 0; phi = 0; r = 0; theta = 0;}; // ������ǥ��
		if (kind == 1) { x = 0; y = 0; z = c; rho = a; phi = b; r = 0; theta = 0;}; // ������ǥ��
		if (kind == 2) { x = 0; y = 0; z = 0; rho = 0; phi = c; r = a; theta = b;}; // ������ǥ��
	}
	// member data
	float x, y, z;
	float rho, phi;
	float theta, r;  //���� ��� ������ 0�� �ƴ� �� ��� ����

	// member function
	
	//��ǥ ��� �Լ�
	void Show_Cartesian();
	void Show_Cylindrical();
	void Show_Spherical();

	// ��ǥ ��ȯ �Լ�
	void Car2Cyl(); void Car2Sph(); void Cyl2Sph();
	void Cyl2Car(); void Sph2Car(); void Sph2Cyl();
};
