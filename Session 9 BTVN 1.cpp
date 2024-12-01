#include<stdio.h>
int main(){
	int arr[100];
	int n;
	printf("Moi ban nhap so luong phan tu: ");
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		printf("Moi ban nhap gia tri cho arr[%d]",i);
		scanf("%d",&arr[i]); 
	} 
	int index;
	int valueItem; 
	printf("Moi ban nhap gia tri muon chen:");
	scanf("%d", &valueItem);
	printf("Moi ban nhap vi tri muon chen:");
	scanf("%d",&index);
	for(int i=n;i>index;i--){
		arr[i]=arr[i-1]; 
	} 
	arr[index]=valueItem;
	n++;
	printf("Mang sau khi da chen la:\n"); 
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]); 
	} 
	 return 0; 
} 
