#include<stdio.h> 
int main(void) { 
	    
    int n1; 
    int suma = 0;
    
    printf("Ingrese un numero:\n"); 
    scanf("%d", &n1); 
    suma+=n1; 
        
    if(n1 == 0){
    printf("La suma es: %d\n",suma);
    return 0;
	}else while(n1 != 0){
	scanf("%d", &n1);
	suma+=n1; 
	}
	
	printf("La suma es: %d\n",suma);
	
} 
