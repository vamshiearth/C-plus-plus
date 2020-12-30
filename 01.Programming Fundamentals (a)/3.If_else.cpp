#include<iostream>
using namespace std;
int main(){

  int a,b,c,flag=0;

  cout<<"Enter any three number\n";

  cout<<"Enter number 1 : ";
  cin>>a;
  cout<<"Enter number 2 : ";
  cin>>b;
  cout<<"Enter number 3 : ";
  cin>>c;
  if(a>b){
    if(a>c){
      cout<<a<<" is the greater number";
    }
    else{
        cout<<c<<" is the greater number";
      }
  }
  else{
      if(b>c){
        cout<<b<<" is the greater number";
      }
      else{
        cout<<c<<" is the greater number";
      }
  }
  return 0;
}
