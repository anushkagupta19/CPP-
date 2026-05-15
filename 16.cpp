4. Print Square of Stars (n x n Stars)

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){ //row
        for(int j=1;j<=n;j++){ //column
            cout<<"*";
        }
        cout<<endl;
    }
}
5. Print an Increasing Triangle of Stars
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
6. Print a Right-Aligned Triangle of Stars
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

7. Print Stars in Even Numbers (2, 4, 6, 8, 10)
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        int count=2*i;
        for(int j=1;j<=count;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
8. Print Stars in Odd Numbers (1, 3, 5, 7, 9)
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        int count=(2*i)-1;
        for(int j=1;j<=count;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
9. Print a Centered Pyramid of Stars
  *
 ***
*****
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int l=2;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}
10. Print Stars and Spaces Alternating (Stars and Blank Spaces)
 (b = blank space here)
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"b";
        }
        for(int k=1;k<=i;k++){
            cout<<"*"<<"b";
        } 
        cout<<endl;
    }
}
11. Print Numbers in an Increasing Sequence (1, 12, 123, 1234, 12345)
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
12. Print Repeated Numbers per Row (Same Number Repeated)
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
13. floyad triangle.
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

again 

1
2 3
4 5 6
7 8 9 0
1 2 3 4 5
6 7 8 9 0 1 
2 3 4 5 6 7 8
#include<iostream>
using namespace std;
int main(){
    int n=6;
    int num=1;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num % 10 <<" ";
            num++;
        }
        cout<<endl;
    }
}

again 
1
0 1 
0 1 0 
1 0 1 0
1 0 1 0 1 

#include<iostream>
using namespace std;
int main(){
    int n =5;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=1-num;
        }
        cout<<endl;
    }
}

A
BC
DEF
GHIJ
KLMNO

#include<iostream>
using namespace std;
int main(){
    int n=5;
    char ch='A';
    int num=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(ch+num)<<" ";
            num++;
        }
        cout<<endl;
    }
}
AA
BB
CCC
DDDD
EEEEE
#include<iostream>
using namespace std;
int main(){
    int n=5;
    char ch='A';
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(ch+i)<<" ";
        }
        cout<<endl;
    }
}

A
AB
ABC
ABCD
ABCDE

#include<iostream>
using namespace std;
int main(){
    int n=5;
    char ch='A';
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(ch+j)<<" ";
            
        }
        cout<<endl;
    }
}

again 

A
BCD
EFGHI
JKLMNOP
ORSTUVWXY

#include <iostream>
using namespace std;
int main() {
    int n = 5; 
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        // Calculate the odd number of characters for this row
        int charCount = (2 * i) + 1;
        for (int j = 0; j < charCount; j++) {
            cout << ch;
            ch++;
            // Optional: Wrap around if we go past 'Z'
            if (ch > 'Z') {
                ch = 'A';
            }
        }
        cout << endl;
    }
    return 0;
}

1
12
123
1234
12345
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

again 

    1
   121
  12321
 1234321
123454321

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //increasing 
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        //decreasing
        for(int j= i-1;j>= 1;j--){
            cout << j;
        }
        cout<<endl;
    }
}


*
**
****
*****
****
**
*
This pattern is known as a Sideways Triangle or a Half Diamond.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // We define the specific number of stars for each row as shown in your prompt
    vector<int> n = {1, 2, 3, 4, 3, 2, 1};
    for (int i = 0; i < n.size(); i++) {
        // Inner loop runs exactly the number of times specified in our array
        for (int j = 0; j < n[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
This is the Diamond Pattern.
#include <iostream>
using namespace std;
int main() {
    int n = 5; // Height of the top half

    // Phase 1: Top Half
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) cout << " ";
        // Stars (Odd formula: 2*i + 1)
        for (int k = 0; k < (2 * i + 1); k++) cout << "*";
        cout << endl;
    }

    // Phase 2: Bottom Half
    for (int i = n - 2; i >= 0; i--) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) cout << " ";
        // Stars (Odd formula: 2*i + 1)
        for (int k = 0; k < (2 * i + 1); k++) cout << "*";
        cout << endl;
    }

    return 0;
}

    5
   545
  54345
 5432345
543212345

#include <iostream>
using namespace std;
int main() {
    int n = 5; // The starting number and total rows

    for (int i = 0; i < n; i++) {
        // 1. Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // 2. Print decreasing part (from 5 down)
        int current = n;
        for (int j = 0; j <= i; j++) {
            cout << current;
            if(j < i) current--; 
        }

        // 3. Print increasing part (back up to 5)
        for (int j = 0; j < i; j++) {
            current++;
            cout << current;
        }

        cout << endl;
    }
    return 0;
}