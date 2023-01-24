#include <stdio.h>

int main (void)
{
  int m, n, i, j;
  scanf ("%d %d", &m, &n);	//dimensao da matriz

  float matriz[m][n];
  //leitura da matriz
  for (i=0; i<m; i++){
      for (j=0; j<n; j++){
	    scanf ("%f", &matriz[i][j]);
	  }
  }
  //impressao da matriz
  for (i=0; i<m; i++){
      for (j=0; j<n; j++){
	    printf ("%.6f ", matriz[i][j]);
	  }
      printf ("\n");
  }
  printf ("\n");
  //impressao da matriz transposta
  for(i=0; i<n ; i++){
    for(j=0; j<m; j++){
        printf( "%.6f " , matriz[j][i]);
    }
    printf("\n");
  }
  return 0;
}
