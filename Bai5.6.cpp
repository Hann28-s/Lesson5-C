#include <stdio.h>
    int main() {
    	
    float a, b, result ;
    int math ;

    printf("Nhap so thu 1: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);

do {
        printf("\n==== CALCULATOR ====\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Hay chon tu 1 den 5: ");
        scanf("%d", &math);
switch(math) {
    case 1:
		result = a + b ;
		printf("Ket qua cua phep tinh %.2f+%.2f la: %.2f",a,b,result) ;
		break ;
	case 2:
		result = a - b;
		printf("Ket qua cua phep tinh %.2f-%.2f la: %.2f\n",a,b,result);
        break ;	 
    case 3:
		result = a * b;
		printf("Ket qua cua phep tinh %.2f*%.2f la: %.2f",a,b,result) ;
	    break ;
	case 4:
        if (b != 0) {
        result = a / b;
        printf("Ket qua: %.2f / %.2f = %.2f\n", a, b, result);
        } else {
        printf("Loi! Ko the chia cho 0.\n");
    }
    case 5:
	    printf("Dong chuong trinh\n") ;
	    break ;
	default:
        printf("Lua chon ko hop le. Vui long chon lai.\n");	
	  }
    } while (math != 5); 

    return 0;
} 
     

  
