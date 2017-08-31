/*Nombre: Cristhian David Giraldo Tapasco
Docente: Carlos Alberto Londoño
Parcial 1
Ejercicio 2
*/

#include <conio.h>
#include <stdio.h>

int main (){
	
	int a,b,c,i;
	int num;
	int *pnum=&num;
	a = 0;
	b =1;

	
	printf ("Ingrese el numero de filas: ");
	scanf ("%d", &num);
	

	for (i ;i <= num; i++){
		
		c = a+b;
		b = a;
		a = c;
		
		printf ("%d \n" ,a);
		

	}
		

	
	return 0;
}
