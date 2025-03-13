Algoritmo traza
	definir A,n,m Como entero;

	definir i,j Como Entero;
	definir suma Como Entero;
	suma<-0;
	
	Escribir "***************TRAZA DE UNA MATRIZ CUADRADA***************";
	Escribir "";
	Escribir "";
	Escribir "Ingresar numero de filas y columnas de la matriz cuadrada: ";
	Leer n,m;
	Si n=m Entonces
		dimension A(n,n);
		Escribir "Ingrese los valores de la matriz: ";
		Para i<-1 Hasta n Con Paso 1 Hacer
			Para j<-1 Hasta n Con Paso 1 Hacer
				escribir "A(", i, ",", j, "): " Sin Saltar;
				leer A(i,j);
			Fin Para
		Fin Para
		Para i<-1 Hasta n Con Paso 1 Hacer
			Para j<-1 Hasta n Con Paso 1 Hacer
				si i=j Entonces
					suma<-suma+A(i,j);
				FinSi
			Fin Para
		Fin Para
		
		Escribir "La suma es: ",suma;
	SiNo
		Escribir "La matriz no es cuadrada por lo tanto no se puede realizar su traza";
	Fin Si
FinAlgoritmo