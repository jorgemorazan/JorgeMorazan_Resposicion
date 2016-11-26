#include <iostream>
using namespace std;
#include "Racional.h"
int main(){
	cout<<"Bienvenido a este programa maravilloso de Racionales..."<<endl;
	cout<<"¿Cansado de hacer sumas, restas, multiplicaciones y divisiones de racionales? ¡Este programa le ayudará hacer esto!"<<endl;
	int opc = 0;
	do{
		cout<<"    Menu Principal"<<endl;
		cout<<"Ingrese 1 para ingresar sus dos racionales.\nIngrese 2 para sumar sus dos racionales.\nIngrese 3 para restar sus dos racionales.\nIngrese 4 para multiplicar sus dos racionales.\nIngrese 5 para dividir sus dos racionales.\nIngrese 6 para salir."<<endl;
		cin>>opc;
		if(opc==1){
			int sure=0;
			int numA=0,denA=0,numB=0,denB=0;
			do{
				
				cout<<"Ingrese su numerador de la primera racional: ";
				cin>>numA;
				cout<<"Ingrese su denominador de la primera racional: ";
				cin>>denA;
				cout<<"Ingrese su numerador de la segunda racional: ";
				cin>>numB;
				cout<<"Ingrese su denominador de la segunda racional: ";
				cin>>denB;
				cout<<"Sus dos fracciones serían:"<<endl;
				cout<<numA<<"/"<<denA<<" y "<<numB<<"/"<<denB<<"."<<endl;
				cout<<"Ingrese 1 si está de acuerdo";
				cin>>sure;
			}while(sure!=1);
			Racional* R1 = new Racional(numA,denA);
			Racional* R2 = new Racional(numB,denB);
		}//fin ingresar numeros
		if(opc==2){
			
			*R1+*R2;
		}

	}while(opc!=5);
}