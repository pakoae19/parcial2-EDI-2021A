#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CapturaArreglo(int arr[10][10], int *M, int *N);
int Buscar(int arr[10][10], int M, int N, int *posRen, int *posCol);

int main()
{
// M=Renglones
// N=Columnas
    
    srand(time(0));
    int arr[10][10],M,N,x,posRen,posCol;
    
    CapturaArreglo(arr,&M,&N);
    x=Buscar(arr,M,N,&posRen,&posCol);
    printf("El número mayor es: %d y se encuentra en la posición [%d][%d]\n",x,posRen,posCol);
    
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
            arr[i][j] = (rand () % 99);
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int Buscar(int arr[10][10], int M, int N, int *posRen, int *posCol)
{
    int i,j,x=0;
    
    for (i=0; i<M; i++)
    {
       
        for (j=0; j<N; j++)
        {
            if (x<arr[i][j])
            {
                x = arr[i][j];
                *posRen = i;
                *posCol = j;
            }
        }
    }
    return x;
}
