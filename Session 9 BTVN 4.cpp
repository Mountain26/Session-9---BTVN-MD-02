#include<stdio.h>
int main(){
	int option;
	int n; 
	int arr[100];
	do{
	printf("   \n Menu\n");
	printf("1:Nhap vao mang\n");
	printf("2:Hien thi mang\n");
	printf("3:Them phan tu\n");
	printf("4:Sua phan tu\n");
	printf("5:Xoa phan tu\n");
	printf("6:Thoat\n"); 
	printf("Moi ban nhap so phan tu co trong mang:");
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		printf("Moi ban nhap tung phan tu vao mang [%d]=",i);
		 
		scanf("%d",&arr[i]); 
		}
	printf("Moi ban chon chuong trinh ban muon:");
	scanf("%d",&option); 
	switch(option){
		case 1:
			printf("Moi ban nhap so phan tu co trong mang:");
		scanf("%d",&n);
		for(int i =0;i<n;i++){
			printf("Moi ban nhap tung phan tu vao mang [%d]=",i); 
			scanf("%d",&arr[i]); 
		} 
		break;
		case 2: 
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]); 
		} 
		break;
		case 3:
			int index;
			int valueItem; 
			printf("Mang hien tai dang chua nhung gia tri la:\n"); 
			for(int i=0;i<n;i++){
				printf("%d ",arr[i]); }
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
			break; 
		case 4: 

			int value;
			printf("Mang hien tai dang chua nhung gia tri la:\n"); 
			for(int i=0;i<n;i++){
				printf("%d ",arr[i]); 
	} 
			printf("\n"); 
			printf("Moi ban nhap gia tri can them vao:");
			scanf("%d",&value);
			printf("Moi ban nhap vi tri can sua:");
			scanf("%d",&index);
			arr[index]=value;
			for(int i=0;i<n;i++){
				printf("%d ",arr[i]); 
			}
			break; 
	  	case 5:
	  		printf("Mang hien tai dang chua nhung gia tri la:\n"); 
			for(int i=0;i<n;i++){
				printf("%d ",arr[i]); }
		  	printf("Moi ban nhap vi tri can xoa:");
			scanf("%d",&index ); 
			for(int i=index;i<n-1;i++){
				arr[i]=arr[i+1];  
	} 
			n--; 
			for(int i=0;i<n;i++){
				printf("%d ",arr[i]); 
	} 
			break;
		case 6: 
			printf("Ban da thoat chuong trinh");
			break; 
 		default :
		 	printf("Chuong trinh khong hop le"); 
	} 

} while(option!=6);
return 0; 
}
