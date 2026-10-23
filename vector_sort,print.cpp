#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(vector<int> & nums,int n){
 for (int i=0;i<n;i++){
    int c;
    cin>>c;
    nums.push_back(c);
 }
 
}

   void printvector( vector<int> nums){
      for(int i=0;i<nums.size();i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
   }
int main(){
    int n;
        cout<<"enter the element size"<<endl;

    cin>>n;
    vector<int>v;

      cout<<"enter the element";

      create(v,n);
       cout<<"the elements are: "<<endl;
       sort(v.begin(),v.end());
      printvector(v);
       cout<<" second smallest element"<<v[1]<<endl;
          cout<<"second largest element"<<v[v.size()-2];
      return 0;
    }