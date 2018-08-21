#ifndef MATERIA_H
#define MATERIA_H

class Materia
{
	int codigo;
	char nombre[20];
	public:
		Materia();
		Materia(int codigo,char nombre[]);
		void cargarDato();
		void mostrarDato();
		~Materia();
		void setCodigo(int codigo);
		void setNombre(char nombre[]);
		int getCodigo();
		char *getNombre();
	protected:
};

#endif
