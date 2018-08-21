#include "Persona.h"
#include<iostream>
#include<string.h>
using namespace std;
Persona::Persona()
{
	cedula=0;
	sueldo=0.0;
	sexo=' ';
	strcpy(nombre," ");
}

Persona::Persona(int cedula,float sueldo,char sexo,char nombre[]){
	this->cedula=cedula;
	this->sueldo=sueldo;
	this->sexo=sexo;
	strcpy(this->nombre,nombre);
}

void Persona::cargarDato(){
	cout<<"Ingrese los datos de la persona"<<endl;
	cout<<"Nombre:"<<endl;
	cin.sync();
	cin.getline(nombre,29);
	cout<<"Cedula:"<<endl;
	cin.sync();
	cin>>cedula;
	cout<<"Sueldo:"<<endl;
	cin.sync();
	cin>>sueldo;
	cout<<"Sexo: femenino 'F' o masculino 'M'"<<endl;
	cin.sync();
	cin>>sexo;
}

void Persona::mostrarDato(){
	cout<<"Nombre:"<<nombre<<endl;
	cout<<"Cedula:"<<cedula<<endl;
	cout<<"Sueldo:"<<sueldo<<endl;
	cout<<"Sexo:"<<((sexo=='f'||sexo=='F')?"Femenino":"Masculino")<<endl;
}

Persona::~Persona()
{
}

void Persona::setCedula(int cedula){
	this->cedula=cedula;
}

void Persona::setSueldo(float sueldo){
	this->sueldo=sueldo;
}

void Persona::setSexo(char sexo){
	this->sexo=sexo;
}

void Persona::setNombre(char nombre[]){
	strcpy(this->nombre,nombre);
}

int Persona::getCedula(){
	return cedula;
}

float Persona::getSueldo(){
	return sueldo;
}

char Persona::getSexo(){
	return sexo;
}

char *Persona::getNombre(){
	return nombre;
}
