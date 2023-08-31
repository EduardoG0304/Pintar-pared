#include "pared_ventana.h"

Rectangulo::Rectangulo() {
	setlargo(0);
	setancho(0);

}

void Rectangulo::setlargo(int l) {

	largo = l;
}

void Rectangulo::setancho(int a) {

	ancho = a;
}

int Rectangulo::getlargo() {

	return largo;
}

int Rectangulo::getancho() {

	return ancho;
}

int Rectangulo::area() {

	return largo * ancho;
}