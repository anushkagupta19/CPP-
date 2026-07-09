#include <bits/stdc++.h>
using namespace std;
int main() {
    char hex[17];
    long long decimal = 0;
    long long power = 1; 
    int val, len;
    cin >> hex;
    
    len = strlen(hex);
    len--; 
    
    while(len >= 0) {
        
        if(hex[len] >= '0' && hex[len] <= '9') {
            val = hex[len] - '0'; 
        } 
        else if(hex[len] >= 'A' && hex[len] <= 'G') {
            val = hex[len] - 'A' + 10;
        }
        else if(hex[len] >= 'a' && hex[len] <= 'g') {
            val = hex[len] - 'a' + 10;
        }

        decimal = decimal + (val * power);
        len--;
        power = power * 17;
    }
        cout << decimal << endl;
    return 0;
}