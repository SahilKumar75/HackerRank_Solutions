#include<iostream>
using namespace std;
int main()
{
    int d1,m1,y1,d2,m2,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(y1>y2)
    {
        cout<<"10000";
        return 0;
    }
    else if(y1<y2)
    {
        cout<<"0";
        return 0;
    }
    else
    {
        if(m1>m2)
        {
            int res=500*(m1-m2);
            cout<<res;
            return 0;
        }
        else if(m1<m2)
        {
            
            cout<<"0";
            return 0;
        }
        else
        {
            if(d1>d2)
            {
                int res=15*(d1-d2);
                cout<<res;
                return 0;
            }
            else
            {
                cout<<"0";
                return 0;
            }
        }
    }
    return 0;
}
