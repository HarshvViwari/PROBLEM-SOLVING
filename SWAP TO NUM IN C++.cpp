#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
int tem;
tem=a;
a=b;
b=tem;
}

int main(){
int a,b;
cin >> a >> b;
  cout <<"befo" << endl << a << " " << b << endl;
swap(a,b);
cout << a << " " <<b;
return 0;
}