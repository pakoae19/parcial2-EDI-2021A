#include <stdio.h>

void GeneraArreglo(int arr[10][10], int *N);
int Compara(int arr[10][10], int N);

int main()
{
    
    int arr[10][10],N;
    
    GeneraArreglo(arr,&N);
    Compara(arr,N);
    
    return 0;
}

void GeneraArreglo(int arr[10][10], int *N)
{
    int i,j,x;
    
    while (*N>10 || *N<1)
    {
        printf("Ingresa el tamaño del arreglo (max.10): ");
        scanf("%d",&*N);
        if (*N>10)
            printf("(ERROR) El tamaño ingresado es mayor a 10\n");
        if (*N<1)
            printf("(ERROR) El tamaño ingresado es menor a 1\n");
    }
    printf("Ingresa los datos de la matriz:\n");
    for (i=0; i<*N; i++)
    {
        for (j=0; j<*N; j++)
        {
            printf("[%d][%d]: ",i,j);
            scanf("%d",&x);
            arr[i][j] = x;
        }
        printf("\n");
    }
    printf("\n");
}

int Compara(int arr[10][10], int N)
{
    int i,j,bandera;
    
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (arr[i][j]==arr[j][i])
                bandera = 1;
            else
            {
                bandera = 0;
                printf("La matriz no es simétrica\n");
                return 0;
            }
        }
    }
    printf("La matriz es simétrica\n");
    return 0;
}
