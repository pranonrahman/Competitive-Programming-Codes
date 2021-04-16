//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define O_o ios_base::sync_with_stdio(0)
#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define o_O ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define fixedprecision(n) cout<<fixed<<setprecision(n)
#define endl '\n'
#define CASE(n) cout << "Case " << n << ": "
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl

long long w,h;
char arr[25][25];
long long vis[25][25];
long long xx[]={+1,0,-1,0};
long long yy[]={0,+1,0,-1};
long long check(long long i,long long j)
{
    if(i<0 or i>=h or j<0 or j>=w or arr[i][j]=='#')  return 0;
    return 1;
}

long long bfs(long long i,long long j)
{
    long long mx =0;
    deque<pair<long long,long long>>dq;
    memset(vis,-1,sizeof(vis));
    dq.push_back({i,j});
    vis[i][j]=0;
    while(dq.size())
    {

        long long px = dq.front().first;
        long long py = dq.front().second;
        dq.pop_front();
        for(long long i=0;i<4;i++)
        {
           long long nx=px+xx[i];
           long long ny=py+yy[i];
           if(check(nx,ny)!=0 and vis[nx][ny]==-1 and arr[nx][ny]!='#')
           {
               vis[nx][ny]=vis[px][py]+1;
               mx = max(vis[nx][ny],mx);
               dq.push_back({nx,ny});
           }
        }
    }
   // for(long long i=0;i<h;i++)
   // {
  //      for(long long j=0;j<w;j++)    cout << vis[i][j] << ' ' ;
  //      cout<< endl;
 //   }
  //  cout << endl;
    return mx;
}

int main()
{
    O_o;
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long n,a;
        cin >> n>> a;
        int arr[n+3];
        map<int,int>mp;
        int cnt[n+3],c=0;
        int mx =-1,mxc;
        map<int,int>flag;
        flag[a]=1;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            if(mp[a]>mp[arr[i]])
            {
                flag[arr[i]]=1;
            }
            else
            {
                mp[arr[i]]++;
            }
        }
        for(auto it:mp)
        {
            if(flag[it.first]==0 and it.second>=mp[a])
            {
                cout << it.first << endl;
                return 0;
            }
        }
        cout << -1 << endl;

    }

    return 0;
}
