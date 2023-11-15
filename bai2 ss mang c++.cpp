#include <stdio.h>
int main (){
	int row,cow;
	printf ("nhap so dong so cot cua mang 2 chieu");
	scanf ("%d %d",&row,&cow);
	int number[row][cow];
	int sum=0;
	for(int i=0;i<row;i++){
     for (int j=0;j<cow;j++){
     	printf("number[%d][%d]",row,cow);
     	scanf("%d",&number[i][j]);
     	}
     	}
     for(int i=0;i<row;i++){
     for (int j=0;j<cow;j++){	
     if(number[i][j]%2==0){
     	printf ("%d",number[i][j]);
     	sum=sum+number[i][j];
     	}
	}
	}
	printf("\ntong cac so chan la %d",sum);
}
