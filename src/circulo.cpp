#include "mattheus_a.h"

namespace geometria{	
	
	#define PI 3.14

	Circulo::Circulo(double _raio){
		raio = _raio;
	}

	Circulo::~Circulo(){}

	double
	Circulo::getRaio(){
		return raio;
	}

	void
	Circulo::setRaio(double _raio){
		raio = _raio;
	}

	double
	Circulo::calcArea(){
		return PI*(raio*raio);
	}

	double
	Circulo::calcComprimento(){
		return 2*PI*raio;
	}

	std::ostream& operator<< (std::ostream& p0, Circulo& d0){
		p0 << "Área do Circulo: " << d0.calcArea()
		<< std::endl
		<< "Comprimento do Circulo: " << d0.calcComprimento()
		<< std::endl;

		return p0;
	}
}