#include <stdio.h>
#include <iostream>
#include <conio.h>
#include<string>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int menu(void)
{
	cout<<"\n***********************TIENDA VIRTUAL**************";
	cout<<"\n1 crear cliente nuevo";
	cout<<"\n2 ver clientes ingresados";
	cout<<"\n3 crear inventario";
	cout<<"\n4 ver inventario";
	cout<<"\n5 vender un producto";
	cout<<"\n6 salir";
	cout<<"\nIngrese su opcion: ";
}
int main()
{
	int opcion, opc1, opc2, i=0, a=0, max=5, cantidad_producto_vender, pregunta_descuento, descuento;
	string nombre_cliente[50], nombre_producto[50];
	float id[50], tel[50], precio_producto[50], codigo[50];
	string nombre_producto_vender ;
	char fin;
	float precio_producto_vender, total_final, total, descuento_final, sub_total;
	
do{
	menu();
	cin>>opcion;
	
	switch(opcion)
	{
		case 1:
		i++;
		cout<<"\n ingrese el nombre del cliente nuevo: ";
		cin>>nombre_cliente[i];
		cout<<"\n ingrese el numero de ID del cliente nuevo (sin espacios y guiones): ";
		cin>>id[i];
		cout<<"\n ingrese el numero de telefono del cliente (sin espacios y guiones) : ";
		cin>>tel[i];
		cout<<"\n ingrese 1 para volver al menu y 0 para salir : ";
		cin>>opc2;
		break;
		
		case 2:
		for(i=1; i<max; i++)
		{
			cout<<"\nnombre del cliente : "<<nombre_cliente[1]<<endl;
			cout<<"numero de ID de cliente : "<<id[i]<<endl;
			cout<<"numero de telefono de cliente : "<<tel[i]<<endl;	
			
		}
			cout<<"\n ingrese 1 para volver al menu y 0 para salir : ";
			cin>>opc2;
			break;
			
		case 3:
		a++;
			cout<<"\n ingrese el nombre el nombre del producto: ";
		cin>>nombre_producto[a];
		cout<<"\n ingrese el codigo del producto: ";
		cin>>codigo[a];
		cout<<"\n ingrese el precio del producto : ";
		cin>>precio_producto[a];
		cout<<"\n ingrese 1 para volver al menu y 0 para salir : ";
		cin>>opc2;
		break;
		
		case 4 :
		for (a=1; a<max; a++) 
		{
		cout<<"\nNombre del producto: "<<nombre_producto[a]<<endl;
		cout<<"codigo del producto  : "<<codigo[a]<<endl;
		cout<<"precios del productos : "<<precio_producto[a]<<endl;
		}
			
		cout<<"\n ingrese 1 para volver al menu y 0 para salir : ";
			cin>>opc2;
			break;
		
		
	    case 5:
	    
	    	cout<<"\n ingrese el nombre el nombre del producto a vender : "<<endl;
		cin>>nombre_producto_vender;
		cout<<"\n ingrese el precio del producto: "<<endl;
		cin>>precio_producto_vender;
		cout<<"\n ingrese la cantidad de producto a vender : "<<endl;
		cin>>cantidad_producto_vender;
		
		total = precio_producto_vender * cantidad_producto_vender;
		sub_total=total;
		
		cout<<"\n¿desea aplicar descuento? (ingrese 1 para si 0 para no.) "<<endl;
		cin>>pregunta_descuento;
		if (pregunta_descuento==0){
			cout<<"\¿Cuanto es el descuento? (ingrese el descuento del porcentaje de descuento que desea aplicar, ejmplo: ingresa 50 para aplicar descuento)"<<endl;
			cin>>descuento;
			descuento_final = total * (descuento * 0.01);
			total_final = total - descuento_final;
			
		}
		else 
		{
			descuento_final = 0;
			total_final = total;
			
		}
		cout<<"\nIngrese 1 para volver al menu y 0 para salir:";
		cin>>opc2;
			break;
			
			case 6:
			return 0;
			
		
	    
			
		
	}
}

while (fin);

}
	


	

