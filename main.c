#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n,cont=0;
  printf("informe o numero de entradas");
  scanf("%d",&n);
  int *v=malloc(n*sizeof(int));
  int w[n/2];
  for (int i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  int k=0,f=0;
  for (int i=0;i<n;i++){
    for(int j=i;j<n-1;j++){
      if(v[i]==v[j+1]){
        for(int m=0;m<k;m++){
          if(v[i]==w[m]){
            f++;
          
        }
        }
        if(f==0){
          w[k]=v[i];
          k++;
          cont++;
          break;
        }
      }

    }
  }
  
  printf("%d pares",cont);
  printf("(");
  for(int i=0;i<cont;i++){
    printf(" tamanho %d ",w[i]);
  }
  printf(")");

  free(v);
  return 0;
}