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
    int erraseIndex;
	printf("nhap vao vi tri can xoa");
     scanf("%d",&erraseIndex);
	if(erraseIndex<n){	
    int newnumber[n-1];
	for (int i=0;i<erraseIndex;i++){
		newnumber[i]=mang[i];
		}		
	for (int i= erraseIndex;i<n-1;i++){
		newnumber[i]=mang[i+1];
		}
	for(int i=0;i<n-1;i++){
		printf("%d ",newnumber[i]);
		}
    }else{
    	for(int i=0;i<n;i++){
    		printf("%d",mang[i]);
    	}   	
        }
}		
		
		
		
		
