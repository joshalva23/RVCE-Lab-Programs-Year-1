#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int binary_to_decimal(int binum, int decnum, int bit)
{
    int bitwt;
    if(binum>0){
        bitwt=binum%10;
        decnum=decnum+bitwt*pow(2,bit);
        binum=binum/10;
        bit++;
        decnum=binary_to_decimal(binum,decnum,bit);
    }
    return decnum;
}
int decimal_to_binary(int decnum, int binum, int bit)
{
    int bitwt;
    if(decnum>0){
        bitwt=decnum%2;
        binum=binum+bitwt*pow(10,bit);
        decnum=decnum/2;
        bit++;
        return decimal_to_binary(decnum,binum,bit);
    }
    return binum;
}
/*
int main()
{
    int decimalnum=0,binarynum,bitweight=0;
    printf("Enter the binary number:\n");
    scanf("%d",&binarynum);
    
    decimalnum=binary_to_decimal(binarynum,decimalnum,bitweight);
    printf("%d in decimal= %d\n",binarynum,decimalnum);
    return 0;
}*/
int main()
{
    int decimalnum,binarynum=0,bitweight=0;
    printf("Enter the decimal number:\n");
    scanf("%d",&decimalnum);
    
    binarynum=decimal_to_binary(decimalnum,binarynum,bitweight);
    printf("%d in binary= %d\n",decimalnum,binarynum);
    return 0;
}