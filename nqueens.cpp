
#include<bits/stdc++.h>

using namespace std;
int x[10];
bool flag=false;
bool place(int k,int i)
{
      for(int j=1;j<=k-1;j++)
      {
        if((x[j]==i) || (abs(x[j]-i)==abs(j-k)))
        {
            return false;
        }
    }
    return true;
}

void nqueens(int k,int n)
{
    for(int i=1;i<=n;i++)
    {
        if (place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                for(int m=1;m<=n;m++)
                {
                    cout<<x[m];
                    cout<<",";
                }
                flag=true;
                 cout<<"\n";
            }
            else
            {
                nqueens(k+1,n);
            }
        }
    }
}

int main(){
    int n;
    cout<<"enter number of queens\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {

        x[i]=0;
    }
    nqueens(1,n);
    if(!flag){
        cout<<"No solution";
    }

return 0;
}