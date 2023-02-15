#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int curr_sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        curr_sum+=v[i];

        if(curr_sum > max_sum)
        {
            max_sum = curr_sum;
        }


        if(curr_sum < 0)
        {
            curr_sum=0;
        }

       

    }

    cout<<max_sum<<endl;
}