#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CapturaArreglo(int arr[10][10], int *M, int *N);
void Transpuesta(int arr[10][10],int arrTrans[10][10], int M, int N);

int main()
{
// M=Renglones
// N=Columnas
    
    srand(time(0));
    int arr[10][10],arrTrans[10][10],M,N;
    
    CapturaArreglo(arr,&M,&N);
    Transpuesta(arr,arrTrans,M,N);
    
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
}

void Transpuesta(int arr[10][10], int arrTrans[10][10], int M, int N)
{
    int i,j;
    
    for (i=0; i<M; i++)
    {
       
        for (j=0; j<N; j++)
        {
            arrTrans[j][i] = arr [i][j];
        }
    }
    printf("\n\tMatrizTranspuesta(%dx%d):\n",N,M);
    for (i=0; i<N; i++)
    {
        printf("\t ");
        for (j=0; j<M; j++)
        {
            arr[i][j] = (rand () % 10);
            printf("%d ",arrTrans[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
