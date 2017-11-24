/**
 * @file	triangulo.h
 * @author 	Mattheus Augusto Pinheiro de Oliveira
 * @brief	Declaração da classe Triangulo
*/
#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>

class Triangulo{

	private:
		double altura;
		double base;

	public:
		/**
		 * @brief	Construtor
		 * @param	Altura e Base do triangulo (_altura, _base)
		*/
		Triangulo(double _altura, double _base);
		~Triangulo();

		double getAltura();
		double getBase();
		
		void setAltura(double _altura);
		void setBase(double _base);

		/**
		 * @brief	Método que calcula a area do triangulo.
		 * @return	Área do triangulo.
		*/
		double calcArea();
		/**
		 * @brief	Método que calcula o perimetro do triangulo.
		 * @return	Perimetro do triangulo.
		*/
		double calcPerimetro();

		/**
		 * @brief Sobrecarga do operador de insersão
		*/
		friend std::ostream& operator<< (std::ostream& p0, Triangulo& d0);
};

#endif