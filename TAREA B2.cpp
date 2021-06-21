//GPARTE DE GARCIA WILA MELANIE
#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	int opcion;
	bool repetir = true;
	
	do {
	        system("cls");//limpia pantalla
	        
		cout << "\n\nMenu de Opciones" << endl;
	        cout << "1. Creacion de  Matriz            1" << endl;
	        cout << "2. Suma de 2 Matrices             2" << endl;
	        cout << "3. Resta de 2 Matrices            3" << endl;
	        cout << "4. Multiplicacion de 2 Matrices   4" << endl;
	        cout << "5. Divicion de 2 Matrices         5" << endl;
	        cout << "0. SALIR" << endl;
	        
	        cout << "\nIngrese una opcion: ";
	        cin >> opcion;
			switch (opcion) 
			{
		            case 1:{
		            	int numeros[100][100], filas, columnas;
						cout<<"Digite el numero de filas: ";
						cin>>filas;
						cout<<"Digite el numero de columnas: ";
						cin>>columnas;
						//Almacenamos elementos en la matriz
						for(int i=0;i<filas;i++){
						for(int j=0;j<columnas;j++){
						cout<<"digite un numero en la posicion  ["<<i<<"]["<<j<<"]: ";
						cin>>numeros[i][j];
								}
				
						}		
						for(int i=0;i<filas;i++){
						for(int j=0;j<columnas;j++){
						cout<<numeros[i][j];
					
						}
						cout<<endl;
						}
						 system("pause>nul"); // Pausa 
						break;
					}
	
	return 0;
}
