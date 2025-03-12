#include <iostream>
#include <windows.h> 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>
#include <cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Declarar variables globales

#define tam 10

float montoapagar [tam];
float montocomision [tam];
float montodeducido [tam];
float montopagaclien [tam];
float vuelto [tam];
string fecha [tam];
string hora [tam];
string nombre [tam];
string cedula [tam];
string apellido1 [tam];
string apellido2 [tam];
string numerocaja [tam];
string tiposervicio [tam];
string numerofactura [tam];
int consecutivo[tam];
int indice;


void inicializar();
void realizarpagos();
void menu();
void consultarpagos();
void submenureportes();





void consultarpagos(){
	
	for (int i=0; i<indice; i++){
	
		printf("\n\n\n================= Consultar Pagos ===========================\n\n\n");

		printf("======== Fecha ========= Hora ========= Numero de factura ====== Numero de caja ======");
		printf("\n %s  %s  %s  %s \n",        fecha[i],       hora[i],          numerofactura[i], numerocaja[i] );
		printf("\n ======== Nombre ========= Apellidos \n");
		printf("\n %s  %s  %s \n", nombre[i], apellido1[i], apellido2[i] );
		printf("\n ======== Tipo de servicio ========= Monto a pagar ========= Monto con el que paga ====== \n");
		printf("\n %s  %f  %f \n", tiposervicio[i], montoapagar[i], montopagaclien[i] );
		
	
}
        printf("\n\n****** Ultima Linea *********\n");
        
        getch();
}


void inicializar () {
	
	indice = 0;
	for (int i=0; i<tam; i++)
{
	nombre [i] = "";
	cedula [i] = "";
	apellido1 [i] = "";
	apellido2 [i] = "";
	fecha [i] = "";
	hora [i] = "";
	numerocaja [i] = "";
	tiposervicio [i] = "";
	numerofactura [i] = "";
	
	}	
	printf("Los arreglos se inicializaron con exito / digite cualquier tecla para continuar \n");
	getch();
	system("cls");
}

void realizarpagos (){
	
	system("cls");
				char opcion;
				int consecutivo=0;
				
		
	do {
		if( indice > tam )
		{
			printf ("Los campos estan llenos \n");
		return;
		} else 
		{
			
			printf("Ingrese la fecha: \n");
				scanf("%s",&fecha[indice]);
					printf("Ingrese la hora: \n");
						scanf("%s",&hora[indice]);
							printf("Ingrese la cedula: \n");
								scanf("%s",&cedula[indice]);
									printf("Ingrese el nombre: \n");
										scanf("%s",&nombre[indice]);
											printf("ingrese primer apellido: \n");
												scanf("%i",&apellido1[indice]);
													printf("Ingrese segundo apellido: \n");
														scanf("%s",&apellido2[indice]);
									
				printf("Que tipo de servicio desea pagar (1-Luz 2-Telefono 3-Agua): \n");
								scanf("%i",&tiposervicio[indice]);
									printf("Digite el numero de factura: \n");
										scanf("%s",&numerofactura[indice]);
											printf("Digite el monto a pagar: \n");
												scanf("%i",&montoapagar[indice]);
													printf("Monto con el que paga el cliente: \n");
														scanf("%i",&montopagaclien[indice]);
														consecutivo++;						
				{          
				
	} 
}
	system("cls");
}while ((opcion=='s') || (opcion=='S'));
}

void menu(){
	system("cls");
	int opcion = 0;
	do{
	printf("================= Menu Sistema de Pagos ================");
		printf("\n\n\n   1- Inicializar \n\n");
			printf("   2- Realizar pagos\n\n");
				printf("   3- Consultar pagos\n\n");
					printf("   4- Modificar pagos\n\n");
						printf("   5- Eliminar pagos\n\n");
							printf("   6- Submenu Reportes\n\n");
								printf("   7- Salir\n\n");
									printf("\n ========================================================");
									printf("\n Digite la opcion requerida: "); scanf("%i",&opcion);
	switch(opcion)
	{
		case 1:  inicializar();
		break;
		case 2:  realizarpagos ();
		break;
		case 3: consultarpagos();
		break;
		case 4:;
		break;
		case 5: ;
		break;
		case 6: submenureportes();
		break;
		case 7: break;
		default: printf ("opcion incorrecta");
		break;
}
	}while (opcion !=7);
	
}
	
		

void submenureportes(){
	int opcion =0;
	do{
	printf("1- Ver todos los pagos \n");
		printf("2- Ver pagos por tipo de servicio \n");
			printf("3- Ver pagos por codigo de caja \n");
				printf("4- Ver dinero comisionado \n");
					printf("5- Regresar al menu principal \n");
						printf ("Desea continuar: \n");
				scanf("%i",&opcion);
	
	switch (opcion)
	
	{	case 1: 
		 break;
		case 2: 
		 break;
		case 3: 
		 break;
		case 4: 
		 break;
		case 5: menu();
		 break;
		default: printf("opcion incorrecta");
		 break;
		}
		
	}while(opcion != 5);
}



int main(){
	
	system("color 1f");

	menu();

	return 0;
}