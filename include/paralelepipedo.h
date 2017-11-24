/**
 * @file	paralelepipedo.h
 * @author 	Mattheus Augusto Pinheiro de Oliveira
 * @brief	Declaração da classe Paralelepipedo
*/
#ifndef PARELELEPIPEDO_H
#define PARELELEPIPEDO_H

#include <iostream>

class Paralelepipedo{

	private:
		double aresta1;
		double aresta2;
		double aresta3;

	public:
		/**
		 * @brief	Construtor
		 * @param	Arestas 1, 2 e 3 do paralelepipedo (_aresta1, _aresta2, _aresta3)
		*/
		Paralelepipedo(double _aresta1, double _aresta2, double _aresta3);
		~Paralelepipedo();

		double getAresta1();
		double getAresta2();
		double getAresta3();

		void setAresta1(double _aresta1);
		void setAresta2(double _aresta2);
		void setAresta3(double _aresta3);

		/**
		 * @brief	Método que calcula o volume do paralelepipedo.
		 * @return	Volume do paralelepipedo.
		*/
		double calcVolume();

		/**
		 * @brief	Método que calcula a área do paralelepipedo.
		 * @return	Área do paralelepipedo.
		*/
		double calcArea();

		/**
		 * @brief Sobrecarga do operador de insersão
		*/
		friend std::ostream& operator<< (std::ostream& p0, Paralelepipedo& d0);
};

#endif