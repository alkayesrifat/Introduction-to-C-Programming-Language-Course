#include <stdio.h>

int main() {
    int i;
    float f;
    char c;

    scanf("%d %f %c",&i,&f,&c);
   

    printf("%d\t",i);

    printf("%.1f\t",f);
   
    printf("%c\t",c);
    
    return 0;
}