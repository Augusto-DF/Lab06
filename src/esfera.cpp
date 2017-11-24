#include "mattheus_a.h"

namespace geometria{

	#define PI 3.14

	Esfera::Esfera(double _raio){
		raio = _raio;
	}
	Esfera::~Esfera(){}

	double
	Esfera::getRaio(){
		return raio;
	}

	void
	Esfera::setRaio(double _raio){
		raio =_raio;
	}

	double
	Esfera::calcVolume(){
		return (4/3)*PI*(raio*raio*raio);
	}
			
	double
	Esfera::calcArea(){
		return 4*PI*(raio * raio);
	}

	std::ostream& operator<< (std::ostream& p0, Esfera& d0){
		p0 << "Área da Esfera: " << d0.calcArea()
		<< std::endl
		<< "Volume da Esfera: " << d0.calcVolume()
		<< std::endl;

		return p0; 
	}
}