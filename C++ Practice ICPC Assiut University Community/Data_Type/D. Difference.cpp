//D. Difference
/*
Given four numbers A, B, C and D. Print the result
of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C
and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the
equation result.

Examples
input
1 2 3 4
output
Difference = -10
input
2 3 4 5
output
Difference = -14
input
4 5 2 3
output
Difference = 14
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int A,B,C,D,X;
    cin>>A>>B>>C>>D;
    X =(A*B)-(C*D);
    cout<<"Difference"<<" = "<<X<<endl;
    return 0;

}
