#include<stdio.h>
/*
int main(){
    char *s="Hindi";
    char *a[]={"Hindi","English"};
    char b[10]="Spanish";
    char *(*q)[10]=&a;
    printf("%s %s ",(*q)[0],(*q)[1]);
    char *p;
    p=s;
    printf("%s",p);
    p="String";
    printf("%s",s);
    printf("%s",p);
    return 0;
}
*//*
union josh{
    char *(*s)[1];
    //char p[21];
    int a;
}s1;
int main(){
    strcpy((char *)s1.s,"Hindi");
    printf("%s",s1.s[0]);
    return 0;

}
*//*
#include<stdint.h>
#include<assert.h>
#include <stdlib.h> 
int ack_recursive(int m, int n) { 
if (m == 0) { 
return n + 1; 
} 
if (n == 0) { 
return ack_recursive(m - 1, 1); 
} 
return ack_recursive(m - 1, ack_recursive(m, n - 1)); 
} 
int ack_nonrecursive(int m, int n, int *status) { 
int value[n]; 
size_t size = 0; 
for (;;) { 
if (m == 0) { 
n++; 
if (size-- == 0) { 
*status = EXIT_SUCCESS; 
break; 
} 
m = value[size]; 
continue; 
} 
if (n == 0) { 
    m--;
    n = 1; 
continue; 
} 
size_t index = size++; 
value[index] = m - 1; 
n--; 
} 
return n; 
} 
int main(void) { 
    int m,n;
for ( m = 0; m < 2; m++) { 
for (n = 0; n < 2; n++) { 
int status; 
assert(ack_recursive(m, n) == ack_nonrecursive(m, n, &status) && status == EXIT_SUCCESS); 
} 
} 
} 

*//*
int compute()
{
    static int p=16;
    return p--;
}
int main(){
    for (compute();compute();compute())
        printf("%d",compute());

}*/
/*
int a,b,c=0;
void process(void);
int main(){
    static int a=1;
    process();
    a+=1;
    process();
    printf("%d %d",a,b);
}
void process(void){
    static int a=2;
    int b=1;
    a+=++b;
    printf("\n%d %d",a,b);
}
*/