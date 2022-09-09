#include<iostream>
#include<string>

using namespace std;

string nombres;
string caracteristicas;
string genero;
string descripcion;
string clasificacion;

int precio;
int opcion; 
bool a = true;

int main() {
	while (a)
	{
		cout << "Menu" << endl;
		cout << "1.Agregar" << endl;
		cout << "2.Mostrar" << endl;
		cout << "3.Limpiar" << endl;
		cout << "4.Salir" << endl;
		cout << "Selecciona una opcion para continuar..." << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:
		{
			cout << "Ingresar nombre" << endl;
			cin >> nombres;
			cout << "ingresa una caracteristica" << endl;
			cin >> caracteristicas;
			cout << "Ingresa un genero" << endl;
			cin >> genero;
			cout << "Ingresa una descripcion" << endl;
			cin >> descripcion;
			cout << "Ingresa una clasificacion" << endl;
			cin >> clasificacion;
			cout << "Ingresa el precio" << endl;
			cin >> precio;
			cout << "El impuesto del juego es de 100 pesos" << endl;
			break;
			return main();
		}
		case 2:
		{
			cout << "El nombre del juego que ingreso fue:" << nombres << endl;
			cout << "La caracteristica es:" << caracteristicas << endl;
			cout << "El genero es:" << genero << endl;
			cout << "La descripcion es:" << descripcion << endl;
			cout << "La clasificacion es:" << clasificacion << endl;
			cout << "El precio es:" << precio << endl;
			
			break;
		}
		case 3:
		{
			system("cls");
			break;
		}
		case 4:
		{
			cout << "Usted esta saliendo del programa" << endl;
		}
		default:
		{
			break;
		}
		}
		system("pause");
	}




	

	


	
	}









