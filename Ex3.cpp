#include <stdio.h>

int main() {
	int pass = 27086;
    int mypass = 0;
    
    printf ("Vui long nhap mat khau cua ban : ");
    scanf ("%d" , &mypass);
    do {
    if ( mypass != pass ) {
    	printf("Mat khau khong chinh xac vui long thu lai.\n ");
    	
    	printf ("Vui long nhap mat khau cua ban : ");
        scanf ("%d" , &mypass);
	}
	} while ( mypass != pass );
	
	printf("Mat khau chinh xac! \n");
	
	return 0;
}
