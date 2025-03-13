Proceso ProductoEscalar
	Definir i,tam, resultado Como Entero;
	Definir vec1,vec2 Como Real;
	Dimension vec1[100];
	Dimension vec2[100];
	resultado <- 0;
	Escribir 'PRODUCTO ESCALAR';
	Escribir 'Ingrese el numero de elementos de los vectores';
	Leer tam;
	Escribir '.:Vector 1:.';
	Escribir '.:Ingrese los valores:.';
	Para  i <- 1 Hasta tam Con Paso 1 Hacer
		Escribir '', i;
		Leer vec1[i];
	FinPara
	Escribir '.:Vector 2:.';
	Escribir '.:Ingrese los valores:.';
	Para  i <- 1 Hasta tam Con Paso 1 Hacer 
		Escribir '', i;
		Leer vec2[i];
	FinPara
	
	Para  i <- 1 Hasta tam Con Paso 1 Hacer
		resultado <- resultado + (vec1[i]*vec2[i]);
	FinPara 
	
	Escribir 'Resultado:', resultado;
	Para  i <- 1 Hasta tam Hacer
	FinPara
	
FinProceso
