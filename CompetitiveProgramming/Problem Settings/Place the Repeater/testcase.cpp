#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    freopen("15.in","w",stdout);
    int xt,yt,x,y,k;
    xt = -(rand()%500);
    yt = (rand()%500);
    x = (rand()%500);
    y = -(rand()%500);
    k = (rand()%180);
    if(k==1)    k++;
    cout << xt << ' ' << yt << ' ' << x << ' ' << y << ' ' << k << endl;
    return 0;
}