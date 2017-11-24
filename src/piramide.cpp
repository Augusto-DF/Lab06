#include "mattheus_a.h"

	namespace geometria{

	Piramide::Piramide(double _area_base, double _area_lateral, double _altura){
		area_base = _area_base;
		area_lateral = _area_lateral;
		altura = _altura;
	}

	Piramide::~Piramide(){}

	double
	Piramide::getArea_base(){
		return area_base;
	}

	double
	Piramide::getArea_lateral(){
		return area_lateral;
	}

	double
	Piramide::getAltura(){
		return altura;
	}

	void
	Piramide::setArea_base(double _area_base){
		area_base = _area_base;
	}

	void
	Piramide::setArea_lateral(double _area_lateral){
		area_lateral = _area_lateral;
	}

	void
	Piramide::setAltura(double _altura){
		altura = _altura;
	}

	double
	Piramide::calcVolume(){
		return (1/3)*(area_base*altura);
	}
	double
	Piramide::calcArea(){
		return area_base + area_lateral;
	}

	std::ostream& operator<< (std::ostream& p0, Piramide& d0){
		p0 << "Área da Piramide: " << d0.calcArea()
		<< std::endl 
		<< "Volume da Piramide: " << d0.calcVolume()
		<< std::endl;

		return p0;
	}
}