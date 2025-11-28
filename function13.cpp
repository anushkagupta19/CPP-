 // write a function that accept a character as 
 // parameters and returns the character that occurs 
// after character in the ASCII table.

#include<iostream>
using namespace std;
char nextCharacter(char ch){
    return ch + 1;
}

int main(){
    char character;
    cout<<"Enter a character: ";
    cin>>character;

    char result=nextCharacter(character);
    cout<<"The next character after "<<character<<" is "<<result<<"."<<endl;
    return 0;
}


// OR

// #include <iostream>
// using namespace std;

// // write a function that accepts a character as parameter and returns the character that occurs after it in the ASCII table.

// char nextCharacter(char value) {
//     return static_cast<char>(value + 1);
// }

// int main() {
//     char character;
//     cout << "Enter a character: ";
//     if (!(cin >> character)) {
//         return 1;
//     }

//     char result = nextCharacter(character);
//     cout << "The next character after '" << character << "' is '" << result << "'." << endl;
//     return 0;
// }