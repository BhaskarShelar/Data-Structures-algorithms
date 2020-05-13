#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void reverseString(string &str)
{   
    int n=str.length();
    for(int i=0;i<n/2;i++)
        swap(str[i],str[n-i-1]);
}

void reverseString2Pointer(string &str)
{   
    int n=str.length();
    for(int i=0,j=n-1;i<j;i++,j--)
        swap(str[i],str[j]);
}

void reverseStringRecursive(string &str,int i=0)
{
    int n=str.length();
    if(i==n/2)
    return;
    swap(str[i],str[n-i-1]);
    reverseStringRecursive(str,i+1);
    
}
void recursiveReverseStack(string &str) 
{ 
   stack<char> st; 
   for (int i=0; i<str.length(); i++) 
       st.push(str[i]); 
  
   for (int i=0; i<str.length(); i++) { 
       str[i] = st.top(); 
       st.pop(); 
   } 
}


int main() {
    string str="bhaskarshelar";
    recursiveReverseStack(str);
    cout<<str<<endl;
	return 0;
}