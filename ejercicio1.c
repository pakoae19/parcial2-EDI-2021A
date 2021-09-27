#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CapturaArreglo(int arr[10][10], int *M, int *N);
void PromedioColumna(int arr[10][10], int M, int N);

int main()
{
// M=Renglones
// N=Columnas
    
    srand(time(0));
    int arr[10][10],M,N;
    
    CapturaArreglo(arr,&M,&N);
    PromedioColumna(arr,M,N);
    
    return 0;
}

void CapturaArreglo(int arr[10][10], int *M, int *N)
{
    int i,j;
    
    while (*M>10 || *M<1)
    {
        printf("Ingresa el número de renglones (max.10): ");
        scanf("%d",&*M);
        if (*M>10)
            printf("(ERROR) El tamaño ingresado es mayor a 10\n");
        if (*M<1)
            printf("(ERROR) El tamaño ingresado es menor a 1\n");
    }
    while (*N>10 || *N<1)
    {
        printf("Ingresa el número de columnas (max.10): ");
        scanf("%d",&*N);
        if (*N>10)
            printf("(ERROR) El tamaño ingresado es mayor a 10\n");
        if (*N<1)
            printf("(ERROR) El tamaño ingresado es menor a 1\n");
    }
    printf("\n\tMatriz(%dx%d):\n",*M,*N);
    for (i=0; i<*M; i++)
    {
        printf("\t ");
        for (j=0; j<*N; j++)
        {
            arr[i][j] = (rand () % 10);
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void PromedioColumna(int arr[10][10], int M, int N)
{
    int i,j;
    float promedio;
    
    for (i=0; i<N; i++)
    {
        promedio=0;
        for (j=0; j<M; j++)
        {
            promedio += arr[j][i];
        }
        printf("El promedio de la columna No. %d es: %.2f\n",i+1,promedio/M);
    }
}
