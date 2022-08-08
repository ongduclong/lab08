#include <stdio.h>

int main()
{
	int *arr[5];
	printf("Nhap so :\n");
	for(int i=0;i<5;i++){
		scanf("%d",arr+i);
	}
	printf("Mang sau khi nhap: ");
	for(int i=0;i<5;i++){
		printf("%d ",*(arr+i));
	}
	return 0;
}


