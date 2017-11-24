/**
 * @file	cubo.h
 * @author 	Mattheus Augusto Pinheiro de Oliveira
 * @brief	Declaração da classe Cubo
*/
#ifndef CUBO_H
#define CUBO_H

#include <iostream>

class Cubo{
	private:
		double aresta;

	public:
		/**
		 * @brief	Construtor
		 * @param	Aresta do cubo (_aresta)
		*/
		Cubo(double _aresta);
		~Cubo();

		double getAresta();

		void setAresta(double _aresta);

		/**
		 * @brief	Método que calcula a area do cubo.
		 * @return	Área do cubo.
		*/
		double calcArea();

		/**
		 * @brief	Método que calcula o volume do cubo.
		 * @return	Volume do cubo.
		*/
		double calcVolume();

		/**
		 * @brief Sobrecarga do operador de insersão
		*/
		friend std::ostream& operator<< (std::ostream& p0, Cubo& d0);
};

#endif