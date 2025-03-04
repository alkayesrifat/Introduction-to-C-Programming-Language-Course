#include <stdio.h>

int main() {
    int i;
    float f;
    char c;

    scanf("%d %f %c",&i,&f,&c);
   

    printf("%d\n",i);

    printf("%.1f\n",f);
    printf("%c",c);
    
    return 0;
}