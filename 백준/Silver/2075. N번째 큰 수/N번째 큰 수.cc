#include<queue>
#include<stdio.h>
using namespace std;
int main()
{
	priority_queue <int> pq;
	int N,k;
	scanf("%d",&N);
    for (int i = 0; i < N * N; i++)
	{
        scanf("%d",&k);
		pq.push(k*-1);
        if (pq.size() > N) pq.pop();
    }
	
	printf("%d",-1*pq.top());
}