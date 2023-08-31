#pragma once
#include<iostream>

using namespace std;

class Rectangulo
{
private:

	float largo;
	float ancho;

public:

	Rectangulo(float l, float a) 
	{
		largo = l;
		ancho = a;
	}

	void setlargo(int l);
	int getlargo();
	int area();
	void setancho(int a);
	int getancho();
	Rectangulo();


};

