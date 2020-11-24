#include<stdio.h> 
#include<conio.h>
#include<iostream>

int comparar(int a, int b);
void paroimpar(int a);
int n1;
int n2;
int n3;
int auxiliar;
int suma_datos(int datos[60]);
void divisores(int *n8);
void numero_primo(int *n9);
void oracion_mayus(char oracion[60]);

int main(){ 
    
   printf(" - FUNCIONES - \n");
   
   //1
   printf("1. Comparar 2 numeros\n");   
   printf("Ingrese primer numero:\n"); 
    scanf("%d", &n1); 
   printf("Ingrese segundo numero:\n"); 
    scanf("%d", &n2); 
    printf("El numero mayor es: %d\n", comparar(n1, n2));
   
   //2
   printf("2. Comprobar si es par\n");   
   printf("Ingrese un numero:\n"); 
    scanf("%d", &n1);
    paroimpar(n1);
    
    //3
    printf("3. Mayor de 3 numeros\n");
    printf("Ingrese el primer numero:\n"); 
     scanf("%d", &n1);
    printf("Ingrese el segundo numero:\n"); 
     scanf("%d", &n2);
    printf("Ingrese el tercer numero:\n"); 
     scanf("%d", &n3);
     auxiliar = comparar(n1,n2);
    printf("El numero mayor es: %d\n", comparar(auxiliar, n3)); 
    
    //4
    printf("Sume numeros, finalice con un 0\n");
    int n7 = 0;
    int datos[60];
    int i = 0;
    
    do{printf("Ingrese un numero\n");
        scanf("%d", &n7);
        datos[i] = n7;
        i++;
    } while (n7 != 0);

    printf("La suma de slos numeros es: %d\n", suma_datos(datos));
    
    //5
    int n8;
    printf("Ingrese un numero para mostrar sus divisores\n");
    scanf("%d", &n8);
    divisores(&n8);

    //6
    int n9;
    printf("Ingrese un numero para determinar si es primo\n");
    scanf("%d", &n9);
    numero_primo(&n9);

    //7
    fflush(stdin);
    char oracion[60];
    printf("Ingrese una oracion para pasarla a mayusculas\n");
    scanf("%[^\n]", oracion);

    oracion_mayus(oracion);

  return 0;   
} 
     
   //1 Funcion comparar
   
   int comparar(int a, int b){
	int comparar;
	if(a > b){
	 comparar = a;
	}else{
	 comparar = b;
	}
	return comparar;
	}
		
	//2 Funcion determinar paridad	
	
	void paroimpar(int a){
		if(a%2==0){
		printf("Es par:\n"); 
    }else{
		printf("Es impar:\n");
		 }		
}

    //3 Usé comparar
                 
    //4 Sumar arreglo
		
	int suma_datos(int datos[60]){
    int suma = 0;
    int e = 0;
    
    do{suma += datos[e];
       e++;
    } while (datos[e] != 0);
    return suma;
    }

    //5 Divisores
    
    void divisores(int *n8){
		
    for(int i=1; i<=*n8;i++){
        if (*n8%i == 0){
            printf("%d\n", i);
        }
    }
}
    //6 Determinar si es primo
    void numero_primo(int *n9)
{
    int cont = 0;
    for (int i = 1; i <= *n9; i++){
        if (*n9 % i == 0){
			cont++;
			}
    }if((cont > 2)||(*n9== 1)){
        printf("El numero no es primo\n");
        }else{
        printf("El numero es primo\n");
    }
}
   //7 Transformar a mayusculas
    void oracion_mayus(char oracion[60])
{
    for(int i=0;i<60;i++){
        if((oracion[i]>=97)&&(oracion[i]<=122)){
            oracion[i] = oracion[i] - 32;
        }
    }
    printf("%s\n", oracion);
}



    
    
    
    
    
    
