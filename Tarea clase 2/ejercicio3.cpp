#include<stdio.h> 
int main() { 
    
    int n1; 
    int n2;
    int n3;
    int mayor = 0;
    
    printf("Ingrese 3 numeros numero:\n"); 
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3); 
    
              if(n1>n2 && n1>n3){
		mayor = n1;
		
		}else if(n2>n1 && n2>n3){
	    mayor = n2;
        
        }else if(n3>n2 && n3>n1){
     	 mayor = n3;
		}
	    
	printf("El mayor es: %d\n",mayor);
}


		
	
	
 

