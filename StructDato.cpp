
#include <iostream>
#include <conio.h>
using namespace std;
//cambio

struct Dato
{
	int dato1;
	char dato2[20];
};
struct Dato2{
	int dato3;
	struct Dato Sdato;
};
int main(){
struct Dato var1;
struct Dato*Ptr;
Ptr=&var1;	
cout << "Puntero= " << &Ptr << endl;
//nos imprime el valor del puntero
cout <<"Direccion de Ptr: "<< Ptr << endl;//imprime direccion del puntero
cin >>(Ptr->dato1);
cin.getline(Ptr->dato2,20,'\n');
cin.getline(Ptr->dato2,20,'\n');
cout << "\nPunteros: "<<Ptr->dato1<<endl<<endl;
cout << "\nPunteros: "<<Ptr->dato2<<endl<<endl;
getch();
return 0;
}

