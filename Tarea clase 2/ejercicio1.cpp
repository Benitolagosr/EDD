#include<stdio.h> 
int main() { 
    
    int n1; 
    int n2; 
    
    printf("Ingrese primer sumando:\n"); 
    scanf("%d", &n1); 
    printf("Ingrese segundo sumando:\n"); 
    scanf("%d", &n2); 
    
    if(n1 > n2){
		
		printf("%d es mayor\n", n1);
		}else{
		printf("El primer numero no es el mayor\n");
		}
    
    return 0; 
} 
