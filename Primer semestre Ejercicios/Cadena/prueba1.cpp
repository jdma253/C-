/*
	Nombre:Caracteres.cpp
	Autor: Juan David Moreno Alfonso y Juan Camilo Meneses Saldarriaga
	Fecha creaci�n: Agosto 28 de 2020
	Fecha modificaci�n: Agosto 28 de 2020
	Versi�n: 1.0
	Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

//Se incluye bibliotecas

#include <iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using std::cout; // Inlcluyendo la funci�n de cout para imprimir por pantalla.
using std::cin; // Inlcluyendo la funci�n de cint para pedir datos
using std::endl;  // Inlcluyendo la funci�n de endl saltos de l�nea 

int main(){
	char palabra1[80];
	char palabra2[]="Univalle";
	char palabra3[80];
	char palabra4[80];
	char palabra5[80];
	char palabra6[80];
	char palabra7[80];
	
	cout<<"digite una palabra"<<endl;
	gets(palabra1);
	
	cout<<"digite otra palabra"<<endl;
	gets(palabra3);
	
	cout<<"digite otra palabra"<<endl;
	gets(palabra4);
	
	cout<<"digite otra palabra"<<endl;
	gets(palabra5);
	
	cout<<"digite otra palabra"<<endl;
	gets(palabra6);
	
	cout<<"digite otra palabra"<<endl;
	gets(palabra7);
	
	if(strcmp(palabra1,palabra2)==0){
	cout<<palabra1;
	cout<<palabra3;
	cout<<palabra4;
	cout<<palabra5;
	cout<<palabra6;
	cout<<palabra7;
	cout<<palabra2<<endl;
	
	}if(strcmp(palabra2,palabra3)==0){
	cout<<palabra1;
	cout<<palabra3;
	cout<<palabra4;
	cout<<palabra5;
	cout<<palabra6;
	cout<<palabra7;
	cout<<palabra2<<endl;
	
	}if(strcmp(palabra2,palabra4)==0){
		cout<<palabra1;
	cout<<palabra3;
	cout<<palabra4;
	cout<<palabra5;
	cout<<palabra6;
	cout<<palabra7;
	cout<<palabra2<<endl;
	
	}if(strcmp(palabra2,palabra5)==0){
		cout<<palabra1;
	cout<<palabra3;
	cout<<palabra4;
	cout<<palabra5;
	cout<<palabra6;
	cout<<palabra7;
	cout<<palabra2<<endl;
	
	}if(strcmp(palabra2,palabra6)==0){
    		cout<<palabra1;
	cout<<palabra3;
	cout<<palabra4;
	cout<<palabra5;
	cout<<palabra6;
	cout<<palabra7;
	cout<<palabra2<<endl;
		
	}
	if(strcmp(palabra2,palabra7)==0){
			cout<<palabra1;
	cout<<palabra3;
	cout<<palabra4;
	cout<<palabra5;
	cout<<palabra6;
	cout<<palabra7;
	cout<<palabra2<<endl;
	}
	else{
		cout<<" No Esta Univalle";
	}
	
	
	getch();
	return 0;
	
}
