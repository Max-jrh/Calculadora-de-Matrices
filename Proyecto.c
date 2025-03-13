//Calculadora de vectores y matrices

#include <stdio.h> //Biblioteca estandar
#include <stdlib.h> //Para usar la funcion system()

//variables globales
int i, j;

//Menus
int pedirOpcion(int opMax) //Funcion que pide una opcion al usuario y la valida. Se le envia el numero maximo de opciones
{
    char opChar[10];
    int op;
    
    fflush(stdin); //Vaciando el buffer de entrada
    do
    { 
        printf("-> "); gets(opChar);
        op = atoi(opChar); //Convirtiendo el string a entero
        if (op < 1) //Comprobando que la opcion sea valida
            printf("Opcion invalida\n");
            
        else if (op > opMax)
            printf("Opcion invalida. El maximo es %d\n", opMax);
        printf("\n");
    } while (op < 1 || op > opMax);
    fflush(stdin); //Vaciando el buffer por si se ingreso un caracter

    return op; //La funcion solo regresa un valor en el rango establecido
}
int menuPrincipal() //Menu que se imprine cada vez que se inicia el programa y al terminar una operacion si el usuario lo desea
{
    system("cls"); //Limpiando la pantalla de la terminal
    printf("***************MENU PRINCIPAL***************\n"); 
    printf(".:Operaciones con Vectores:.\n");
    printf("1)  Suma de vectores\n");
    printf("2)  Resta de vectores\n");
    printf("3)  Producto de un vector por un escalar\n");
    printf("4)  Producto escalar\n");
    printf("5)  Producto vectorial\n");
    printf("6)  Producto mixto\n\n");
    printf(".:Operaciones con Matrices:.\n");
    printf("7)  Suma de matrices\n");
    printf("8)  Resta de matrices\n");
    printf("9)  Producto de una matriz por un escalar\n");
    printf("10) Producto de matrices\n");
    printf("11) Traza de una matriz\n");
    printf("12) Transpuesta de una matriz\n");
    printf("13) Inversa de una matriz\n\n");
    printf("14) Mostrar Caratula\n");
    printf("15) Salir\n\n");

    printf(".:Seleccione una opcion:.\n");
    return pedirOpcion(15); //El numero maximo de opciones es 15 (en este caso)
}
int menuRetorno() //Menu que se imprime al terminar una operacion
{
    printf("\n\n***************MENU DE RETORNO***************\n");
    printf("1)  Repetir operacion\n");
    printf("2)  Volver al menu principal\n");
    printf("3)  Salir\n\n");

    printf(".:Seleccione una opcion:.\n");
    return pedirOpcion(3); //El numero maximo de opciones es 3 (en este caso)
}

//Caratula
void caratula() //Funcion que imprime la caratula con los datos del equipo
{
    FILE *archivo; //Puntero a archivo
    char caracter;

    archivo = fopen("Caratula.txt", "r"); //Abriendo el archivo en modo lectura
    if (archivo == NULL)
        printf("Error al abrir el archivo"); //Esto solo sucede si el archivo no existe o no esta en la misma carpeta que el programa
    else
    {
        while ((caracter = fgetc(archivo)) != EOF) //Imprimiendo el archivo caracter por caracter
            printf("%c", caracter);
        fclose(archivo); //Cerrando el archivo
    }
}

//Pedir y Mostrar Datos
void pedirVec(float vec[], int tam) //Funcion que pide los valores de un vector
{
    printf(".:Ingrese los valores:.\n");
    for (i = 0; i < tam; i ++) 
    {
        printf("%d: ", i + 1); //Se suma 1 para que se entienda que es el elemento 1, 2, 3, etc.
        scanf("%f", &vec[i]);
    }
}
void mostrarVec(float vec[], int tam) //Funcion que imprime el resultado de una operacion con vectores
{
    printf("\n.:Resultado:.\n");
    for (i = 0; i < tam; i++)
        printf("%.2f\t", vec[i]); //Se imprime el resultado con un decimal y un espacio entre cada elemento
    printf("\n");
}
void pedirMat(float mat[][10], int fil, int col) //Funcion que pide los valores de una matriz
{
    printf(".:Ingrese los valores:.\n");
    for (i = 0; i < fil; i ++)
    {
        for (j = 0; j < col; j ++)
        {
            printf("[%d][%d]: ", i + 1, j + 1); //Indicando la posicion del elemento en la matriz
            scanf("%f", &mat[i][j]);
        }
        printf("\n"); //Separando cada fila de datos
    }
}
void mostrarMat(float mat[][10], int fil, int col)
{
    printf(".:Resultado:.\n");
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j ++)
            printf("%.2f\t", mat[i][j]);
        printf("\n");
    }
}

//Operaciones con Vectores
void sumaVec()
{
    float vec1[100], vec2[100];
    int tam;

    printf("***************SUMA DE VECTORES***************\n\n");
    printf(".:Ingrese el numero de elementos de los vectores:.\n"); 
    tam = pedirOpcion(100); //Pidiendo numero de elementos (maximo 100)
    printf(".:Vector 1:.\n");
    pedirVec(vec1, tam); //Rellenado el vector 1
    printf("\n.:Vector 2:.\n");
    pedirVec(vec2, tam); //Rellenando el vector 2

    for (i = 0; i < tam; i ++)
        vec1[i] += vec2[i]; //El resultado de la suma se guarda en el vector 1
    
    mostrarVec(vec1, tam); //Imprimiendo el resultado
}
void restaVect()
{
    float vec1[100], vec2[100];
    int tam;

    printf("***************RESTA DE VECTORES***************\n\n");
    printf(".:Ingrese el numero de elementos de los vectores:.\n"); 
    tam = pedirOpcion(100); //Pidiendo numero de elementos (maximo 100)
    printf(".:Vector 1:.\n");
    pedirVec(vec1, tam); //Rellenado el vector 1
    printf("\n.:Vector 2:.\n");
    pedirVec(vec2, tam); //Rellenando el vector 2
    
    printf("\n1. Vector 1 - Vector 2\n");
    printf("2. Vector 2 - Vector 1\n\n");
    printf(".:Seleccione una opcion:.\n"); //Preguntando el orden de la resta
    
    if (pedirOpcion(2) == 1)
    {
        for (i = 0; i < tam; i ++)
            vec1[i] -= vec2[i]; //El resultado de la resta se guarda en el vector 1
      
        mostrarVec(vec1, tam); //Imprimiendo el resultado
    }
    else
    {
        for (i = 0; i < tam; i ++)
            vec2[i] -= vec1[i]; //El resultado de la resta se guarda en el vector 2

        mostrarVec(vec2, tam); //Imprimiendo el resultado
    }
}
void vecPorEscalar()
{
    float vec[100], escalar;
    int tam;

    printf("***************VECTOR POR ESCALAR***************\n\n");
    printf(".:Ingrese el numero de elementos de del vector:.\n"); 
    tam = pedirOpcion(100); //Pidiendo numero de elementos (maximo 100)
    printf(".:Vector:.\n");
    pedirVec(vec, tam); //Rellenado el vector
    
    printf("\n.:Escalar.:\n -> ");
    scanf("%f", &escalar); //Pidiendo el escalar
    
    for (i = 0; i < tam; i++) //Multiplicando cada elemento del vector por el escalar
        vec[i] *= escalar; 

    mostrarVec(vec, tam); //Imprimiendo el resultado
}
void proEscalar()
{
    float vec1[100], vec2[100], resultado = 0;
    int tam;

    printf("***************PRODUCTO ESCALAR***************\n\n");
    printf(".:Ingrese el numero de elementos de los vectores:.\n"); 
    tam = pedirOpcion(100); //Pidiendo numero de elementos (maximo 100)
    printf(".:Vector 1:.\n");
    pedirVec(vec1, tam); //Rellenado el vector 1
    printf("\n.:Vector 2:.\n");
    pedirVec(vec2, tam); //Rellenando el vector 2

    for (i = 0; i < tam; i ++) //Multiplicando cada elemento del vector 1 por el vector 2 y sumandolo al total
        resultado += vec1[i] * vec2[i];
    
    printf("\n\n.:Resultado:.\n%.1f", resultado); //Imprimiendo el resultado
}
void proVectorial() //Solo funciona en tres dimensiones
{
    float vec1[3], vec2[3], vecRes[3];

    printf("***************PRODUCTO VECTORIAL EN TRES DIMENSIONES***************\n\n");
    printf(".:Vector 1:.\n");
    pedirVec(vec1, 3); //Rellenado el vector 1
    printf("\n.:Vector 2:.\n");
    pedirVec(vec2, 3); //Rellenando el vector 2

    //Para calcular el producto vectorial se utiliza un pseudodeterminante
    vecRes[0] = (vec1[1] * vec2[2]) - (vec1[2] * vec2[1]); 
    vecRes[1] = (- 1) * ((vec1[0] * vec2[2]) - (vec1[2] * vec2[0]));
    vecRes[2] = (vec1[0] * vec2[1]) - (vec1[1] * vec2[0]);

    mostrarVec(vecRes, 3); //Imprimiendo el resultado
}
void proMixto() //Solo funciona en tres dimensiones
{
    float vec1[3], vec2[3], vec3[3], vecAux[3], resultado = 0;

    printf("***************PRODUCTO MIXTO EN TRES DIMENSIONES***************\n\n"); 
    printf(".:Vector 1:.\n");
    pedirVec(vec1, 3); //Rellenado el vector 1
    printf("\n.:Vector 2:.\n");
    pedirVec(vec2, 3); //Rellenando el vector 2
    printf("\n.:Vector 3:.\n");
    pedirVec(vec3, 3); //Rellenando el vector 3

    //Primero se hace el producto vectorial del vector 2 y el vector 3
    vecAux[0] = (vec2[1] * vec3[2]) - (vec2[2] * vec3[1]);
    vecAux[1] = (- 1) * ((vec2[0] * vec3[2]) - (vec2[2] * vec3[0]));
    vecAux[2] = (vec2[0] * vec3[1]) - (vec2[1] * vec3[0]);
    
    for (i = 0; i < 3; i ++) //Al vector resultante (vecAux) se le hace el producto escalar con el vector 1
        resultado += vec1[i] * vecAux[i];
    
    printf("\n\n.:Resultado:.\n%.1f", resultado); //Imprimiendo el resultado
}

//Operacions con Matrices
void sumaMat()
{
    float mat1[10][10], mat2[10][10];
    int fil, col;

    printf("***************SUMA DE MATRICES***************\n\n");
    printf(".:Ingrese el numero de filas de las matrices:.\n");
    fil = pedirOpcion(10); //Pidiendo numero de filas (maximo 10)
    printf(".:Ingrese el numero de columnas de las matrices:.\n");
    col = pedirOpcion(10); //Pidiendo numero de columnas (maximo 10)
    printf(".:Matriz 1:.\n");
    pedirMat(mat1, fil, col); //Rellenando la matriz 1
    printf(".:Matriz 2:.\n");
    pedirMat(mat2, fil, col); //Rellenando la matriz 2

    for (i = 0; i < fil; i ++)
    {
        for (j = 0; j < col; j ++)
            mat1[i][j] += mat2[i][j]; //Sumando cada elemento de la matriz 1 con el de la matriz 2
    }

    mostrarMat(mat1, fil, col); //Imprimiendo el resultado (guardado en la matriz 1)
}
void restaMat()
{
    float mat1[10][10], mat2[10][10];
    int fil, col;

    printf("***************RESTA DE MATRICES***************\n\n");
    printf(".:Ingrese el numero de filas de las matrices:.\n");
    fil = pedirOpcion(10); //Pidiendo numero de filas (maximo 10)
    printf(".:Ingrese el numero de columnas de las matrices:.\n");
    col = pedirOpcion(10); //Pidiendo numero de columnas (maximo 10)
    printf(".:Matriz 1:.\n");
    pedirMat(mat1, fil, col); //Rellenando la matriz 1
    printf(".:Matriz 2:.\n");
    pedirMat(mat2, fil, col); //Rellenando la matriz 2
    
    printf("1. Matriz 1 - Matriz 2\n");
    printf("2. Matriz 2 - Matriz 1\n\n");
    printf(".:Seleccione una opcion:.\n"); //Preguntando al usuario el orden de la resta
    
    if (pedirOpcion(2) == 1) //Matriz 1 - Matriz 2
    {
        for (i = 0; i < fil; i ++)
        {
            for (j = 0; j < col; j ++) //Restando cada elemento de la matriz 1 con el de la matriz 2
                mat1[i][j] -= mat2[i][j];
        }  
        mostrarMat(mat1, fil, col); //Imprimiendo el resultado (guardado en la matriz 1)
    }
    else //Matriz 2 - Matriz 1
    {
        for (i = 0; i < fil; i ++)
        {
            for (j = 0; j < col; j ++) //Restando cada elemento de la matriz 2 con el de la matriz 1
                mat2[i][j] -= mat1[i][j];
        }  
        mostrarMat(mat2, fil, col); //Imprimiendo el resultado (guardado en la matriz 2)
    }
}
void matPorEscalar()
{
    float mat[10][10], escalar;
    int fil, col;

    printf("***************MATRIZ POR ESCALAR***************\n\n");
    printf(".:Ingrese el numero de filas de la matriz:.\n");
    fil = pedirOpcion(10); //Pidiendo numero de filas (maximo 10)
    printf(".:Ingrese el numero de columnas de la matriz:.\n");
    col = pedirOpcion(10); //Pidiendo numero de columnas (maximo 10)
    printf(".:Matriz:.\n");
    pedirMat(mat, fil, col); //Rellenando la matriz
    printf(".:Escalar.:\n -> ");
    scanf("%f", &escalar); //Pidiendo el escalar

    for (i = 0; i < fil; i ++)
    {
        for (j = 0; j < col; j ++)
            mat[i][j] *= escalar; //Multiplicando cada elemento de la matriz por el escalar
    }

    mostrarMat(mat, fil, col); //Imprimiendo el resultado
}
void productoMat()
{
    float mat1[10][10], mat2[10][10], matRes[10][10];
    int fil1, col1, fil2, col2, k;

    printf("***************PRODUCTO DE MATRICES***************\n\n");
    do //Pidiendo las dimensiones de las matrices
    {    
        printf(".:Ingrese el numero de filas de la matriz 1:.\n");
        fil1 = pedirOpcion(10); //Pidiendo numero de filas de la matriz 1 (maximo 10)
        printf(".:Ingrese el numero de columnas de la matriz 1:.\n");
        col1 = pedirOpcion(10); //Pidiendo numero de columnas de la matriz 1 (maximo 10)
        printf("\n.:Ingrese el numero de filas de la matriz 2:.\n");
        fil2 = pedirOpcion(10); //Pidiendo numero de filas de la matriz 2 (maximo 10)
        printf(".:Ingrese el numero de columnas de la matriz 2:.\n");
        col2 = pedirOpcion(10); //Pidiendo numero de columnas de la matriz 2 (maximo 10)
        if (col1 != fil2) //Comprueba que el producto de matrices sea posible
            printf("\nEl no. de columnas de la matriz 1 debe ser igual al no. de filas de la matriz 2\n");
        printf("\n");
    } while (col1 != fil2); 
    //Para que el producto de matrices sea posible, el no. de columnas de la matriz 1 debe ser igual al no. de filas de la matriz 2

    printf(".:Matriz 1:.\n");
    pedirMat(mat1, fil1, col1); //Rellenando la matriz 1
    printf(".:Matriz 2:.\n");
    pedirMat(mat2, fil2, col2); //Rellenando la matriz 2

    for (i = 0; i < fil1; i ++)
    {
        for (j = 0; j < col2; j ++)
        {
            matRes[i][j] = 0; //Inicializando la matriz resultado
            for (k = 0; k < col1; k ++)
                matRes[i][j] += mat1[i][k] * mat2[k][j]; 
                /*Cada elemento de la matriz resultado es la suma de los productos de los elementos de la fila i de la matriz 1 por los 
                elementos de la columna j de la matriz 2*/
        }  
    }

    mostrarMat(matRes, fil2, col2); //Imprimiendo el resultado
}
void traza() //La traza solo se puede calcular en matrices cuadradas
{
    float mat[10][10], traza = 0;
    int tam;

    printf("***************TRAZA DE UNA MATRIZ CUADRADA***************\n\n"); 
    printf(".:Ingrese el numero de filas y columnas de la matriz cuadrada:.\n");
    tam = pedirOpcion(10); //Pidiendo numero de filas y columnas (maximo 10)
    printf(".:Matriz:.\n");
    pedirMat(mat, tam, tam); //Rellenando la matriz

    for (i = 0; i < tam; i ++)
    {
        for (j = 0; j < tam; j ++)
        {
            if (i == j) //Solo se suman los elementos de la diagonal principal
                traza += mat[i][j];
        }
    }

    printf("\n.:Resultado:.\n%.1f", traza); //Imprimiendo el resultado
}
void transpuesta()
{
    float mat[10][10];
    int fil, col;

    printf("***************TRANSPUESTA DE UNA MATRIZ***************\n\n");
    printf(".:Ingrese el numero de filas de la matriz:.\n");
    fil = pedirOpcion(10); //Pidiendo numero de filas (maximo 10)
    printf(".:Ingrese el numero de columnas de la matriz:.\n");
    col = pedirOpcion(10); //Pidiendo numero de columnas (maximo 10)
    printf(".:Matriz:.\n");
    pedirMat(mat, fil, col); //Rellenando la matriz

    printf("\n.:Resultado:.\n"); //Imprimiendo el resultado
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < fil; j ++)
            printf("%.2f\t", mat[j][i]); //Imprimiendo la matriz transpuesta usando la matriz original 
        printf("\n");
    }
}
void inversa() //Solo se sacara la inversa de una matriz 2x2
{
    float mat[10][10], inv[10][10], determinante; //Se declara con 10 para que no haya problemas al pedir la matriz

    printf("***************INVERSA DE UNA MATRIZ 2x2***************\n\n");
    printf(".:Matriz:.\n");
    pedirMat(mat, 2, 2); //Rellenando la matriz

    determinante = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]); //Calculando el determinante de la matriz
    if (determinante == 0) //Si el determinante es 0, la matriz no tiene inversa
        printf("La matriz no tiene inversa\n");
    else
    {
        //Calculando la inversa de la matriz
        inv[0][0] = mat[1][1] / determinante;
        inv[0][1] = -mat[0][1] / determinante;
        inv[1][0] = -mat[1][0] / determinante;
        inv[1][1] = mat[0][0] / determinante;

        mostrarMat(inv, 2, 2); //Imprimiendo el resultado
    }
}

int main()
{
    int opcion;
    
    inicio:
    opcion = menuPrincipal();

    seleccion:
    system("cls"); //Limpia la pantalla
    switch (opcion) //Selecciona la funcion a ejecutar
    {
        case 1: sumaVec(); break;
        case 2: restaVect(); break;
        case 3: vecPorEscalar(); break;
        case 4: proEscalar(); break;
        case 5: proVectorial(); break;
        case 6: proMixto(); break;
        case 7: sumaMat(); break;
        case 8: restaMat(); break;
        case 9: matPorEscalar(); break;
        case 10: productoMat(); break;
        case 11: traza(); break;
        case 12: transpuesta(); break;
        case 13: inversa(); break;
        case 14: caratula(); break;
        default: goto salir; break; 
    }

    switch (menuRetorno())
    {
        case 1: goto seleccion; break; //Vuelve a la misma opcion del menu principal
        case 2: goto inicio; break; //Imprime de nuevo el menu principal
        default: break;
    }

    salir: //Para saltar el menu de retorno desde el menu principal
    printf("\nGracias por usar el programa!!!\n\n");
    system("pause"); //Para que el .exe no se cierre al finalizar el programa hasta que se presione una tecla

    return 0;
}
