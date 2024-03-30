#include <iostream>
#include<cstring>

using namespace std;

int
main ()
{
//   char s[50] = "Good";
//   char s1[50] = "Morning";
  /*char *s; *//*there is a segmentation fault because our we  are trying t access the memory  that our program
     does not have permission to access */


  // cout<<"Enter a string ";
  // cin.get(s,50);

  // cin.ignore();

  // cout<<"Enter a string again ";
  // cin.get(s1,50);


    /*-------stringlength function------*/


  // cout<<"length of string1 = "<<strlen(s)<<endl;

  // cout<<"length of string2 = "<<strlen(s1)<<endl;


    /*-------catenation-------*/

  // strcat(s,s1);

  // strncat(s,s1,3);
  // cout<<s<<endl;


    /*------------stringcopy function------------*/
    
    char s1[10]="good";
    char s2[10]="";
    
    // strcpy(s2,s1);
    strncpy(s2,s1,3);
    cout<<s2;

  return 0;
}

