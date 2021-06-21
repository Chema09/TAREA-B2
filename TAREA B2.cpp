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
	for(int c=0;c<10;c++){
		cout<<matriz2[c];
		cout<<",";
	}
	cout<<endl;
	cout<<"\n";
	cout<<"Demostracion de la suma de la matriz 1 y 2"<<endl;
	cout<<"------------------------------------------"<<endl;
	for(int c=0;c<10;c++){
		cout<<matriz1[c]+matriz2[c];
		cout<<",";
	}
	cout<<endl;
	cout<<"\n";
	cout<<"Demostracion de la resta de la matriz 1 y 2"<<endl;
	cout<<"-------------------------------------------"<<endl;
	for(int c=0;c<10;c++){
		cout<<matriz1[c]-matriz2[c];
		cout<<",";
	}
	cout<<endl;
	cout<<"\n";
	cout<<"Demostracion de la multiplicacion de la matriz 1 y 2"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	for(int c=0;c<10;c++){
		cout<<matriz1[c]*matriz2[c];
		cout<<",";
	}
	cout<<endl;
	cout<<"\n";
	cout<<"Demostracion de la division de la matriz 1 y 2"<<endl;
	cout<<"----------------------------------------------"<<endl;
	for(int c=0;c<10;c++){
		cout<<matriz1[c]/matriz2[c];
		cout<<",";
	}
	return 0;
}
