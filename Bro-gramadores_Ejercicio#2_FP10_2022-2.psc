Proceso SumaDeVectores
	Definir i,tam,op Como Entero;
	Definir vec1,vec2 Como Real;
	Dimension vec1[100];
	Dimension vec2[100];
	Escribir 'RESTA DE VECTORES';
	// Pidiendo datos
	Escribir 'Ingrese el numero de elementos de los vectores';
	Leer tam;
	Escribir '.:Vector1:.';
	Escribir 'Ingrese los valores';
	Para i<-1 Hasta tam Hacer
		Escribir '',i;
		Leer vec1[i];
	FinPara
	Escribir '.:Vector2:.';
	Escribir 'Ingrese los valores';
	Para i<-1 Hasta tam Hacer
		Escribir '',i;
		Leer vec2[i];
	FinPara
	Escribir '1. Vector 1 - Vector 2';
	Escribir '2. Vector 2 - Vector 1';
	Escribir 'Seleccione una opción';
	Leer op;
	Si op==1 Entonces
	Para i<-1 Hasta tam Hacer
			vec1[i] <- vec1[i]-vec2[i];
		FinPara
		// Mostrando resultado
		Escribir 'Resultado:';
	Para i<-1 Hasta tam Hacer
		Escribir '',vec1[i];
		FinPara
	SiNo
	Para i<-1 Hasta tam Hacer
			vec2[i] <- vec2[i]-vec1[i];
	FinPara
		// Mostrando resultado
	Escribir 'Resultado:';
	Para i<-1 Hasta tam Hacer
		Escribir '',vec2[i];
	FinPara
	FinSi
FinProceso
