				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int ;
using namespace std;
///////////////////////

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef PAUL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#ifdef ONLINE_JUDGE
#define cerr if (false) cerr
#endif
void time(){
	#ifdef PAUL
		cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
}
///////////////////////
/*
string readString(){
    string s;
    char c=getchar();
    while(isspace(c)){
        c=getchar();
    }
    while(!isspace(c)){
        s+=c;
        c=getchar();
    }
    return s;
}
*/
const int INF = 1e9 + 99;
using Pair = pair<int,int >;
using vec = vector<int> ;

void vecread(vec &v){
	for(auto &x : v){
		scanf("%d",&x);
	}
}
void vecprint(vec &v){
	for(auto x : v){
		printf("%d ",x);
	} puts("");
}
void idea(int n){
	
	int grid[n][n]={};
	int cnt = 0;
	
	for(int i = 0;i < n/4; i++){
		for(int j = 0 ; j < n/4 ; j++){
			for(int k = 0 ; k <4 ; k++){
				for(int l = 0; l < 4 ; l++){
					grid[(i*4)+k][(j*4)+l]= cnt ++;
				}
			}
		}
	}
	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n ; j++){
			printf("%d ",grid[i][j]);
		}
		puts("");
	}
	
	
}
int main()
{
	int n;
	scanf("%d",&n);
	
	idea(n);
	
	time();
    return 0;
}
