#include <iostream>
#include "text_utility.h"
using namespace std;
int main () {
    char arr [] = " winter is coming";
    char arr2 [] = "level";
    char arr3 [] = "SAY MY name";
    char arr4 [] = "catdogcatfish";
    char sub [] = "cat";
    int consonants,vowles;
    cout << "Number of words in "<<arr<<" is "<<word_count(arr)<<endl;
    cout << "Number of characters in "<<arr<<" is "<<Character_Count(arr)<<endl;
    Vowel_Consonant_Count(arr ,vowles ,consonants);
    cout << "Number of consonants in "<<arr<<" is "<<consonants<<endl;
    cout << "Number of vowles in "<<arr<<" is "<<vowles<<endl;
    String_Reversal(arr);
    cout << "After the reversing " << arr <<endl;
    cout << "palindrome check for  " << arr2 << " is " << isPalindrome(arr2) << endl;
    cout << "palindrome check for  " << sub << " is " << isPalindrome(sub) << endl;
    to_upper_case(arr3);
    cout << "After converting " << arr3 << " to upper case "<< arr3<<endl;
    to_lower_case(arr3);
    cout << "After converting " << arr3 << " to lower case "<< arr3 <<endl;
    cout <<"The number of occurnces of " << sub << "in " << arr4 << " is " << substringCount << endl;
}