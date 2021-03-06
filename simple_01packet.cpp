#include<iostream>
#include<algorithm>
using namespace std;

struct {
	int w;
	int v;
} list[100];
int dp[100][100];

/* int max(int a ,int b) {
	return a>b ?a:b;
} */

int main() {
	int n,w;
	int i,j;
	
	// 多组都可以计算
	while (cin>>n>>w) {
		for(i=1; i <= n; i++)
			cin>>list[i].w>>list[i].v;
		
		for (i = 0; i <= w; i++)
			dp[0][i] = 0;
			
		for (i = 1; i<= n; i++) {
			for (j = w; j >= list[i].w ;j--) 
				dp[i][j] = max(dp[i-1][j-list[i].w]+list[i].v,dp[i-1][j]);
			
			for (j = list[i].w - 1; j>=0 ;j--)
				dp[i][j] = dp[i-1][j];
		}
		
		for(i = 0; i <= n; i++) {
			for (j=0; j <= w; j++)
				cout<<dp[i][j]<<" ";
			cout<<"\n"<<endl;
		}
	}
}