Proceso vecPorEscalar
	Definir vec,escalar Como Real;
	Definir tam,i Como Entero;
	Dimension vec[100];
	Escribir"VECTOR POR ESCALAR";
	// Pidiendo datos
	Escribir 'Ingrese el numero de elementos del vector';
	Leer tam;
	Escribir '.:Vector:.';
	Escribir 'Ingrese los valores';
	Para i<-1 Hasta tam Hacer
		Escribir '',i;
		Leer vec[i];
	FinPara
	Escribir ".:Escalar:.";
	Leer escalar;
	Para i<-1 Hasta tam Hacer
		vec[i] <- vec[i]*escalar;
	FinPara
	// Mostrando resultado
	Escribir 'Resultado:';
	Para i<-1 Hasta tam Hacer
		Escribir '',vec[i];
	FinPara
FinProceso
