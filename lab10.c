#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, j, k, n;
    float A[15][15], c, x[10], sum=0.0;

    printf("Vvedite razmernost' matrici \n");
    scanf("%d", &n);
    printf("\n Vvedite elementy matrici\n");
    for(i=1; i<=n; i++)
{
  for(j=1; j<=(n+1); j++)
  {
    printf("A[%d][%d] : ", i,j); 
    scant("%f",&A[i][j]);
  }
}
for(j=1; j<=n; j++)
   {
       for(i=1; i<=n; i++)
       {
        if(i>j)
        {
           c=A[i][j]/A[j][j];
            for(k=1; k<=n+1; k++)
            {
              A[i][k]=A[i][k]-c*A[j][k];
            }
        }
       }
   }
for(i=n-1; i>=1; i--)
  {
  sum=0;
  for(j=i+1; j<=n; j++)
       {
         sum=sum+A[i][j]*x[j];
       }
    x[i]=(A[i][n+1]-sum)/A[i][i];
  }
printf("\nRezultat: \n");
   for(i=1; i<=n; i++)
  {
   printf("\nx%d=%f\t",i,x[i]); 
  }
return(0);
}
