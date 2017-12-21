#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
char s1[100],s2[100];
char *strcat_p(char *s,char *t){
    while(*s){
        s++;
    }
    while(*t){
        *s=*t;
        t++;
        s++;
    }
    *s='\0';
}
int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    strcat_p(str1, str2);
    cout<<"First string after concatenation: "<<str1;
}
