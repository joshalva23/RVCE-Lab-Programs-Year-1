#include<stdio.h>
int acker(int,int);
int main(){
    int m,n;
    printf("Enter the values\n:");
    scanf("%d%d",&m,&n);
    int temp;
    temp=acker(m,n);
    printf(" %d",temp);
    return 0;
}
int acker(int m,int n){
    if(m>=0 && n>=0){
        if(m==0){
            //printf("%d %d",m,n);
            return n+1 ;
        }
        else if(m>0 && n==0){
            //printf("%d %d",m,n);
            return acker(m-1,1);
        }
        else if(m>0 && n>0){
            //printf("%d %d",m,n);
            return acker(m-1,acker(m,n-1));
        }
    }   
    else{   
            //printf("%d %d",m,n);
            return 0;
        }
}