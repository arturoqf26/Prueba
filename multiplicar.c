#include <stdio.h>
#include <stdlib.h>
int multiplicacion(int a, int b) {
    if(b==0){
        return 0;
    }
    else if (b==1){
        return a;
    }
    else {
        return a + multiplicacion(a, b-1);
    }
};

int main(){
    int f;
    int s;
    printf("Ingrese el primer numero\n");
    scanf("%d", &f);
    printf("Ingrese el siguiente numero\n");
    scanf("%d", &s);
    int r = multiplicacion(f,s);
    printf("el resultado es %d\n", r);

    return 0;
}