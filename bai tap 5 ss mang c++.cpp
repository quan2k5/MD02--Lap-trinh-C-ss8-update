#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang");
	scanf("%d",&n);
	int mang[n];
	for(int i=0;i<n;i++){
		printf("mang[%d]",i);
		scanf("%d",&mang[i]);
		}
		int updateValue;
		printf("nhap gia tri can cap nhat");
		scanf("%d",&updateValue);
		int updateIndex;
		printf("nhap vi tri can cap nhat");
		scanf("%d",&updateIndex);
	int newnumber[n];
	for (int i=0;i<updateIndex;i++){
		newnumber[i]=mang[i];
		}
		newnumber[updateIndex]=updateValue;
	for (int i=updateIndex+1;i<n;i++){
		newnumber[i]=mang[i];
		}
	for(int i=0;i<n;i++){
		printf("%d ",newnumber[i]);
		}
}	
		
		
		
		
		
		
		
		
	
	
