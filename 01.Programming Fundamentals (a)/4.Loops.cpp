#include<iostream>
using namespace std;
int main(){
  int arr[10],i;
  cout<<"Enter any ten number\n";

  for(i=0;i<10;i++){
    cout<<"Element "<<i+1<<" = ";
    cin>>arr[i];
  }
  int sum=0;
  for(i=0;i<10;i++){
    sum=sum+arr[i];
  }
  cout<<"Sum is "<<sum<<endl;
    return 0;
}
