#include <iostream>
using namespace std;

class Calculator{
    float a;
    float b;
    
    addition(){
        float sum =a + b;
        cout<<"The sum of given numbers is:"<<sum<<endl;
    };
};
int main() {
    
  Calculator C1;
  C1.a=0;
  C1.b=0;
  cout<<"Enter the value of a:"<<endl;
  cin>>C1.a;
  cout<<"Enter the value of b:"<<endl;
  cin>>C1.b;
  
  

    return 0;
}
