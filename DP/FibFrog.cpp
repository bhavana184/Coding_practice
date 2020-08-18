//Min number of fibonacci jumps frog can take to reach the end
#include <iostream> 
using namespace std; 
#define MAX 1e9


int minFibJumps(int N, int locations[]){
    int minjump=-1;
    
    int fib[10];//fib 30 is aprrox 10^5
    fib[0]=0; fib[1]=1;
    for(int i=2;i<10;i++) fib[i]=fib[i-1]+fib[i-2];
    
    int dp[N+2];//source :0 , 1 to N+1, N+1 :destination
    fill(dp,dp+N+2,MAX);
    
    dp[0]=0;//no. of jumps required to move from source to source
    
    for(int i=1;i<N+2;i++){
        for(int j=1;j<10;j++){
            if((locations[i]==1 || i==N+1) && i-fib[j]>=0){
                dp[i]= min(dp[i],1 + dp[i-fib[j]]);
            }
        }
    }
    if(dp[N+1]!=MAX) minjump=dp[N+1];
    return minjump;
}

int main() {
    int N;//N:No. of locations
    cin>>N;
    int locations[N];
    for(int i=0;i<N;i++) cin>>locations[i];//it can contain only 0 or 1

   cout<< minFibJumps(N,locations)<<endl;
}

