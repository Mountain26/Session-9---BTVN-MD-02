#include<stdio.h>

int main(){
	int i,n,k; 
	int sum = 0; 
	int option;
	int phepNhan; 
	
	
	do{
        printf("   \nMenu\n");
        printf("1: Nhap kich co va gia tri cua cac phan tu\n");
        printf("2: In ra gia tri cac phan tu cua mang theo ma tran\n");
        printf("3: In ra gia tri cac phan tu le va tinh tong\n");
        printf("4: In ra cac gia tri nam tren duong bien va tinh tich\n");
        printf("5: In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6: In ra cac phan tu nam tren duong cheo phu\n"); 
        printf("7: In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8: Thoat\n");
        printf("Moi ban nhap so hang cua mang: ");
    	scanf("%d", &n);
    	printf("Moi ban nhap so cot cua mang: ");
    	scanf("%d", &k);

    	int arr[n][k];
    	for (int i = 0; i < n; i++) {
        	for (int j = 0; j < k; j++){
            printf("arr[%d][%d] la: ", i, j);
            scanf("%d", &arr[i][j]); 
        }
    }
    	printf("Moi ban chon chuong trinh ban muon: ");
        scanf("%d", &option); 
        switch(option){
        	case 1:
        	printf("Moi ban nhap so hang cua mang:");
    		scanf("%d", &n);
    		printf("Moi ban nhap so cot cua mang:");
    		scanf("%d", &k);

    	 	arr[n][k];
    		for(int i = 0; i < n; i++) {
        	for(int j = 0; j < k; j++){
            printf("arr[%d][%d] la: ", i, j);
            scanf("%d",	&arr[i][j]); 
        }
    }
    		break;
			case 2:
			printf("Gia tri cua cac phan tu trong mang la:\n");
    		for (int i = 0; i < n; i++) {
        		for (int j = 0; j < k; j++){
            	printf("%d ", arr[i][j]);
        }
        	printf("\n");
    }
    		break;
			case 3:
			for (int i = 0; i < n; i++) {
        		for (int j = 0; j < k; j++){
        			if(arr[i][j]%2!=0){
        				printf("%d la so le\n",arr[i][j]);
        				sum = sum+ arr[i][j];
					}
			}
		}
			printf("Tong cua cac phan tu le o trong mang la: %d\n", sum);
			break;
			case 4:
			for (int i = 0; i < n; i++){
        		for (int j = 0; j < k; j++){
        			if(i == 0 || i == n-1 || j == 0 || j == k-1){
        				printf("Cac phan tu o trong duong bien la: %d\n", arr[i][j]);
        				phepNhan=phepNhan*arr[i][j];
        			}
        		}
        	}
        	printf("Tich cua cac phan tu tren duong bien la: %d\n", phepNhan);
        	break; 
        	case 5:
            printf("Cac phan tu nam tren duong cheo chinh la:\n");
            for (int i = 0; i < n; i++) {
                if (i < k) {
                    printf("%d ", arr[i][i]);
                }
            }
            printf("\n");
            break;
            case 6:
            printf("Cac phan tu nam tren duong cheo phu la:\n");
            for (int i = 0; i < n; i++) {
                if (i < k) {
                    printf("%d ", arr[i][k - i - 1]);
                    }
                }
            printf("\n");
            break;
			case 7:
			{
			int maxSum = 0;
    		int maxRow = 0;
    
    		for (int i = 0; i < n; i++) {
        	int rowSum = 0;
        	for (int j = 0; j < k; j++) {
            rowSum += arr[i][j];
        }
        	if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    		printf("Dong co tong gia tri lon nhat la dong %d voi tong la %d\n", maxRow + 1, maxSum);
    		printf("Cac phan tu cua dong nay la: ");
    		for (int j = 0; j < k; j++) {
        	printf("%d ", arr[maxRow][j]);
    }
    		printf("\n");
    		break;
			}
			case 8:
			printf("Ban da thoat khoi chuong trinh\n");
            break;
            default:
            printf("Chuong trinh khong hop le\n");
        	break;
        }
    }while(option != 8);

    return 0; 
}

			 
			 
        	
			 
			 
			 

