//Min number of fibonacci jumps frog can take to reach the end
#include <iostream> 
#include<algorithm>//to use max function
using namespace std;


int minJumps(int N, int maxStepsForward[]){//source = 0, destination=N-1
    
    if(N<=1) return 0;//N=1=> only single element in array 
    if(maxStepsForward[0]==0) return -1;
    
    int maxReach,steps,jump;
    //source=0 
    maxReach=maxStepsForward[0];//index to which we can go from source 
    steps=maxStepsForward[0]; //steps in 0th index
	jump=1;//we have to take atleast 1 jump;  jump= min. jumps we can take
	
	for(int i=1;i<N;i++){
		if(i==N-1) return jump; //we have reached destination
		maxReach=max(maxReach,i+maxStepsForward[i]);//update maxReach
		steps--;//used a step to reach current index
		if(steps==0){// we are not left with steps
			jump++;
		if(i>=maxReach) return -1;
		steps=maxReach-i;
			
		}
	}
	
    return -1;
}

int main() {
    int N;//N:No. of locations
    cin>>N;
    int maxStepsForward[N];
    for(int i=0;i<N;i++) cin>>maxStepsForward[i];//it can contain only 0 or 1

   cout<< minJumps(N,maxStepsForward)<<endl;
}

