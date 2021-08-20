#include<iostream>
int main()
{
    int count=1,n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
     {
         for(j=1;j<=i;j++)
         {
             if(count%2==1)
              
                  cout<<"*";
            else
                cout<<"#";
              
              
              count++;
              }
         }
     }
}