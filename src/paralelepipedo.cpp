#include "mattheus_a.h"

namespace geometria{


	Paralelepipedo::Paralelepipedo(double _aresta1, double _aresta2, double _aresta3){
		aresta1 = _aresta1;
		aresta2 = _aresta2;
		aresta3 = _aresta3;
	}
	Paralelepipedo::~Paralelepipedo(){}

	double
	Paralelepipedo::getAresta1(){
		return aresta1;
	}

	double
	Paralelepipedo::getAresta2(){
		return aresta2;
	}

	double
	Paralelepipedo::getAresta3(){
		return aresta3;
	}

	void
	Paralelepipedo::setAresta1(double _aresta1){
		aresta1 = _aresta1;
	}

	void
	Paralelepipedo::setAresta2(double _aresta2){
		aresta2 = _aresta2;
	}

	void
	Paralelepipedo::setAresta3(double _aresta3){
		aresta3 =_aresta3;
	}

	double
	Paralelepipedo::calcVolume(){
		return aresta1*aresta2*aresta3;
	}

	double
	Paralelepipedo::calcArea(){
		return 2*(aresta1*aresta2) + 2*(aresta1*aresta3) + 2*(aresta2*aresta3);
	}

	std::ostream& operator<< (std::ostream& p0, Paralelepipedo& d0){
		
		p0 << "Área do Paralelepipedo: " << d0.calcArea()
		<< std::endl
		<< "Volume do Paralelepipedo: " << d0.calcVolume()
		<< std::endl;

		return p0;
	}
}