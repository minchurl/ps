﻿#include<bits/stdc++.h>
#define MAX_N 50005
#define MAX_M 2000005
#define MAX_K 100005
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(V) (V).begin(),(V).end()
#define reset(V) (V).clear();(V).resize(0);
#define sq(x) ((x)*(x))
#define abs(x) ((x)>0?(x):(-(x)))
#define fi first
#define se second
#define inf 0x3fffffff
#define full_inf 0x7fffffff
#define half_inf 0x3fffffff
//#define inf 0x3fffffff
#define MOD 1000000007LL
#define cpx_mod(x) (((LD)(((LL)x.real())%MOD)),((LD)(((LL)x.imag())%MOD)))
#define prev(x) (((x)+n-1)%n)
#define next(x) (((x)+1)%n)
#define mod(x) (((x)%998244353LL + 998244353LL)%998244353LL)
using namespace std;
typedef long long LL;
typedef long double LD;
typedef pair<int,int> pii;
typedef pair<LL,LL> pil;
typedef pair<LL,string> pls;
typedef complex<LD> Complex;
int n;
int arr[1005];
int main(){
    freopen("input.txt","r",stdin);
    int TC;
    scanf("%d",&TC);
    for(int _TC=1;_TC<=TC;_TC++){
        printf("Case #%d: ",_TC);
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int ans = 1005;
        for(int i=1;i<=1000;i++){
            int x = i;
            for(int j=0;j<n;j++){
                x += (arr[j]/i) + ((arr[j]%i)?0:-1);
            }
            ans = min(ans,x);
        }
        printf("%d\n",ans);
    }
    return 0;
}