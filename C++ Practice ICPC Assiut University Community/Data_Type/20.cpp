#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if(A<=B && B<=C)
    cout<<A<<endl<<B<<endl<<C<<endl;
    else  if(A<=C && C<=B)
    cout<<A<<endl<<C<<endl<<B<<endl;
    else  if(B<=C && C<=A)
        cout<<B<<endl<<C<<endl<<A<<endl;
    else  if(B<=A && A<=C)
        cout<<B<<endl<<A<<endl<<C<<endl;
    else  if(C<=A && A<=B)
        cout<<C<<endl<<A<<endl<<B<<endl;
    else  if(C<=B && B<=A)
        cout<<C<<endl<<B<<endl<<A<<endl;

    cout<<endl;
    cout<<A<<endl<<B<<endl<<C;
    return 0;
}



