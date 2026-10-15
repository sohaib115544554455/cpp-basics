#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year "<<endl;
    cin>>year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    
        cout<<"year "<< year <<" is leep year "<<endl;

    
    else
        cout<<"year "<< year <<" is not  leep year "<<endl;

    
      return 0;
}