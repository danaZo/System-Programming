#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main ()
{
    char choice = 'A';
    int mat[SIZE][SIZE];
    int first,second;
    while(choice != 'D')
    {
        // printf("welcome to my_mat menu!\n");
        // printf("to input data into matrix press A\n");
        // printf("to check if there is a path between two nodes press B\n");
        // printf("to search for the shortest path press C\n");
        // printf("to exit the program press D\n");
        // printf("your choice: ");
        scanf("%c",&choice);

        switch (choice)
        {
        case 'A':
            set_values(mat);
            floyd_warshell(mat);
            break;
        
        case 'B':
            scanf("%d%d",&first, &second);
            if(path_exists(mat,first,second))
            {
                printf("True\n");
            }
            else
            {
                printf("False\n");
            }
            break;


        case 'C':
            scanf("%d%d",&first, &second);
            printf("%d\n", shortest_path(mat,first,second));
            break;

        case 'D':
            return 0;

        default:

            break;
        }
    }

    return 0;
}