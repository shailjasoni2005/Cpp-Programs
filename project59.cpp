#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    /*---------------to integer function--------------*/
    
    // char s1[10]="235";             //these are strings
    // char s2[10]="54.78";
    
    
    // long int x=strtol(s1,NULL,10);                   //which will convert into number here.
    // float y=strtof(s2,NULL);
    
    
    // if we add 1 to x then:
    
    
    // cout<<x+1<<endl<<y-5<<endl;
    
    
    /*--------------function string token-------------*/
    
    char s1[20]="x=10;y=20;z=30";
    
    char *token=strtok(s1,"=?");
    
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"?=");
    }

    return 0;
}
