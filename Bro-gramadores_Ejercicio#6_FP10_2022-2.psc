Proceso ProductoMixto
	Definir i, resultado Como Entero;
	Definir vec1, vec2, vec3, vecAux Como Real;
	Dimension vec1[3];
	Dimension  vec2[3];
	Dimension  vec3[3];
	Dimension  vecAux[3];
	resultado <- 0;
	
	Escribir 'PRODUCTO MIXTO EN TRES DIMENSIONES';
	Escribir '.:Vector 1:.';
	Escribir '.:Ingrese los valores:.';
	Para  i <- 0 Hasta 2 Con Paso 1 Hacer
		Escribir '', i;
		Leer vec1[i];
	FinPara
	Escribir '.:Vector 2:.';
	Escribir '.:Ingrese los valores:.';
	Para  i <- 0 Hasta 2 Con Paso 1 Hacer
		Escribir ' ', i;
		Leer vec2[i];
	FinPara
	Escribir '.:Vector 3:.';
	Escribir '.:Ingrese los valores:.';
	Para  i <- 0 Hasta 2 Con Paso 1 Hacer
		Escribir ' ', i;
		Leer vec3[i];
	FinPara
	
	vecAux[0] <- (vec2[1] * vec3[2]) - (vec2[2] * vec3[1]);
	vecAux[1] <- (-1) * ((vec2[0] * vec3[2]) - (vec2[2] * vec3[0]));
	vecAux[2] <- (vec2[0] * vec3[1]) - (vec2[1] * vec3[0]);
	Para  i <- 0 Hasta 2 Hacer
		resultado <- (vec1[i] * vecAux[i]);
		Escribir 'Resultado: ', resultado;
	FinPara

FinProceso
