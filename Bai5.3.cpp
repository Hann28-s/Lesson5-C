#include <stdio.h> 
  int main() {
  	
  	int num;
	int sum=0, i=1; 
	
	do {
	printf("Hay nhap 1 so nguyen duong: ") ;
	scanf("%d", &num) ;
	
	if(num<=0) {
		printf("So da nhap khong hop le\n") ;
	}
	}while (num<=0) ;
	do {
	sum += i;
	i++;
    }while (i<=num) ;
     printf ("Tong cac so tu 1 den %d la %d\n",num,sum) ;
     
     return 0; 
	 
	} 
	
	

