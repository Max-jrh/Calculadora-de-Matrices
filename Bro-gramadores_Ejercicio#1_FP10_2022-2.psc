Proceso SumaDeVectores
	Definir i,tam Como Entero;
	Definir vec1,vec2 Como Real;
	Dimension vec1[100];
	Dimension vec2[100];
	Escribir "SUMA DE VECTORES";
	//Pidiendo datos
	Escribir "Ingrese el numero de elementos de los vectores";
	Leer tam;
	Escribir ".:Vector1:.";
	Escribir "Ingrese los valores";
	Para i<-1 Hasta tam Con Paso 1 Hacer
		Escribir "",i;	
		Leer vec1[i];
	FinPara
	Escribir ".:Vector2:.";
	Escribir "Ingrese los valores";
	Para i<-1 Hasta tam Con Paso 1 Hacer
		Escribir "",i;
		Leer vec2[i];
	FinPara
	//El resultado se guardara en en v1
	Para i<-1 Hasta tam Con Paso 1 Hacer
		vec1[i]<- vec1[i]+ vec2[i];
	FinPara
	//Mostrando resultado
	Escribir "Resultado:";
		Para i<-1 Hasta tam Con Paso 1 Hacer
		Escribir "",vec1[i];
	FinPara
	FinProceso
