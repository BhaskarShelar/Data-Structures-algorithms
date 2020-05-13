#include <iostream>
#include <string>
using namespace std;


void mycopy(char s1[100],char s2[100])
{   
    int i=0;
    for(i=0;s1[i]!='\0';i++)
        s2[i]=s1[i];
    s2[i]='\0';
}

void recursiveCopy(char s1[100],char s2[100],int index=0)
{
    s2[index]=s1[index];
    if(s1[index]=='\0')
    return;
    
    index++;
    recursiveCopy(s1,s2,index);
}
int main() {
    char s1[100]="geeksforgeeks";
    char s2[100]="";
    recursiveCopy(s1,s2,0);
    cout<<"s2:"<<s2<<endl;
	return 0;
}