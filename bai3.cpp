#include <stdio.h>
#include<string.h>
char ket_qua(char arr[]){
	int n=strlen(arr);
	int i,j=n-1;
	for(i=0,j;i<n/2;i++,j--){
		if(arr[i]=arr[j])
		return 0;
		else
		return 1;
		
	}
}

int main(){
	char arr[50];
	printf("Nhap vao ki tu:");
	gets(arr);
	if(ket_qua(arr)==0){
		printf("Chuoi doi xung");
	}
	if(ket_qua(arr)==1){
		printf("chuoi khong doi xung");
	}
	return 0;
}


