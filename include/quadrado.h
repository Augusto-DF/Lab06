/**
 * @file	quadrado.h
 * @author 	Mattheus Augusto Pinheiro de Oliveira
 * @brief	Declaração da classe Quadrado
*/
#ifndef QUADRADO_H
#define QUADRADO_H

#include <iostream>

class Quadrado{
	private:
		double lado;

	public:
		/**
		 * @brief	Construtor
		 * @param	Lado do quadrado (_lado)
		*/
		Quadrado(double _lado);
		~Quadrado();

		double getLado();

		void setLado(double _lado);

		/**
		 * @brief	Método que calcula a area do quadrado.
		 * @return	Área do quadrado.
		*/
		double calcArea();

		/**
		 * @brief	Método que calcula o perimetro do quadrado.
		 * @return	Perimetro do quadrado.
		*/
		double calcPerimetro();

		/**
		 * @brief Sobrecarga do operador de insersão
		*/
		friend std::ostream& operator<< (std::ostream& p0, Quadrado& d0);
};

#endif