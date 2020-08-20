/*Tarea1 Calculadora de numeros complejos
 * Autor: Ashley Romero Yesika Ramirez */
#include<stdio.h>
void main()
{
	float real1, real2, real3, imag1, imag2, imag3, denominador;
  /*real= parte real, imag= parte imaginaria, denominador= denominador para la division,opc= opcion*/
	
	int opc;
	/*El usuario inserta los numeros a operar*/
	printf("Hola!, Con este programa podras realizar operaciones entre numeros complejos\n");
	printf("Ingresa los numeros a operar\n");
	printf("Ingresa la parte real del primer numero\n");
	scanf("%f",&real1);
	printf("Ingresa la parte imaginaria del primer numero\n");
	scanf("%f",&imag1);
	printf("Ingresa parte real del segundo numero\n");
	scanf("%f",&real2);
	printf("Ingresa la parte imaginaria del segundo numero\n");
	scanf("%f",&imag2);
	/*El usuario escoge la operacion a realizar*/
	printf("Selecciona la operacion a realizar\n");
	printf("Menu\n 1--Suma\n 2--Resta\n 3--Multiplicacion\n 4--Division\n");
	scanf("%d",&opc);
	



	if (opc==1) /*SE REALIZARA LA SUMA////%2.fpara que solo muestre 2 decimales */
		{
			real3= real1+real2;
			imag3= imag1+imag2;
			printf("La suma de los numeros (%.2f+%2.fi) + (%2.f+%2.fi) = %2.f+%2.fi\n", real1,imag1,real2,imag2,real3,imag3);
		}
	if (opc==2)/*SE REALIZARA LA RESTA*/
		{
			real3= real1-real2;
			imag3= imag1-imag2;
			printf("La resta de los numeros (%2.f+%2.fi) + (%2.f+%2.fi) = %2.f+%2.fi\n", real1,real2,imag1,imag2,real3,imag3);
		}
	if (opc==3) /*REALIZARA LA MULTIPLICACION*/
		{
			real3= (real1*real2)-(imag1*imag2);
			imag3= (real1*imag2)+(real2*imag1);
			printf("La multiplicacion de los numeros (%2.f+%2.fi) + (%2.f+%2.fi) = %2.f+%2.fi\n", real1,imag1,real2,imag2,real3,imag3);
		}		
			
	if (opc==4) /*REALIZARA LA DIVISION*/
		{
			denominador=(real2*real2)+(imag2*imag2);
			real3=(real1*real2+imag1*imag2)/denominador;
			imag3= (real2*imag1-real1*imag2)/denominador;
			printf("La division de los numeros (%2.f+%2.fi) / (%2.f+%2.fi) = %2.f+%2.fi\n",real1,imag1,real2,imag2,real3,imag3);
		}	
}

	

	
