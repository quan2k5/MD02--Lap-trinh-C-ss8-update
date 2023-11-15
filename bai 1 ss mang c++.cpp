#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu vao mang ");
	scanf("%d",&n);
	int number[n];
	for(int i=0;i<n;i++){
		printf("number[%d]",i);
		scanf("%d",&number[i]);
		}
	int max = number[0];
	int min = number[0];
    for(int i=1;i<n;i++){
    	if(number[i]>max){
    		max=number[i];
    	}
    	if(number[i]<min){
    		min=number[i];
    	}
    	}
    	printf ("gia tri lon nhat la %d\n",max);
    	printf("gia tri nho nhat la %d",min);
}
