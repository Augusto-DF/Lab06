#include <iostream>
#include "mattheus_a.h"

using namespace std;
using namespace geometria;

int main(){
	
	Circulo 		A(2);
	Triangulo 		B(2 ,2);
	Quadrado		C(3);
	Retangulo		D(3, 1);
	Esfera			E(2.2);
	Piramide		F(5, 12, 6.7);
	Cubo			G(3);
	Paralelepipedo	H(2, 3, 4);

	std::cout << A 
		<< endl
		<< B
		<< endl
		<< C
		<< endl
		<< D
		<< endl
		<< E
		<< endl
		<< F
		<< endl
		<< G
		<< endl
		<< H;

}