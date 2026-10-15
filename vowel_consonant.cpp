#include<iostream>
using namespace std;

int main(){
    char c;
     cout<<"enter a alphabet"<<endl;
     cin>>c;
     
     switch(tolower(c)){
        case  'a' :
        case  'e' :
        case  'i' :
        case   'o' :
        case   'u' :
        
              cout<<"the alphabet is a vowel";
            break;
            default:
                cout<<"the alphabet is a consonant";
        
     }
         return 0;

}