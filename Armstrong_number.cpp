// Forany3digitnumbercheckwhetherit’s
// anArmstrongnumberornot.Armstrongnumberis
// anumberthatisequaltothesumofcubesofitsdigits.
// Eg:371isanarmstrongnumber.3*3*3+7*7*7+1*1*1=371


#include<iostream>
using namespace std;

int main(){

    int num;
    int originalNum;
    int remainder; 
    int result = 0;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    
    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
    return 0;
}