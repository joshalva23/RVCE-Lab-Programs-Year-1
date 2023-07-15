#include <stdio.h>
float abso(float n){
    if(n<0){
        float rem;
        rem=(long int)n-n;
        n=n+rem;
        n=-n;
        return (n+rem);
    }
    return n;
}

int main(){
	printf("%f",abso(-90000000000.));
	return 0;
}