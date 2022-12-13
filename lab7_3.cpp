#include<iostream>

using namespace std;



int adiff(int x, int y){

  int ans;
  
  if(x < 0){
    x = x + 360;
  }  
  if(y < 0){
    y = y + 360;
  }
  x = x%360;
  y = y%360;
  ans = x - y;
  if(ans < 0){
    ans *= -1;
  }
  if(ans > 180){
    ans = 360 - ans;
  }
  
  return ans ;
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244) << endl;
}
