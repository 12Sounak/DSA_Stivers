//03/62 - Stivers A2Z DSA course| DSA playlist                 DATE - 05/08/23

// Solve any patter QS - Trick Explained
/*
qs6>       *********
            *******
             *****
              ***
               *

*/
#include<bits/stdc++.h>
using namespace std;
void pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        // space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // star
        
        for(int j=2*n-(2*i+1);j>0;j--){
            cout<<"*";
        }
        // space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int t;
    cout<<"\nEnter no of Test Cases :";
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        pattern8(n);
    }
}