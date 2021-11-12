#include<stdio.h>

int main(){
    int T;
    
    scanf("%d",&T);
    
    switch (T)
    {
    case 1:
        printf("I love Luogu!");
        break;
    case 2:
        printf("%d %d",2+4, 10-2-4);
        break;
    default:
        break;
    }

    return 0;
}