#include "Estudiante.h"
#include<string.h>
#include<iostream>
using namespace std;
Estudiante::Estudiante()
{
	nMateria=0;
	indice=0.0;
	strcpy(carrera," ");
	materia=0;
}
Estudiante::Estudiante(int c,float s,char sx,char n[],int nMateria,float indice,char carrera[]):Persona(c,s,sx,n){
	if(this->nMateria==0){
		nMateria=6;
	}else{
		this->nMateria=nMateria;
	}
	this->indice=indice;
	strcpy(this->carrera,carrera);
	materia=new Materia*[nMateria];
	for(int i=0;i<nMateria;i++){
		materia[i]=new Materia;
		materia[i]->cargarDato();
	}
}
void Estudiante::cargarDato(){
	this->Persona::cargarDato();
	cout<<"Carrera:"<<endl;
	cin.sync();
	cin.getline(carrera,19);
		if(nMateria==0){
		nMateria=6;
	}else{
	    cout<<"Numero de materia"<<endl;
		cin.sync();
	    cin>>nMateria;
	}
	cout<<"Indice:"<<endl;
	cin.sync();
	cin>>indice;
	materia=new Materia*[nMateria];
	for(int i=0;i<nMateria;i++){
		materia=new Materia*[i];
		materia[i]->cargarDato();
	}
}
void Estudiante::mostrarDato(){
	this->Persona::mostrarDato();
	cout<<"Carrera:"<<carrera<<endl;
}
Estudiante::~Estudiante()
{
}
