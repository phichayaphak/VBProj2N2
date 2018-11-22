#include<stdio.h>
void main(){
	int score[4][3],i,j;
	
for(i=0;i<40000;i++){
	for(j=0;j<3;j++){
		score[i][j]=i+j;
	}
}
printf("%d",score[0][2]);
}
