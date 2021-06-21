#include<iostream>
using namespace std;
int main()
{
	int c=0;
	float matriz1[10]={10,20,30,40,50,60,70,80,90,100};
	float matriz2[10]={10,20,30,40,50,60,70,80,90,100};
	float suma[10],resta[10],multiplicacion[10],division[10];
	
	cout<<"\n";
	cout<<"Demostracion de la matriz 1 y 2"<<endl;
	cout<<"-------------------------------"<<endl;
	for(int c=0;c<10;c++){
		cout<<matriz1[c];
		cout<<",";
	}
	cout<<endl;
//GARCIA WILA MELANIE
	
	return 0;
}

//CONTRERAS MONTAÑO LUIS MIGUEL

case 2:{
     int filas2, columnas2;
     cout<<"Digite el numero de filas: ";
     cin>>filas2;
     cout<<"Digite el numero de columnas: ";
     cin>>columnas2;

     int A[filas2][columnas2],B[filas2][columnas2],C[filas2][columnas2];
     //Almacenamos elementos en la matriz
     cout<<end1<<"MATRIZ 1 :";
     for(int i=0;i<filas2;i++){
     for(int j=0;j<columnas2;j++){
     cout<<"Digite un numero en la MATRIZ 1 posicion ["<<i<<"]["<<j<<"]: ";
     cin>>A[i][j];
         }
     {

     cout<<end1<<"MATRIZ 2 :";
     for(int i=0;i<filas2;i++){
     for(int j=0;j<columnas2;j++){
     cout<<"Digite un numero en la MATRIZ 2 posicion ["<<i<<"]["<<j<<"]: ";
     cin>>B[i][j];
         }
     {
