#include<iostream>
#include<vector>
#include<map>
#include<sstream>
#include<math.h>
#include<set>
#include<fstream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include <list>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <queue>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz size()
#define pb push_back
#define mp make_pair
#define fr(i, n) for(i=0;i<n;i++)
#define fr2(i, a, n) for(i=a;i<n;i++)
#define mem(a, n) memset(a, n, sizeof(a))
typedef vector<int> VI;
typedef long long LL;
typedef vector<string> VS;
typedef stringstream SS;
const int INF = (int) 1e9;
#define LLMax LLONG_MAX

#define cs c_str()
int main() {
	int i, k, t;
	scanf("%d", &t);
	fr2(k, 1, t+1) {
		char a[70];
		scanf("%s", a);
		string s = a;

		set <char> se(all(s));
		map <char, LL> m;
		LL cnt = 2;
		LL b = se.sz;
		if(b==1)
			b = 2;
		int l = s.sz;
		string g;
		m[s[0]]=1;
		bool f = 0;
		fr2(i, 1, l) {
			if(m.find(s[i])==m.end()) {
				if(f==0) {
					m[s[i]]=0;
					f = 1;
				}
				else {
					m[s[i]]=cnt++;
				}
			}
		}
		LL j = 1;
		LL c = 0;
		for(i=l-1;i>=0;i--) {
			c += (j * m[s[i]]);
			j *= b;
		}

		printf("Case #%d: %lld\n", k, c);
	}
}

