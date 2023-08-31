#include"pared_ventana.h"

int main() {

	float n,t;
	Rectangulo ventana;
	Rectangulo pared;
	cout << "Dame el largo de la pared: ";
	cin >> n;
	pared.setlargo(n);
	cout << "Dame el ancho de la pared: ";
	cin >> n;
	pared.setancho(n);
	cout << "Dame el largo de la ventana: ";
	cin >> n;
	ventana.setlargo(n);
	cout << "Dame el ancho de la ventana: ";
	cin >> n;
	ventana.setancho(n);

	t = (pared.area() - ventana.area()) * 10;
	cout << "El tiempo para pintar la pared es:  " << t <<" Minutos ";
	cout << endl;



}