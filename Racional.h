#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>
using namespace std;

class Racional {
	private:
		int num;
		int den;
	public:
		Racional();
		Racional(int,int);
		//Racional* operator+(Racional);
		void operator-(Racional);
		void operator*(Racional);
		void operator/(Racional);
		void imprimirRespuesta(Racional*);
		void setNumerador(int);
		int getNumerador();
		void setDenominador(int);
		int getDenominador();
};

#endif