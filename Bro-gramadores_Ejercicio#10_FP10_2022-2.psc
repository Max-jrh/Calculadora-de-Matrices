Proceso multiplicacion_matrices
	// definicion de largos y anchos de las matrices
	Escribir "***************PRODUCTO DE MATRICES***************";
	Escribir "";
	Escribir "";
	
	Escribir "Ingresar numero de filas de la matriz 1:";
	Leer A;
	Escribir "Ingresar numero de columnas de la matriz 2: ";
	Leer B;
	Dimension matriz1(A,B);
	
	Escribir "";
	Escribir "Ingresar numero de filas de la matriz 2: ";
	Leer C;
	Escribir "Ingresar numero de columnas de la matriz 2: ";
	Leer D;
	Dimension matriz2(C,D);
	
	si B=C Entonces // determinacion si son multiplicables o no
		
		Escribir "";
		Escribir "Las matrices si se pueden multiplicar, se obtendrá una matriz de: ", A,"X", D;
		Dimension matrizresul(A,D);
		
		// ingreso de datos de la 1a matriz
		Escribir "";
		Escribir "Ingresar datos de la matriz 1: ";
		Para i<-1 Hasta A Con Paso 1 Hacer
			Para j<-1 Hasta B Con Paso 1 Hacer
				Escribir "Ingrese dato de la posicion ",i,",",j;
				Leer matriz1(i,j);
				
			FinPara
			
		FinPara
		
		// ingreso de datos de la 2a matriz
		Escribir "";
		Escribir "Ingresar datos de la matriz 2: ";
		Para i<-1 Hasta C Con Paso 1 Hacer
			Para j<-1 Hasta D Con Paso 1 Hacer
				Escribir "Ingrese dato de la pocicion ",i,",",j;
				Leer matriz2(i,j);
				
			FinPara
			
		FinPara
		
		// multiplicacion
		Para i<-1 hasta A Con Paso 1 Hacer
			Para j<-1 hasta D Con Paso 1 Hacer
				suma <- 0 ; // acumulador de las multiplicaciones necesarias
				Para x<-1 hasta B Con Paso 1 Hacer
					suma <- suma + matriz1(i,x) * matriz2(x,j);
					
				FinPara
				matrizresul(i,j) <- suma;
				
			FinPara
			
		FinPara
		
		// mostrar los resultados en orden
		Escribir "";
		Escribir "El producto de las matrices anteriores es: ";
		
		Para i<-1 Hasta A Con Paso 1 Hacer
			Escribir 'fila ',i,':';
			Para j<-1 Hasta D Con Paso 1 Hacer
				Escribir matrizresul(i,j);
			FinPara
			
		FinPara
		
		
	Sino
		Escribir "";
		Escribir "El no. de columnas de la matriz 1 debe ser igual al no. de filas de la matriz 2";
		
	FinSi
	
	
FinProceso