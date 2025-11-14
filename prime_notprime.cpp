// check if the number is prime or not 

#include <iostream>
#include <cmath>
using namespace std;
int main(){
//      int n;
//      cout<<"enter a number :";
//      cin>>n;
//      bool isPrime =true;
//      for(int i=2;i<=n-1;i++){
//                if(n%i==0){
//                 isPrime=false;
//                 break;
//                }
//      }
//      if(isPrime){
//         cout<<" number is prime"<<endl;
//      }else{
//         cout<<"number is not prime"<<endl;
//      }
//      return 0;
// }

// second method

int n =15;
bool isPrime = true;

for(int i=2;i<=sqrt(n);i++){
   if(n%i==0){
      isPrime = false;
      break;
   }
}
if(isPrime){
   cout<<"number is prime"<<endl;
}else{
   cout<<"number is not prime"<<endl;
    }
    return 0;
}