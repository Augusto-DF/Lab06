/**
 * @file	retangulo.h
 * @author 	Mattheus Augusto Pinheiro de Oliveira
 * @brief	Declaração da classe Retangulo
*/
#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>

class Retangulo{
	private:
		double altura;
		double base;

	public:
		/**
		 * @brief	Construtor
		 * @param	Base e Altura do retangulo (_altura, _base)
		*/
		Retangulo(double _altura, double _base);
		~Retangulo();

		double getAltura();
		double getBase();

		void setAltura(double _altura);
		void setBase(double _base);

		/**
		 * @brief	Método que calcula a area do retangulo.
		 * @return	Área do retangulo.
		*/
		double calcArea();

		/**
		 * @brief	Método que calcula o perimetro do retangulo.
		 * @return	Perimetro do retangulo.
		*/
		double calcPerimetro();

		/**
		 * @brief Sobrecarga do operador de insersão
		*/
		friend std::ostream& operator<< (std::ostream& p0, Retangulo& d0);
};

#endif