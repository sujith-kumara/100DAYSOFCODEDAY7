#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    float arr[100],sum=0.0,avg;
    cout<<"Enter the numbers of data";
    cin>>n;
    if(n>100 || n<=0){
        cout<<"The number is not in the range pls reenter the number";
        cin>>n;
    }
    for(i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" number :"<<endl;
        cin>>arr[i];
        sum+=arr[i];

    }
    cout<<"Sum = "<<sum<<endl;
    avg=sum/n;
    cout<<"Avg = "<<avg;
    return 0;
}