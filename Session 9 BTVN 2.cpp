#include<stdio.h>
int main (){
	int arr[]={1,3,4,5,7,8,9};
	int index;
	int value;
	printf("Mang da cho la:\n"); 
	for(int i=0;i<7;i++){
		printf("%d ",arr[i]); 
	} 
	printf("\n"); 
	printf("Moi ban nhap gia tri can them vao:");
	scanf("%d",&value);
	printf("Moi ban nhap vi tri can sua:");
	scanf("%d",&index);
	arr[index]=value;
	for(int i=0;i<7;i++){
		printf("%d ",arr[i]); 
	} 
	return 0; 
} 
