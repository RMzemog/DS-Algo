#include <stdio.h> 
#include <string.h>
#include<string>
using namespace std; 
  
int main() 
{ 
    string str = "Geeks-for-Geeks"; 
  
    // Returns first token  
    string *token = strtok(str, "-"); 
  
    // Keep printing tokens while one of the 
    // delimiters present in str[]. 
    while (token != NULL) 
    { 
        printf("%s\n", token); 
        token = strtok(NULL, "-"); 
    } 
  
    return 0; 
}