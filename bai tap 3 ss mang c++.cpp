#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang");
	scanf("%d",&n);
	int mang[n];
	for(int i=0;i<n;i++){
		printf("mang[%d]=",i);
		scanf ("%d",&mang[i]);
		}
		int sum=0;
		int findnumber;
		printf("nhap findnumber la ");
		scanf("%d",&findnumber);
	printf("chi so mang co gia tri bang findnumber la  ");
	for(int i=0;i<n;i++){
		if(findnumber==mang[i]){
		printf("%d ",i);
		sum=sum+mang[i];
		}	
    }
    printf("tong cac phan tu co gia tri bang gia tri findnumber la %d",sum);
}
