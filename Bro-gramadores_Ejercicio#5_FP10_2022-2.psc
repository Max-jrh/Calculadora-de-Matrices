Proceso ProductoVectorial
	Definir i Como Entero;
	Definir vec1, vec2, vecRes Como Real;
	Dimension vec1[3];
	Dimension  vec2[3];
	Dimension  vecRes[3];
	
	Escribir 'PRODUCTO VECTORIAL EN TRES DIMENSIONES';
	Escribir '.:Vector 1:.';
	Escribir '.:Ingrese los valores:.';
	Para  i <- 0 Hasta 2 Con Paso 1 Hacer 
	Escribir ' ', i;
	Leer vec1[i];
	FinPara

	Escribir '.:Vector 2:.';
	Escribir '.:Ingrese los valores:.';
	Para  i <- 0 Hasta 2 Con Paso 1 Hacer 
	Escribir ' ', i;
	Leer vec2[i];
	FinPara

	vecRes[0] <- (vec1[1] * vec2[2]) - (vec1[2] * vec2[1]);
	vecRes[1] <- (-1) * ((vec1[0] * vec2[2]) - (vec1[2] * vec2[0]));
	vecRes[2] <- (vec1[0] * vec2[1]) - (vec1[1] * vec2[0]);
	Escribir '.Resultado:.';
	Para  i <- 0 Hasta 2 Con Paso 1 Hacer 
	Escribir vecRes[i];
	FinPara


FinProceso
