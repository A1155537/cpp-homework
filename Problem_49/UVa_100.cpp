#include<stdio.h>
int main(){
    int i,j;
    while(scanf("%d %d",&i,&j)!=EOF){
        int k=0;
        printf("%d %d",i,j);
        int a,b;
        if(i>j){
            a=i;
            b=j;
        }
        else{
            a=j;
            b=i;
        }
        while(a!=1 && a>=b){
            if(a%2==1){
                a=3*a+1;
            }
            else{
                a=a/2;
            }
            k=k+1;
        }
        printf("%d",k);
    }
}