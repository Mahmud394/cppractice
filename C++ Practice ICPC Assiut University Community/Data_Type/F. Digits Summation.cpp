//F. Digits Summation
/*
Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

Output
Print the answer of the problem.

Example
input
13 12
output
5
Note
First Example :

last digit in the first number is 3 and last digit in the second number is 2.

So the answer is: (3 + 2 = 5)
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long int M,N,X;
  cin>>N>>M;
  X=(N%10)+(M%10);
  cout<<X<<endl;
  return 0;

}
