#include <iostream>
#include <conio.h>
using namespace std;


struct Nodo{
	int Val;
	struct Nodo *ptr;
};

int main()
{
	struct Nodo *inicio;
	struct Nodo *Nodo;
	Nodo=new struct Nodo;
	inicio=Nodo;
	inicio->ptr=NULL;
	inicio->Val=10;
	
	Nodo=new struct Nodo;
	inicio->ptr=Nodo;
	inicio->ptr->ptr=NULL;
	inicio->ptr->Val=20;
	cout<<inicio->ptr->Val<<endl;
	cout<<inicio->Val;
	return 0;
}
