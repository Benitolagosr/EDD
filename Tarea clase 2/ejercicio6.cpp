#include <stdio.h>

int main()
{
    int n1, i;
    int cont = 0;
    
    printf("Ingrese un numero:\n"); 
    scanf("%d", &n1);
    
    for (i=1;i<=n1; i++){
		
        if (n1%i == 0){
			
            cont++;  
        }
    }
    
    if ((cont > 2) || (n1== 1)){
        printf("El numero no es primo\n");
    }else{
        printf("El numero es primo\n");
    }
}

