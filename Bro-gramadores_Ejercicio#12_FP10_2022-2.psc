Algoritmo Transpuesta
	Definir A,n,m,i,j Como Entero;
	Escribir "----TRANSPUESTA DE UNA MATRIZ----";
	Escribir "Ingresar numero de filas y columnas: ";
	Leer n,m;
	Dimension A(n,m);
	Escribir "Ingrese los valores de la matriz: ";
	Para i<-1 Hasta n Con Paso 1 Hacer
		Para j<-1 Hasta m Con Paso 1 Hacer
			escribir "A(", i, ",", j, "): " Sin Saltar;
			leer A(i,j);
		Fin Para
	Fin Para
	Escribir "Elementos de la matriz: ";
	Para i<-1 Hasta n Con Paso 1 Hacer
		Para j<-1 Hasta n Con Paso 1 Hacer
			Escribir A(i,j), " " Sin Saltar;
		Fin Para
		Escribir "";
	Fin Para
	
	Escribir "La transpuesta de la matriz es: ";
	Para i<-1 Hasta n Con Paso 1 Hacer
		Para j<-1 Hasta n Con Paso 1 Hacer
			Escribir A(j,i), " " Sin Saltar;
		Fin Para
		Escribir "";
	Fin Para
FinAlgoritmo
