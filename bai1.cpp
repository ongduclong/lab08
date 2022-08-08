#include <stdio.h>

int main()
{
	int a,b;
	int *ptr_1,*ptr_2;
	ptr_1=&a;
	*ptr_1=100;
	ptr_2=&b;
	*ptr_2=200;
	printf("Gia tri cua a = %d\tGia tri cua b = %d",a,b);
	int temp = *ptr_1;
	*ptr_1=*ptr_2;
	*ptr_2=temp;
	printf("\nSau khi hoan doi:\na = %d\tb = %d",a,b);
	printf("\nDia chi cua a = %d\t Dia chi cua b = %d",&a,&b);
	return 0;
}


