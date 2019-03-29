#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NF 5
#define NC 5

	void inicializa( int mat[NF][NC]);
	int main(){
		int i,j;
		int matriz[NF][NC];
		srand(time(NULL));
		inicializa(matriz);
		for(i=0;i<NF;i++){
			for(j=0;j<NC;j++){
				printf("%5d",matriz[i][j]);
			}
			printf("\n");
		}
	return 0;
}

	void inicializa( int mat[NF][NC]){
		int i,j;
		for(i=0;i<NF;i++){
			for(j=0;j<NC;j++){
				mat [i][j]=rand()%(12)+3;
			}
		}
	}
	
