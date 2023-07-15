int str_len(char *s){//gives length of string
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}


void to_lower(char *s){//converts uppercase to lowercase
    int i;
    int len=str_len(s);
    for(i=0;i<len;i++){
        if((s[i]<=90)&&(s[i]>=65))
            s[i]+=32;
    }
}


void to_upper(char *s){//converts smallcase to uppercase
    int i;
    int len=str_len(s);
    for(i=0;i<len;i++){
        if((s[i]<='z')&&(s[i]>='a'))
            s[i]-=32;
    }
}


void str_cpy(char *s1,char*s2){//copies s1 to s2
    int len=str_len(s1);
    int i;
    for(i=0;i<=len;i++)
        s2[i]=s1[i];
    s2[len]="\0"; 
}


int str_comp(char *s1,char *s2){//returns zero for equal strings.
    int len1=str_len(s1);
    int len2=str_len(s2);
    int i;
        for(i=0;(i<len1)&&(i<len2);i++)
            if(s1[i]>s2[i])
                return 1;
            else if(s1[i]<s2[i])
                return -1;
            else    
                continue;
    if(len1>len2)
        return 1;
    else if(len1<len2)
        return -1;
    else
        return 0;
}


int str_compi(char *s1,char *s2){//returns non-zero for equal strings-case-insensitive
    to_lower(s1);
    to_lower(s2);
    return (str_comp(s1,s2));
}


void str_rev(char *s){//reverses a string and stores in same variable
    int i;
    char a;
    int len=str_len(s);
    for(i=0;i<(len/2);i++){
        a=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=a;
    }
}


void str_concat(char *s1, char*s2){//concats two strings /stores result in s1.
    int len1=str_len(s1);
    int len2=str_len(s2);
    int i;
    for(i=0;i<len2;i++)
        s1[len1+i]=s2[i];
    s1[len1+len2]='\0';
}