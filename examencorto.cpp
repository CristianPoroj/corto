#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
ifstream leer;
ofstream archivo;
ofstream temp;

int resp;
string palabra,nuevo;
	struct regla
	{

		char nombre[100], sexso[100], oficio[100];
		int telefono ,edad;
		long indice;


	}datos;


	void registrop() {
		 archivo.open("entrada.txt", ios::app);
		if(archivo.is_open())
		{
		cout << "ingrese nombre" << endl;
		cin>> datos.nombre;

		cout << "ingrese palabra" << endl;
		cin >>  datos.sexso;
		cout << "ingrese  palabra" << endl;
		cin >> datos.oficio;
		cout << "ingrese  palabra" << endl;
		cin >> datos.telefono;
		cout << "ingrese  palabra" << endl;
		cin >>  datos.edad;
		archivo<<datos.indice<<"\t" << datos.nombre << "\t"<<datos.sexso<<"\t"<<datos.oficio<<"\t"<<datos.telefono<<"\t"<<datos.edad<<"\t"<<endl;
		}

		else
		{
			cout << "error" << endl;
		}
		archivo.close();
	}
	void leera()
	{
		leer.open("entrada.txt");
		if (leer.is_open())
		{
			leer >> datos.nombre;
			bool encontrado = false;
			cout << "nombre" << endl;
			cin >> palabra;
			while (!leer.eof())
			{
				leer >> datos.nombre;
				if (datos.nombre == palabra)
				{
					encontrado = true;
					cout << " ya esta" << endl;
				cout << "" << datos.nombre;
					cout << "" << datos.edad;
						cout << "" << datos.oficio;
							cout << "" << datos.sexso;
								cout << "" << datos.telefono;
				cout << "\n" << endl;

			}

			}

		}leer.close();

	}




	int main() {

		cout << "selecione" << endl;
		cout << "registro 1" << endl;
		cout << "leer     2" << endl;
	
		cin >> resp;
		switch (resp)
		{
		case 1:

			registrop();
			break;

		case 2:
			leera();
			break;
	
	}
	system("pause");
	return 0;
}

