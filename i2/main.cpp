#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int strlen_array(char array[]){
    int i = 0;
    while(array[i] != '\0')
        i++;
    return i;
}
int strlen_pointer(char *strp){
    int i = 0;
    while(*strp != '\0'){
        i++;
        *strp++;
    }
    return i;
}
int main(){
    char arr[50];
    gets(arr);
    cout<<"Stringlength using arrays is: "<<strlen_array(arr)<<endl;
    cout<<"String length using pointers is: "<<strlen_array(&arr[0]);
    return 0;
}
