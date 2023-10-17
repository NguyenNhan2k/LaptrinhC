#include<stdio.h>
#include<string.h>

int main(){
	int n = 4 ;
	for(int i = 1; i <=n; i++){ 			
			for( int j = 1 ; j <=n; j++) {
				// i = 2  j = 4  
				
				if ( i == 1 || i == n || j == 1 || j == n) {
					printf("* ");
				}else {
					if ( i > 1 && i < n && j == n - 1) {
						printf("* ");
					} else {
						printf("  ");
					}
				
				}			
			}
		// * * * *
		// *     *
		printf("\n");
		
	}

	//  * * * * 
	//  *   * *   i =2  j =  3
	//  * *   * 
	//  * *   *   i= 3 j= 2 
	//  * * * * 
	return 0;
}

