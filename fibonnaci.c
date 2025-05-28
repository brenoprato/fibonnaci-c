#include <stdio.h>

int main (){

    int n;

    printf("quantos termos voce quer ver no fibonacci: ");
    scanf("%d", &n);

    if (n<=0){
        printf ("fibonacci sem termos");
        return 0;
    }

    int fibonacci[n];
    fibonacci[0]=1;
    fibonacci[1]=1;
 
    for (int i = 0; i<n-2;i++){
 
        fibonacci[i+2] = fibonacci[i+1] + fibonacci[i];
 
    }
 
    printf("F%d = %d \n",n,fibonacci[n-1]);
 
    for (int i = 0; i < n; i++){
        printf("%d", fibonacci[i]);
        if(i<n-1){printf(", ");}
    }
 
 return 0;
}