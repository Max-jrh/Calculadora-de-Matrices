Proceso matEscalar
	Definir fil, col, i, j Como Entero;
	Definir mat, escalar como real;
	Dimension mat[10, 10];
	
	Escribir '***************MATRIZ POR ESCALAR***************';
	
	Escribir 'Ingrese el numero de filas de la matriz:';
	Leer fil;
	Escribir '.:Ingrese el numero de columnas de las matrices:';
	Leer col;
	
	Para  i <- 1 Hasta fil Con Paso 1 Hacer
		Para  j <- 1 Hasta col Con Paso 1 Hacer
			Escribir "Ingresa los valores de la matriz 1 para (", i,"), (",j,")";
			Leer mat[i,j];
		FinPara
	FinPara
	
	Escribir "Ingresa un numero para utilizarlo como escalar: ";
	Leer escalar;
	
	Para  i <- 1 Hasta fil Con Paso 1 Hacer
		Para  j <- 1 Hasta col Con Paso 1 Hacer
			mat[i,j] <- mat[i,j]*escalar;
			Escribir "La matriz es (",mat[i,j],")";
		FinPara
	FinPara
	
FinProceso
	