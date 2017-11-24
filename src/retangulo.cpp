#include "mattheus_a.h"

	namespace geometria{

	Retangulo::Retangulo(double _altura, double _base): altura(_altura), base(_base) {}
	Retangulo::~Retangulo(){}

	double
	Retangulo::getAltura(){
		return altura;
	}

	double
	Retangulo::getBase(){
		return base;
	}

	void
	Retangulo::setAltura(double _altura){
		altura = _altura;
	}

	void
	Retangulo::setBase(double _base){
		base = _base;
	}

	double
	Retangulo::calcArea(){
		return base*altura;
	}

	double
	Retangulo::calcPerimetro(){
		return 2*(altura) + 2*(base);
	}

	std::ostream& operator<< (std::ostream& p0, Retangulo& d0){
		p0 << "Área do Retangulo: " << d0.calcArea()
		<< std::endl
		<< "Perimetro do Retangulo: " << d0.calcPerimetro()
		<< std::endl;

		return p0;
	}
}