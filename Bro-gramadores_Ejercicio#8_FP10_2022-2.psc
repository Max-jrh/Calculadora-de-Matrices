
	Proceso restaMat
		Definir i, j, fil, col Como Entero;
		Definir mat1, mat2 Como Real;
		Dimension mat1[10, 10];
		Dimension  mat2[10,10];
		
		Escribir '***************SUMA DE MATRICES***************';
		
		Escribir '.:Ingrese el numero de filas de las matrices:.';
		Leer fil;
		Escribir '.:Ingrese el numero de columnas de las matrices:';
		Leer col;
		
		Escribir '.:Matriz 1: ';
		Para  i <- 0 Hasta fil Con Paso 1 Hacer
			Para  j <- 0 Hasta col Con Paso 1 Hacer
				Escribir "Ingresa los valores de la matriz 1 para (", i,"), (",j,")";
				Leer mat1[i,j];
			FinPara
		FinPara
		
		//Rellenando la matriz 1
		Escribir '.:Matriz 2: ';
		Para  i <- 0 Hasta fil Con Paso 1 Hacer
			Para  j <- 0 Hasta col Con Paso 1 Hacer
				Escribir "Ingresa los valores de la matriz 2 para (", i,"), (",j,")";
				Leer mat2[i,j];
			FinPara
		FinPara
		//Rellenando la matriz 2
		Para  i <- 0 Hasta fil Con Paso 1 Hacer
			Para  j <- 0 Hasta col Con Paso 1 Hacer 
				mat1[i,j] <- mat1[i,j] - mat2[i,j];
				Escribir "La resta de matrices es(",mat1[i,j],")";
				
			FinPara
		FinPara
FinProceso

