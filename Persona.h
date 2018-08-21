#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
	char nombre[30];
	int cedula;
	float sueldo;
	char sexo;
	public:
		Persona();
		Persona(int cedula,float sueldo,char sexo,char nombre[]);
		~Persona();
		void cargarDato();
		void mostrarDato();
		void setCedula(int cedula);
		void setSueldo(float sueldo);
		void setSexo(char sexo);
		void setNombre(char nombre[]);
		int getCedula();
		float getSueldo();
		char getSexo();
		char *getNombre();
	protected:
};

#endif
