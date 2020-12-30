#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range : ";
    cin>>n;
    int counter=1,sum=0;
    for(counter=1;counter<=n;counter++){
      sum=sum+counter;
    }
    cout<<"Sum is = "<<sum;

    sum=0,counter=1;
    while(counter<=n){
      sum=sum+counter;
      counter++;
    }
    cout<<"\nSum is = "<<sum;
      return 0;
}
