#include <iostream>
using namespace std;

int main() {
  float a, b, x, y, z;
  cout<<"dimmi i valori di a"<< endl;
  cin>> a;
  cout<<"dimmi i valori di b"<< endl;
  cin>> b;
  cout<<"dimmi i valori di x"<< endl;
  cin>> x;
  cout<<"dimmi i valori di y"<< endl;
  cin>> y;
  if (x<0&&y>0) {
      z=(a*x)-(b*y);
      cout<<z;
  }
  else if(x>=0&&y<=0){
      z=(a*x*x)-(b*y);
      cout<<z;
  }
  else {
      z=(a*x)+(b*y*y);
      cout<<z;
  }
  return 0;
}
