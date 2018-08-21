#include "Materia.h"
#include<iostream>
#include<string.h>
using namespace std;

Materia::Materia()
{
	codigo=0;
	strcpy(nombre," ");
}
Materia::Materia(int codigo,char nombre[]){
	this->codigo=codigo;
	strcpy(this->nombre,nombre);
}
void Materia::cargarDato(){
	cout<<"Dato materia"<<endl;
	cout<<"codigo:"<<endl;
	cin.sync();
	cin>>codigo;
	cout<<"Nombre:"<<endl;
	cin.sync();
	cin.getline(nombre,19);
}
void Materia::mostrarDato(){
	cout<<"Codigo:"<<codigo<<endl;
	cout<<"Nombre:"<<nombre<<endl;
}

Materia::~Materia()
{
}

void Materia::setCodigo(int codigo){
	this->codigo=codigo;
}

void Materia::setNombre(char nombre[]){
	strcpy(this->nombre,nombre);
}

int Materia::getCodigo(){
	return codigo;
}

char *Materia::getNombre(){
	return nombre;
}
