#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

  long long  a;
  cin>> a;
  char sign;
  cin>> sign;
  long long b;
  cin>> b;

  if(sign=='+'){
    cout<<a+b;

  }
  if(sign=='-'){
    cout<<a-b;

  }
  if(sign=='*'){
    cout<<a*b;

  }
  if(sign=='/'){
    cout<<a/b;

  }

  else {
    cout<<"please ,choose + , - , * , /  ";
  }
  return 0;
}

