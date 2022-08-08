#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool ngTo(int n){
	if(n<2){
		return false;
	}
	for(int x =2;x<n/2;x++){
		if(n%x==0){
			return false;
		}
	}
	return true;
}
int main()
{
	int *ptr,i,n;
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("Khong du bo nho");
		exit(0);
	}
	printf("\nNhap so:\n");
	for(i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}
	printf("\nMang sau khi nhap: ");
	for(i=0;i<n;i++){
		printf("%d\t",ptr[i]);
	}


	return 0;
}


