#include <iostream>
using namespace std;
#include "Racional.h"
int main(){
	Racional* R1 = NULL;
	Racional* R2 = NULL;
	cout<<"Bienvenido a este programa maravilloso de Racionales..."<<endl;
	cout<<"¿Cansado de hacer sumas, restas, multiplicaciones y divisiones de racionales? ¡Este programa le ayudará hacer esto!"<<endl;
	int opc = 0;
	do{
		cout<<endl<<"    Menu Principal"<<endl;
		cout<<"Ingrese 1 para ingresar sus dos racionales.\nIngrese 2 para sumar sus dos racionales.\nIngrese 3 para restar sus dos racionales.\nIngrese 4 para multiplicar sus dos racionales.\nIngrese 5 para dividir sus dos racionales.\nIngrese 6 para salir."<<endl;
		cin>>opc;
		if(opc==1){
			int sure=0;
			int numA=0,denA=0,numB=0,denB=0;
			do{
				USEL
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
				cout<<"Ingrese 1 si está de acuerdo con sus dos racionales:"<<endl;
				cin>>sure;
				if(denA==0||denB==0){
					sure=0;
					cout<<"No se puede dividir entre 0!"<<endl;
				}
			}while(sure!=1);
			R1 = new Racional(numA,denA);
			R2 = new Racional(numB,denB);
		}//fin ingresar numeros
		if(opc==2){
			//Racional* respuesta;
			cout<<numA<<"/"<<denA<<" - "<<numB<<"/"<<denB<<"."<<endl;
			*R1+*R2;
			//respuesta= *R1-*R2;
		}
		if(opc==3){
			cout<<numA<<"/"<<denA<<" - "<<numB<<"/"<<denB<<"."<<endl;
			*R1 - *R2;
			cout<<numB<<"/"<<denB<<" - "<<numA<<"/"<<denA<<"."<<endl;
			*R2 - *R1;
		}
		if(opc==4){
			cout<<numA<<"/"<<denA<<" * "<<numB<<"/"<<denB<<"."<<endl;
			*R1 * *R2;
		}
		if(opc==5){
			cout<<numA<<"/"<<denA<<" / "<<numB<<"/"<<denB<<"."<<endl;
			*R1 / *R2;
			cout<<numB<<"/"<<denB<<" / "<<numA<<"/"<<denA<<"."<<endl;
			*R2 / *R1;
		}

	}while(opc!=5);
}