#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "Materia.h"
#include "Persona.h"

class Estudiante : public Persona
{
	float indice;
	char carrera[20];
	int nMateria;
	Materia **materia;
	public:
		Estudiante();
		Estudiante(int c,float s,char sx,char n[],int nMateria,float indice,char carrera[]);
		void cargarDato();
		void mostrarDato();
		~Estudiante();
		void setNMateria(int nMateria);
		void setIndice(float indice);
		void setCarrera(char carrera[]);
		int getNMateria();
		float getIndice();
		char *getCarrera();
	protected:
};

#endif
