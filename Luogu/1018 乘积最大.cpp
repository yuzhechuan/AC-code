#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=50;
typedef long long ll;
int i,j,k,n,K;
char s[N];
struct number {
    int a[N];
    int n;
    void clear() {
        n=0;
        memset(a,0,sizeof a);
    }
    number operator * (const number &nst) const {
        number b;
        b.clear();
        b.n=n+nst.n;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=nst.n;j++)
                b.a[i+j-1]+=a[i]*nst.a[j];
        for (int i=1;i<=b.n;i++) b.a[i+1]+=b.a[i]/10,b.a[i]%=10;
        while (b.n!=1 && !b.a[b.n]) b.n--;
        return b;
    }
    bool operator < (const number &nst) const {
        if (n!=nst.n) return n<nst.n;
        for (int i=n;i>=1;i--) if (a[i]!=nst.a[i]) return a[i]<nst.a[i];
        return 0;
    }
    void print() {
        for (int i=n;i>=1;i--) printf("%d",a[i]);
    }
} f[N][N];
number num(int l,int r) {
    number b;
    b.clear();
    for (int i=r;i>=l;i--) b.n++,b.a[b.n]=s[i]-'0';
    return b;
}
int main() {
    scanf("%d%d",&n,&K);
    scanf("%s",s+1);
    for (i=1;i<=n;i++) f[0][i]=num(1,i);
    for (i=1;i<=K;i++)
        for (j=i+1;j<=n;j++)
            for (k=i;k<j;k++)
                f[i][j]=max(f[i][j],f[i-1][k]*num(k+1,j));
    f[K][n].print();
}
