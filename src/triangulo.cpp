#include "mattheus_a.h"

namespace geometria{

	Triangulo::Triangulo( double _altura, double _base):
		altura(_altura),
		base(_base){}

	Triangulo::~Triangulo(){}

	double 
	Triangulo::getAltura(){
		return altura;
	}

	double
	Triangulo::getBase(){
		return base;
	}

	void
	Triangulo::setAltura(double _altura){
		altura = _altura;
	}

	void
	Triangulo::setBase(double _base){
		base = _base;
	}

	double
	Triangulo::calcArea(){
		return (base*altura) / 2;
	}

	double
	Triangulo::calcPerimetro(){
		return base*3;
	}

	std::ostream& operator<< (std::ostream& p0, Triangulo& d0){

		p0 << "Área do Triangulo: " << d0.calcArea()
		<< std::endl
		<< "Perimetro do Triangulo: " << d0.calcPerimetro()
		<< std::endl;

		return p0;
	}
}