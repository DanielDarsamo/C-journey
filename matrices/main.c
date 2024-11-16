#include <stdio.h>
#include <stdlib.h>

int main()
{
   int matrix_a[2][2];
   int matrix_b[2][2];
   int matrix_c[2][2];
   int i,j;
   printf("welcome to Matrix multiplication\n");
   printf("Here we will fill up a 2x2 matrix a and b and the results will be shown on matrix c\n");
   for(i=0;i<2;i++){
        
    for(j=0;j<2;j++){
            printf("enter element matrix a: [%d][%d]\n : ",i,j);
            scanf("%d",&matrix_a[i][j]);
            
            printf("enter element matrix b: [%d][%d]\n : ",i,j);
            scanf("%d",&matrix_b[i][j]);
        
        
    }
  
   }
     printf("\n");
    printf("MATRIX A\n");
      for(i=0;i<2;i++){
    for(j=0;j<2;j++){
            
        printf("elements of the matrix A:[%d][%d]:%d\n",i,j,matrix_a[i][j]);
        
        
    }

   }
    printf("\n");
  printf("MATRIX B\n");
    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
            
        printf("elements of the matrix b:[%d][%d]:%d\n",i,j,matrix_b[i][j]);
        
        
    }
    
   }
      printf("\n");
    printf("MATRIX C\n");
    matrix_c[0][0]= matrix_a[0][0]*matrix_b[0][0]+ matrix_a[0][1]*matrix_b[1][0];
    matrix_c[0][1]= matrix_a[0][1]*matrix_b[0][1]+ matrix_a[0][1]*matrix_b[1][1];
    matrix_c[1][0]= matrix_a[1][0]*matrix_b[0][0]+ matrix_a[1][1]*matrix_b[1][0];
    matrix_c[1][1]= matrix_a[1][0]*matrix_b[0][1]+ matrix_a[1][1]*matrix_b[1][1];
    for( i=0;i<2;i++){
        for(j=0;j<2;j++){
                
    printf("Element of Matrix C:[%d][%d]:%d \n",i,j,matrix_c[i][j]);
        }
    }
        
        
    
   
   

   
    return 0;
}
