#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    if( t>=1 && t<=pow(10,3))
    {
        while(t--)
        {
            int N,K,D;
            long long int temp;
            vector<long long int> A;
            cin>>N;
            cin>>K;
            cin>>D;
            A.clear();
            if(N>=1 && K>=1 && D>=1 && N<=pow(10,2) && K<=pow(10,9) && D<=pow(10,9) )
            {
                for(int i=0;i<N;i++)
                {
                    cin>>temp;
                    if(temp>=1 && temp<=pow(10,7))
                    A.push_back(temp);
                }

                int sum=0;
                
                for(int i=0;i<A.size();i++)
                {
                    sum=sum+A[i];
                }

                if(sum<K)
                {
                    cout<<0<<endl;
                }
                else
                {
                    int numOfContest = sum/K;
                    if(numOfContest > D)
                    {
                        cout<<D<<endl;
                    }
                    else
                    {
                        cout<<numOfContest<<endl;
                    }
                    
                }
                
            }
        }
    }
    
	return 0;
}
