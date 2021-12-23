#include<stdio.h>

int main(){
    //h1:m1 - h2:m2
    int h1,h2,m1,m2;
    
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    int mdiff=(m2+120-m1)%60;
    printf("%d %d\n",m2>m1?(h2-h1):(h2-h1-1),mdiff);
    return 0;
}