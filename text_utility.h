#ifndef TEXT_UTILITY_H
#define TEXT_UTILITY_H

int word_count(char arr[]);

int Character_Count(char arr[]);

void Vowel_Consonant_Count(char arr[], int& v, int& co);

void String_Reversal(char arr[]);

bool isPalindrome(char arr[]);

void to_upper_case(char arr[]);

void to_lower_case(char arr[]);

int substringCount(char str[], char sub[]);

void vigenere(char text[], char keyword[], int mode);

#endif
