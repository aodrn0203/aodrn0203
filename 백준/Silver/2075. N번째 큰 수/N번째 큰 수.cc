#include<bits/stdc++.h>
main(){std::priority_queue<int>pq;int i,N,k;scanf("%d",&N);for(i=0;i<N*N;i++){scanf("%d",&k);pq.push(k*-1);if(pq.size()>N)pq.pop();}printf("%d",-1*pq.top());}