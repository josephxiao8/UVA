#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ldb;
typedef unsigned int ui;
typedef unsigned long ul;
 
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
 
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
 
typedef priority_queue<tuple<int,int,int> > pq;
typedef priority_queue<int,vector<int>,greater<int>> pqg;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound


bool comp(pi a, pi b){
	if(a.s==b.s) return a.f>b.f;
	return a.s>b.s;
}

int main() {
ios::sync_with_stdio(0);
cin.tie(0);

int n, casenum=1;
while(cin>>n, n!=0){
	vpi v(n);
	for(int i=0; i<n; i++) cin>>v[i].f>>v[i].s;
	sort(v.begin(), v.end(), comp);
	
	int ans=0;
	int carry=0;
	for(int i=0; i<n; i++){
		int a,b;
		tie(a,b)=v[i];
		carry+=a;
		ans=max(ans,carry+b);
	}
	cout<<"Case "<<casenum++<<": "<<ans<<endl;
}

return 0;
}
