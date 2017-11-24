/**
 * @file	circulo.h
 * @author 	Mattheus Augusto Pinheiro de Oliveira
 * @brief	Declaração da classe Circulo
*/
#ifndef CIRCULO_H
#define CIRCULO_H

#define PI 3.14

#include <iostream>

class Circulo{

	private:
		double raio;

	public:
		/**
		 * @brief	Construtor
		 * @param	Raio do circulo (_raio)
		*/
		Circulo(double _raio);
		~Circulo();

		double getRaio();

		void setRaio(double _raio);

		/**
		 * @brief	Método que calcula a area do circulo.
		 * @return	Área do circulo.
		*/
		double calcArea();
		/**
		 * @brief	Método que calcula o comprimento do circulo.
		 * @return	Comprimento do circulo.
		*/
		double calcComprimento();

		/**
		 * @brief Sobrecarga do operador de insersão
		*/
		friend std::ostream& operator<< (std::ostream& p0, Circulo& d0);
};

#endif