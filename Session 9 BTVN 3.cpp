#include<stdio.h>
int main(){
	int arr[100];
	int n;
	printf("Moi ban nhap so luong phan tu: ");
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		printf("Moi ban nhap gia tri cho arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	int index;
	printf("moi ban nhap vi tri can xoa:");
	scanf("%d",&index ); 
	for(int i=index;i<n-1;i++){
		arr[i]=arr[i+1];  
	} 
	n--; 
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]); 
	} 
}
