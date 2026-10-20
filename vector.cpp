#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout << "enter the vector size ";
cin>>n; 
  vector <int> v;
cout<<"enter:"<<n<<"element"<<endl;
 for(int i = 0;i<n;i++){
    int val;
    cin>>val;
    v.push_back(val);
 }
 cout<<"vector element are:";
 for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;

return 0;
}

