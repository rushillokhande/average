#include<iostream>
using namespace std;
int main()
{
float total=0;
float a;
cout<<"enter numbers you want to print :";
cin>>a;
float arr[a];
for (int i = 0; i < a; i++) {
  cin>>arr[i];
}
for (int i = 0; i < a; i++) {
  total+=arr[i];
}
cout<<"total is:"<<total;

total=total/a;
cout<<"average is: "<<total;
}
