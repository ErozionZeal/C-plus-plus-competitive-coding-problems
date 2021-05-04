#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; 

const ll K = 360 * 12 * 10000000000;
const ll INV = 15709090909091;
 
void solve() {
    ll A, B, C; cin >> A >> B >> C;
    vl P = {A, B, C};
    sort(all(P));
    do {
        ll X = P[1] - P[0];
        while (X < 0) X += K;
        while (X % 11) X += K;
        X /= 11;
        ll Y = P[2] - P[0];
        while (Y < 0) Y += K;
        while (Y % 719) Y += K;
        Y /= 719;
        if (Y == X) {
            vl ans;
            ans.pb(X%1000000000); X /= 1000000000;
            ans.pb(X%60); X /= 60;
            ans.pb(X%60); X /= 60;
            ans.pb(X);
            reverse(all(ans));
            trav(a, ans) cout << a << " ";
            cout << nl; return;
        }
    } while (next_permutation(all(P)));
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);    
	
    int T; cin >> T;
    FOR(i, 1, T+1) {
        cout << "Case #" << i << ": ";
        solve();
    }
	
	return 0;
}