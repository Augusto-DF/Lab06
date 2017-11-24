#include "mattheus_a.h"

namespace geometria{

	Cubo::Cubo(double _aresta){
		aresta = _aresta;
	}
	Cubo::~Cubo(){}

	double
	Cubo::getAresta(){
		return aresta;
	}

	void
	Cubo::setAresta(double _aresta){
		aresta = _aresta;
	}

	double
	Cubo::calcArea(){
		return (aresta*aresta)*6;
	}

	double
	Cubo::calcVolume(){
		return (aresta*aresta*aresta);
	}

	std::ostream& operator<< (std::ostream& p0, Cubo& d0){
		p0 << "Área do Cubo: " << d0.calcArea()
		<< std::endl
		<< "Volume do Cubo : " << d0.calcVolume()
		<< std::endl;

		return p0;
	}
}