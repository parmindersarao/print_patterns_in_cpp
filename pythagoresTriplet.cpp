#include<iostream>
#include<math.h>
using namespace std;
int check(int x, int y, int z)
{
    int Max = max(x,max(y,z));
    int sum = x*x + y*y + z*z - Max*Max;
    cout<<"sum = "<<sum<<endl;
    cout<<"MAx = "<<Max<<endl;
    if(sum==(Max*Max))
    {
        return 1;
    }
    else{
    return 0;
    }
}
main()
{
    int x,y,z;
    cout<<"Enter x,y,z = ";
    cin>>x>>y>>z;
    cout<<check;
    if(check(x,y,z))
    {
        cout<<"It is pythagorian triplet ";
    }
    else
    {
        cout<<"It is not pythagorain triplet ";
    }
    
}