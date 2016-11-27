#include "Racional.h"
#include <iostream>
using namespace std;

Racional::Racional(){

}

Racional::Racional(int num, int den){
	this->num=num;
	this->den=den;
}

void Racional::setNumerador(int a){
	num = a;
}

int Racional::getNumerador(){
	return num;
}

void Racional::setDenominador(int b){
	den = b;
}

int Racional::getDenominador(){
	return den;
}

void Racional::operator+(Racional ratio){
	Racional* respuesta= new Racional();
	respuesta->setNumerador(num*ratio.getDenominador())+(den*ratio.getNumerador());
	respuesta->setDenominador(den*ratio.getDenominador());
	imprimirRespuesta(respuesta);
}

void Racional::operator-(Racional ratio){
	Racional* respuesta = new Racional();
	respuesta->setNumerador((num*ratio.getDenominador())-(den*ratio.numerador()));
	respuesta->setDenominador(den*ratio.getDenominador());
	imprimirRespuesta(respuesta);
}

void Racional::operator*(Racional ratio){
	Racional* respuesta = new Racional();
	respuesta->setNumerador(num*ratio.getNumerador());
	respuesta->setDenominador(den*ratio.getDenominador());
	imprimirRespuesta(respuesta);
}

void Racional::operator/(Racional ratio){
	Racional* respuesta = new Racional();
	respuesta->setNumerador(num*ratio.getDenominador());
	respuesta->setDenominador(den*ratio.getNumerador());
	imprimirRespuesta(respuesta);
}

void Racional::imprimirRespuesta(Racional* respuesta){
	int numerador = respuesta.getNumerador();
	int denominador = respuesta.getDenominador();
	while(b!=0){
		int residuo = numerador%denominador;
		numerador = denominador;
		denominador = residuo
	}
	int rNum = respuesta.getNumerador();
	int rDen = respuesta.getDenominador();
	rNum = rNum/numerador;
	rDen = rDen/numerador;
	cout<<"Respuesta: "<<rNum<<"/"<<rDen;
}