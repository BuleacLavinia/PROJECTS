#include <iostream>

using namespace std;

long long z,sum,n,i,j,a[1001][1001],b[1001][1001];
bool ok1=1,ok2=1,q;

int main()
{
    cin>>q;
    if(q==1)
    {
        cin>>n;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                cin>>a[i][j];
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                cin>>b[i][j];
        cout<<"suma:"<<endl;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                cout<<a[i][j]+b[i][j]<<" ";
            cout<<endl;
        }
        cout<<"produs:"<<endl;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                sum=0;
                for(z=1; z<=n; z++)
                    sum=sum+a[i][z]*b[z][j];
                cout<<sum<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cin>>n;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                cin>>a[i][j];
        cout<<"urma matricei:"<<endl;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                if(i==j) sum=sum+a[i][j];
        cout<<sum<<endl;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                b[i][j]=a[j][i];
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                if(a[i][j]!=b[i][j])
                {
                    ok1=0;
                    break;
                }
            if(ok1==0) break;
        }
        if(ok1==1) cout<<endl<<"matrice simetrica";
        else
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                    if(a[i][j]!=-b[i][j])
                    {
                        ok2=0;
                        break;
                    }
                if(ok2==0) break;
            }
            if(ok2==1) cout<<endl<<"matrice antisimetrica";
        }
        cout<<endl<<endl;
    }
    return 0;
}
