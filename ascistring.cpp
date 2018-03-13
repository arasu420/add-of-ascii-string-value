#include <iostream>
#include <string>
using namespace std;
int main()
{
 char s[10];
 int sum=0,i;
 cout<<" Enter the string  ";
 cin>>s;
 for(i=0;s[i]!='\0';i++)
 {
 sum=sum+s[i];
 }
 cout<<sum;
 return 0;
}
