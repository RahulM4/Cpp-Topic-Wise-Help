#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<int> commonElements(int  n1, int A[], int n2, int B[], int n3, int C[])
{
    vector<int> ans;
    int i=0,j=0,k=0;
    while(i<n1 && j<n2 && k<n3){
        if(A[i]==B[j] && B[j]==C[k]){
            ans.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<C[k]){
            j++;
        }
        else{
            k++;
        }
    }
    return ans;
}
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int A[n1],B[n2],C[n3];
    for(int i=0;i<n1;i++){
        cin>>A[i];
    }
    for(int i=0;i<n2;i++){
        cin>>B[i];
    }
    for(int i=0;i<n3;i++){
        cin>>C[i];
    }
    vector<int> ans = commonElements(n1,A,n2,B,n3,C);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}