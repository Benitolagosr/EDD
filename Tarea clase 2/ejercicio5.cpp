#include<stdio.h> 
int main() { 
    
    int n1, i, resto;
    
    printf("Ingrese un numero:\n"); 
    scanf("%d", &n1); 
  
    printf("Sus divisores son:\n"); 
    for (i = 1; i<=n1 ; i++){
		resto = n1%i;
		if(resto == 0){
			printf("%d\n", i);
		}	
		}
   
}


