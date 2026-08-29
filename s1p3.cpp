
#include <iostream>
using namespace std;

int main()
{
    int n,i,prod;
    cout<<"Enter the number:";
    cin>>n;
        prod=1;
        for(i=1;i<=n;i++)
        {
            prod=prod*i;
            
        }
        cout<<prod<<endl;
        
    


    return 0;
}