#include<stdio.h> 
int main() { 
    
    int n1; 
    
    printf("Ingrese un numero:\n"); 
    scanf("%d", &n1); 
    
    if(n1%2 == 0){
		
		printf("%d es par\n", n1);
		}else{
		printf("El numero es impar\n");
		}
    
    return 0; 
} 
