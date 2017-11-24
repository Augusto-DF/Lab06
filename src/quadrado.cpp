#include "mattheus_a.h"

	namespace geometria{

	Quadrado::Quadrado(double _lado): lado(_lado){}
	Quadrado::~Quadrado(){}

	double
	Quadrado::getLado(){ return lado; }

	void
	Quadrado::setLado(double _lado) { lado = _lado; }

	double
	Quadrado::calcArea() { return lado * lado; }

	double
	Quadrado::calcPerimetro(){ return lado * 4; }

	std::ostream& operator<< (std::ostream& p0, Quadrado& d0){
		p0 << "Área do Quadrado: " << d0.calcArea()
		<< std::endl
		<< "Perimetro do Quadrado: " << d0.calcPerimetro()
		<< std::endl;

		return p0;
	}
}