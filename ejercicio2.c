#include <stdio.h>

void GeneraArreglo(int arr[10][10], int *N);

int main()
{
    
    int arr[10][10],N;
    
    GeneraArreglo(arr,&N);
    
    return 0;
}

void GeneraArreglo(int arr[10][10], int *N)
{
    int i,j;
    
    while (*N>10 || *N<1)
    {
        printf("Ingresa el tamaño del arreglo (max.10): ");
        scanf("%d",&*N);
        if (*N>10)
            printf("(ERROR) El tamaño ingresado es mayor a 10\n");
        if (*N<1)
            printf("(ERROR) El tamaño ingresado es menor a 1\n");
    }
    printf("\n\tMatriz(%dx%d):\n",*N,*N);
    for (i=0; i<*N; i++)
    {
        printf("\t ");
        for (j=0; j<*N; j++)
        {
            arr[i][j] = 0;
            if (i==j)
                arr[i][j] = 1;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
