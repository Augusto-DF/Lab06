/**
 * @file	esfera.h
 * @author 	Mattheus Augusto Pinheiro de Oliveira
 * @brief	Declaração da classe Esfera
*/
#ifndef ESFERA_H
#define ESFERA_H

class Esfera{

	private:
		double raio;

	public:
		/**
		 * @brief	Construtor
		 * @param	Raio da esfera (_raio)
		*/
		Esfera(double _raio);
		~Esfera();

		double getRaio();

		void setRaio(double _raio);

		/**
		 * @brief	Método que calcula o volume da esfera.
		 * @return	Volume da esfera.
		*/
		double calcVolume();

		/**
		 * @brief	Método que calcula a area da esfera.
		 * @return	Área da esfera.
		*/
		double calcArea();

		/**
		 * @brief Sobrecarga do operador de insersão
		*/
		friend std::ostream& operator<< (std::ostream& p0, Esfera& d0);
};

#endif