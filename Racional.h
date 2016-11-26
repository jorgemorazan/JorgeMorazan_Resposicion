#ifndef RACIONAL
#define RACIONAL_H
#include <iostream>
using namespace std;

class Racional {
	private:
		int num;
		int den;
	public:
		Racional();
		Racional(int a, int b);
		void operator+(Racional ratio);
		void operator-(Racional ratio);
		void operator*(Racional ratio);
		void operator/(Racional ratio);
		void imprimirRespuesta();
		void setNumerador(int);
		int getNumerador();
		void setDenominador(int);
		int getDenominador();
};

#endif