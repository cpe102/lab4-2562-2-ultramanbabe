#include<iostream>

using namespace std;

//Write function findDistance() here
double findDistance(double u,double t,double a){
  double s = ((u*t)+((0.5)*a*t*t));
  return s;
}

int main(){

  //Calling findDistance() using test cases
  double u , a , t;
  cout<<"Input u = ";
  cin>>u;
  cout<<"Input a = ";
  cin>>a;
  cout<<"Input t = ";
  cin>>t;
  cout<<"Distance = "<<findDistance(u,t,a);

  return 0;
}
