#include <iostream>
 using namespace std;
// This is a function template. 
template <class X> void squre(X a)
 { 
  X c=a*a;
  cout<<"squre of a number is\n"<<c;
}
int main()
 { 
 int a;
 float b;
 cin>>a;
 cin>>b;
 squre(a);
 squre(b);
 
return 0;
}

