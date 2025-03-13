Algoritmo Inversa 
	Definir n,m,i,j Como Entero;
	Definir A,inv,determinante Como Real;
	Escribir "------Inversa de una matriz------";
	Dimension A(2,2);
	Dimension inv(2,2);
	Escribir "Ingrese los valores de la matriz: ";
	Para i<-0 Hasta 1 Con Paso 1 Hacer
		Para j<-0 Hasta 1 Con Paso 1 Hacer
			escribir "A(", i, ",", j, "): " Sin Saltar;
			leer A(i,j);
		FinPara
	FinPara
	Escribir "Elementos de la matriz: ";
	Para i<-0 Hasta 1 Con Paso 1 Hacer
		Para j<-0 Hasta 1 Con Paso 1 Hacer
			Escribir A(i,j), " " Sin Saltar;
		FinPara
		Escribir "";
	FinPara
	determinante<-(A(0,0)*A(1,1))-(A(0,1)*A(1,0));
	Si determinante=0 Entonces
		Escribir "La matriz no tiene inversa";
		Escribir "";
	SiNo
		inv(0,0)<-A(1,1)/determinante;
		inv(0,1)<--A(0,1)/determinante;
		inv(1,0)<--A(1,0)/determinante;
		inv(1,1)<-A(0,0)/determinante;
		
		Escribir "";
		Escribir "Inversa: ";
		Para i<-0 Hasta 1 Con Paso 1 Hacer
			Para j<-0 Hasta 1 Con Paso 1 Hacer
				Escribir inv(i,j), " " Sin Saltar;
			FinPara
			Escribir "";
		FinPara
	FinSi
	
FinAlgoritmo