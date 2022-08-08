#include <stdio.h>
 int doDai(char *ptr){
 	int count=0;
 	while(*ptr!='\0'){
 		count++;
 		*ptr++;
	 }
	 return count++;
 }
int main()
{
	char arr[80];
	printf("Moi nhap chuoi: ");
	gets(arr);
	printf("Do dai chuoi: %d ",doDai(arr));
	return 0;
}


