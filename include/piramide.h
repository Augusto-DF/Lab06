/**
 * @file	piramide.h
 * @author 	Mattheus Augusto Pinheiro de Oliveira
 * @brief	Declaração da classe Piramide
*/
#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include <iostream>

class Piramide{

	private:
		double area_base;
		double area_lateral;
		double altura;

	public:
		/**
		 * @brief	Construtor
		 * @param	Área da base, Área lateral e Altura (_area_base, _area_lateral, _altura)
		*/
		Piramide(double _area_base, double _area_lateral, double _altura);
		~Piramide();

		double getArea_base();
		double getArea_lateral();
		double getAltura();

		void setArea_base(double _area_base);
		void setArea_lateral(double _area_lateral);
		void setAltura(double _altura);

		/**
		 * @brief	Método que calcula o volume da piramide.
		 * @return	Volume da piramide.
		*/
		double calcVolume();

		/**
		 * @brief	Método que calcula a area da piramide.
		 * @return	Área da piramide.
		*/
		double calcArea();

		/**
		 * @brief Sobrecarga do operador de insersão
		*/
		friend std::ostream& operator<< (std::ostream& p0, Piramide& d0);

};

#endif