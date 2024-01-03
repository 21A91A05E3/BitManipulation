//Program to  print two elemnts that are repeated for one time where remaining elements repeated for two times. -->Single Number II

#include <bits/stdc++.h>
using namespace std;
int firstsetbit(int n)
{
    for(int i=0;i<=32;i++)
    {
         if(n&(1<<i))return i;
         
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int x=0;

// First find XOR to all the elments in the array.
    for(int i=0;i<n;i++)
    {
        x^=a[i];
    }
//The xor of elements that are repeated for two times is Zero. So the final xor(x) contains xor of num1 and nmu2 that are for one time.

// Now we have to find the first setbit(k) of final xor(x), it tells where the position of two nums changes.
    int k=firstsetbit(x);

//Now for every element in the num check the kth position if it is 0 then do it xor with num1 else do it xor with num2.Finally num1 and num2 are the numbers that sre repeated for one time.
    int num1=0,num2=0;
    for(int i=0;i<n;i++)  
    {
        if((a[i]&(1<<k))==0)num1^=a[i];
        else num2^=a[i];
    }
    cout<<num1<<" "<<num2<<" ";
 
}
