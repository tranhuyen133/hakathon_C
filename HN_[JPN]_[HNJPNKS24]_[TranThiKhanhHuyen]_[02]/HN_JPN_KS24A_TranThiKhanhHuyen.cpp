#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int numbers[100];
	int currentIndex = 0;
	int size;	
	int position, value;
	int arr[50], n, choice;
	int sumNumbers;
	do{	
		printf("**************MENU******************\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In gia tri cac phan tu trong mang\n");
		printf("3. Dem so luong cac phan tu chan le trong mang\n");
		printf("4. Tim gia tri lon thu hai trong mang k\n");
		printf("5. Them mot phan tu vao dau mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
		printf("6. Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri)\n");
		printf("7. Sap xep mang theo thu tu giam dan (Insertion Sort) \n");
		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong\n");
		printf("9. In ra toan bo so nguyen to trong mang da duoc binh phuong\n");
		printf("10.Sap xep mang theo thu tu giam dan(Bubble Sort)\n");
		printf("11. Thoat\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1 :
				printf("Nhap vao so phan tu cua mang:");
				scanf("%d",& size);
					for(int i=0;i<size;i++){
						printf("numbers[%d]=",currentIndex);
						scanf("%d",&numbers[currentIndex]);
						currentIndex++;
					}
				break;
			case 2 :
				printf("Gia tri cac phan tu trong mang :\n");
					for(int i=0;i<currentIndex;i++){
						printf("%d\t",numbers[i]);
					}
				printf("\n");
				break;	
			case 3 : 
				printf("Dem so luong cac phan tu trong mang: ");
			
				break;
			case 4 :
		        break;
			case 5 :
				printf("Nhap vi tri muon them moi phan tu: ");
				scanf("%d",&position);			
				printf("Nhap gia tri muon them moi vao mang: ");
				scanf("%d",&value);
					if(position<0 || position > n){
						printf("Vi tri ban nhap khong hop le\n");
					}else {
					for (int i = n; i > position; i--) {
       					arr[i] = arr[i - 1];
    				}
    					arr[position]=value;
    					n++;
					}
					for(int i =0; i<n;i++){
						printf("%d\t", arr[i]);
					}
				printf("\n");
				break;	
			case 6 :
				printf("Nhap vao vi tri ban muon xoa: ");
				scanf("%d", &position);
					if(position <0 || position>n){
						printf("So ban nhap khong hop le. Vui long thu lai!");
					}
					for(int i =position; i<n-1;i++){
						arr[i]=arr[i+1];
					}
					n--;
					for(int i =0; i<n;i++){
						printf("%d\t", arr[i]);
					}
				printf("\n");
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				sumNumbers = 0;
				printf("Cac so nguyen to trong mang: ");
				for(int i=0;i<currentIndex;i++){
					int isPrime = 0;
					if(numbers[i]>=2){
						for(int j=2;j<=sqrt(numbers[i]);j++){
							if(numbers[i]%j==0){
								isPrime = 1;
								break;
							}
						}
					}else{
						isPrime=1;
					}
					if(isPrime==0){
						printf("%d\t",numbers[i]);
						sumNumbers+=numbers[i];
					}
				}
				printf("\n Cac so nguyen to la: %d\n",sumNumbers);
				break;
			case 10:
				scanf("%d", &n);
                printf("Nhap gia tri cac phan tu mang:\n"); 
                	for (int i=0;i<n;i++){
    					printf("numbers [%d]=",i);
    					scanf("%d", &numbers[i]);
  					}
 					for (int i=0;i<n-1;i++){
    					for(int j=0;j<n-i-1;j++){
      						if (numbers[j]>numbers[j-1]){
        						int temp = numbers[j];
        					numbers[j] = numbers [j-1]; 
        					numbers[j-1] = temp;
      						}
   		 				}
  					}
                	printf("Mang sau khi da sap xep giam dan:\n"); 
      				for (int i=0;i<n;i--){
        				printf("%d\t", numbers[i]);
  					}
				break;		
			case 11:
				exit(0);
			default:
				printf("Vui long chon tu 1-11");
		}
	}while(1==1);
}
				
