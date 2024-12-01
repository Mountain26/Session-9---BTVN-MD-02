#include<stdio.h>

int main(){
    int bienDem = 0;
    int sum2 = 0; 
    int sum1 = 0; 
    int option;
    int n; 
    int arr[100];
    int count = 0;
    int maxCount;
    int bienNhap; 

    do{
        printf("   \nMenu\n");
        printf("1: Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2: In ra gia tri cac phan tu dang quan li\n");
        printf("3: In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4: In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5: In ra gia tri cac phan tu so nguyen co trong mang va tinh tong\n");
        printf("6: Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n"); 
        printf("7: Them mot phan tu vao vi tri chi dinh\n");
        printf("8: Thoat\n");
        printf("Moi ban nhap so phan tu co trong mang: ");
        scanf("%d", &n);
            for(int i = 0; i < n; i++) {
                printf("Moi ban nhap tung phan tu vao mang [%d] = ", i); 
                scanf("%d", &arr[i]); 
                }
        printf("Moi ban chon chuong trinh ban muon: ");
        scanf("%d", &option); 
        switch(option){
            case 1:
                printf("Moi ban nhap so phan tu co trong mang: ");
                scanf("%d", &n);
                for(int i = 0; i < n; i++) {
                    printf("Moi ban nhap tung phan tu vao mang [%d] = ", i); 
                    scanf("%d", &arr[i]); 
                }
                break;

            case 2: 
                printf("Mang hien tai dang chua nhung gia tri la:\n"); 
                for(int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                sum1 = 0;
                printf("Gia tri cac phan tu chan co trong mang la:\n");
                for(int i = 0; i < n; i++) {
                    if(arr[i] % 2 == 0) {
                        sum1 += arr[i];
                        printf("%d ", arr[i]);
                    }
                }
                printf("\nTong gia tri phan tu chan o trong mang la: %d\n", sum1);
                break; 

            case 4: 
                {
                    int min = arr[0];
                    int max = arr[0]; 
                    for(int i = 0; i < n; i++) {
                        if(max < arr[i]) {
                            max = arr[i]; 
                        }
                        if(min > arr[i]) {
                            min = arr[i]; 
                        }
                    }
                    printf("Gia tri lon nhat o trong mang la: %d\n", max);
                    printf("Gia tri nho nhat o trong mang la: %d\n", min); 
                }
                break;  

            case 5: 
                sum2 = 0;
                for (int k = 0; k < n; k++) {
                    bienDem = 0;
                    for(int i = 1; i <= arr[k]; i++) {
                        if (arr[k] % i == 0) {
                            bienDem++;
                        }
                    }
                    if(bienDem == 2) {
                        sum2 += arr[k]; 
                        printf("%d la so nguyen to.\n", arr[k]);
                    }
                }
                printf("Tong gia tri cua cac so nguyen to co o trong mang la: %d\n", sum2);
                break;

            case 6:
                count = 0;
                printf("Moi ban nhap so ma ban muon kiem tra so lan xuat hien cua no o trong mang: ");
                scanf("%d", &bienNhap);
                for (int j = 0; j < n; j++) {
                    if (arr[j] == bienNhap) {
                        count++;          
                    }
                }
                printf("So %d xuat hien %d lan trong mang\n", bienNhap, count);
                break;

            case 7:
                {
                    int index;
                    int valueItem; 
                    printf("Mang hien tai dang chua nhung gia tri la:\n"); 
                    for(int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\nMoi ban nhap gia tri muon chen: ");
                    scanf("%d", &valueItem);
                    printf("Moi ban nhap vi tri muon chen: ");
                    scanf("%d", &index);
                    for(int i = n; i > index; i--) {
                        arr[i] = arr[i - 1]; 
                    } 
                    arr[index] = valueItem;
                    n++;
                    printf("Mang sau khi da them chen la:\n"); 
                    for(int i = 0; i < n; i++) {
                        printf("%d ", arr[i]); 
                    }
                    printf("\n");
                }
                break;

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

