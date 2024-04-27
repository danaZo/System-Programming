#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0


/*this function receives the matrix values from the user*/
void set_values(int (*matrix)[SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

/*this function receives i and j values that represents nodes and returns TRUE if a path exists between these two,
otherwise it returns FALSE */
int path_exists(int (*matrix)[10],int i,int j)
{
    if(i == j)
    {
        return FALSE;
    }
    if(matrix[i][j] == 10000000) //stop condition
    {
        return FALSE;
    }
    return TRUE;
}

int find_min(int i, int j)
{
    if(i != 0 && j != 0)
    {
        if(i < j)
        {
            return i;
        }
        return j;
    }
    else if (i == 0 && j != 0)
    {
        return j;
    }
    else if (i != 0 && j == 0)
    {
        return i;
    }
    else 
        return i;
    
}

/* this function calculates the shortest paths between all the nodes*/
void floyd_warshell(int (*matrix)[10])
{

    for (int l = 0; l < SIZE; l++)
        {
            for (int m = 0; m < SIZE; m++)
            {
                if(l!=m && matrix[l][m] == 0)
                {
                   matrix[l][m] = 10000000;
                }
            }
        }    
    for (int k = 0; k < SIZE; k++)
    {
        for (int l = 0; l < SIZE; l++)
        {
            for (int m = 0; m < SIZE; m++)
            {
                if(l!=m)
                {
                    matrix[l][m] = find_min(matrix[l][m], matrix[l][k]+matrix[k][m]);
                }
            }
        }    
    }
}

/* this function receives two nodes i,j and finds the shortest path between them*/
int shortest_path(int (*matrix)[10],int i,int j)
{
    if(i == j)
    {
        return -1;
    }
    if(matrix[i][j] == 10000000)
    {
        return -1;
    }
    return matrix[i][j];
}

void print (int (*matrix)[SIZE])
{
    int i;
    int j;

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// int main ()
// {
//     int mat[SIZE][SIZE];
//     int row, col;

//     printf("Input rows: ");
//     scanf  ("%d", &row);
//     printf("Input columns: ");
//     scanf  ("%d", &col);

//     printf ("Input data: \n");
//     function1(mat, row, col);

//     printf ("You entered: ");
//     print(mat, row, col);

//     return 0;
// }
