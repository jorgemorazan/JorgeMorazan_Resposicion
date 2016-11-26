#include "Racional.h"
#include <iostream>
using namespace std;

Racional::Racional(){

}

Racional::Racional(int a, int b){
	int num=a;
	int den=b;
}

void operator+(Racional ratio){
	Racional respuesta;
	respuesta.num = (a*ratio.den)+(b*ratio.num);
	respuesta.den = (b*ratio.den);
	imprimirRespuesta(respuesta);
}

void operator-(Racional ratio){
	Racional respuesta;
	respuesta.num = (a*ratio.den)-(b*ratio.num);
	respuesta.den = (b*ratio.den);
	imprimirRespuesta(respuesta);
}

void operator*(Racional ratio){
	Racional respuesta;
	respuesta.num = (a*ratio.num);
	respuesta.den = (b*ratio.den);
	imprimirRespuesta(respuesta);
}

void operator/(Racional ratio){
	Racional respuesta;
	respuesta.num = (a*ratio.den);
	respuesta.den = (b*ratio.num);
	imprimirRespuesta(respuesta);
}

void imprimirRespuesta(Racional respuesta){
	int numerador = respuesta.num;
	int denominador = respuesta.den;
	while(b!=0){
		int residuo = numerador%denominador;
		numerador = denominador;
		denominador = residuo
	}
	int rNum = respuesta.num;
	int rDen = respuesta.den;
	rNum = rNum/numerador;
	rDen = rDen/numerador;
	cout<<"Respuesta: "<<rNum<<"/"<<rDen;
}