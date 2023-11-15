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
		int addValue;
		printf("nhap gia tri can chen vao");
		scanf("%d",&addValue);
		int addIndex;
		printf("nhap vi tri can chen vao");
		scanf("%d",&addIndex);
	int newnumber[n+1];
	for (int i=0;i<addIndex;i++){
		newnumber[i]=mang[i];
		}
		newnumber[addIndex]=addValue;
	for (int i=addIndex+1;i<n+1;i++){
		newnumber[i]=mang[i-1];
		}
	for(int i=0;i<n+1;i++){
		printf("%d ",newnumber[i]);
		}
}	
		
