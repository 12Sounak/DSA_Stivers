//03/62 - Stivers A2Z DSA course| DSA playlist                 DATE - 05/08/23

// Solve any patter QS - Trick Explained
/*
qs1> 1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;
void patter3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int t;
    cout<<"\nEnter no of test case :";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        patter3(n);
    }
}