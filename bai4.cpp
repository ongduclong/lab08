#include <stdio.h>

int main()
{
	int arrA[5],arrB[5],arrC[5];
	printf("Nhap cac gia tri cua mang A:\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arrA[i]);
	}
	printf("\nNhap cac gia tri cua mang B:\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arrB[i]);
	}
	int *ptr=arrC;
	for(int i=0;i<5;i++){
		*(ptr+i)=arrA[i]+arrB[i];
	}
	printf("\nCac phan tu mang C la: ");
	for(int i=0;i<5;i++){
		printf("%d ",arrC[i]);
	}
	
	
	return 0;
}


