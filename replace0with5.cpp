// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int p = 0,rem;
    while(n)
    {
        rem = n%10;
        if(rem==0)
        {
            rem = 5;
        }
        p=p*10+rem;
        n/=10;
    }
    int q =0;
    while(p)
    {
        q = q*10+p%10;
        p/=10;
    }
    return q;
}