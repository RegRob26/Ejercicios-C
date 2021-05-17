#include <stdio.h>

int prueba(int);

int main(){
int x =75;
   printf("%d", prueba(x));
}


int prueba(int x){
    if (x >100)
    {
        return (x-10);
    }
    else{
        return(prueba(x+11));
    }
    
}

