https://www.geeksforgeeks.org/problems/swap-bits5726/1

Given a number X and two positions (from right side) in binary representation of X, write a program that swaps N bits at given two positions and returns the result.
 
Example 1:

Input:
X = 47
P1 = 1
P2 = 5
N = 3
   
Output: 227
   
Explanation:
The 3 bits starting from the second bit (from the right side) are swapped with 3 bits starting from 6th position (from the right side).

Program:

int swapBits(int x, int p1, int p2, int n)
{
   int s1=((x>>p1)&((1<<n)-1));
   int s2=((x>>p2)&((1<<n)-1));
   int xr=s1^s2;
   xr=((xr<<p1)|(xr<<p2));
   return x^xr;
}
