// write the name of the person you like
// if the name is yours print(Hurra this is me)
// This is my bff. 

// Good Luck
#include <stdio.h>
#include<string.h>


int main()
{
    char name[50];
    printf("enter a name :");
    scanf("%s",&name);
    if(strcmp(name,"ali")==0){
        printf("it is me");
    }
    else{
        printf("%s is my best friend :",name);
    }
}
