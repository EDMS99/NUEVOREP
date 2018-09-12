#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int *ptr;
	int cantidad;
	cout<<"cuantos numeros desea guardar? ";
	cin >>cantidad;
	
	ptr= new int [cantidad];
	for(int i=0; i<cantidad; i++)
	{
		cout<<"ingrese el numero ";
		cin>>ptr[i];
	}
	
	int Num1;
	delete[] ptr;
	return 0;
}
