#include<bits/stdc++.h>

using namespace std;

int main(){

     int n; cin>>n;
     int arr[n];for (int i = 0; i < n; i++)
     {
        cin>>arr[i];
     }
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
        {
            for (int k = j; k <=i ;k++)
            {
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
     }
     
    return 0; 
}