//C. Simple Calculator#include<bits/stdc++.h>

/*
Given two numbers X and Y. Print the summation
and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
Example
input :
5 10
output :
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5
Note
Be careful with spaces.
*/

using namespace std;
int main ()
{
 long long  int X,Y;
    cin>>X>>Y;

    cout<<X<<" + "<<Y<<" = "<<X+Y <<endl;
     cout<<X<<" * "<<Y<<" = "<<X*Y <<endl;
     cout<<X<<" - "<<Y<<" = "<<X-Y <<endl;
   return 0;
}


