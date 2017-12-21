#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
char *strcpy_array( char dest[], char src[] ){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
char *strcpy_pointer( char *dest, char *src ){
    while(*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return dest;
}
int main()
{
    char src1[50], dest1[50], dest2[50];
    gets(src1);
    cout<<"Dest1 using arrays is: "<<strcpy_array(dest1,src1)<<endl;
    cout<<"Dest2 using pointers is: "<<strcpy_pointer(dest2,src1);
    return 0;
}
