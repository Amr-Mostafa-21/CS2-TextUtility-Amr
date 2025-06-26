#include <iostream>
using namespace std;
int word_count(char arr[])
{
    int count=0;
    int i=0;
    bool word= false;
    while (arr[i]!= '\0')
    {
        if(arr[i] != ' ' && !word)
        {
            count++;
            word=true;
        }
        else if (arr[i] == ' ')
        {
            word=false;
        }
        i++;
    }
    return count;
}

void Vowel_Consonant_Count(char arr[], int& v, int& co)
{
    int i=0;
    v=0;
    co=0;
    while (arr[i]!= '\0')
    {
        char c = arr[i];
        if (c >= 'A' && c <= 'Z')
            c = c + 32;
        if(c >='a' && c<= 'z')
        {
            if (c == 'a' || c == 'e'|| c == 'i'|| c =='o'|| c =='u')
            {
                v++;
            }
            else
                co++;
        }
        i++;
    }
    
}

void to_upper_case(char arr[])
{
    int i=0;
    while (arr[i]!= '\0')
    {
        if( arr[i] >='a' && arr[i] <= 'z')
        {
            arr[i]=arr[i]-32;
        }
        i++;
    }
}


void to_lower_case(char arr[])
{
    int i=0;
    while (arr[i]!= '\0')
    {
        if( arr[i] >='A' && arr[i] <= 'Z')
        {
            arr[i]=arr[i]+32;
        }
        i++;
    }
}

int Character_Count(char arr[]) {
    int i = 0;
    int counter = 0;
    while (arr[i] != '\0') {
        counter++;
        i++;
    }
    return counter;
}

bool isPalindrome(char arr[]) {
    int i = 0;

    while (arr[i] != '\0') {
        i++;
    }

    int left = 0;
    int right = i - 1;

    while (left < right) {
        if (arr[left] != arr[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

void String_Reversal(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }

    int left = 0;
    int right = i - 1;

    while (left < right) {
        arr[left] = arr[left] + arr[right];
        arr[right] = arr[left] - arr[right];
        arr[left] = arr[left] - arr[right];

        left++;
        right--;
    }
}

int substringCount(char str[], char sub[]) {
    int count = 0;
    int i = 0;

    if (sub[0] == '\0') return 0; 

    while (str[i] != '\0') {
        int j = 0;
        
        while (sub[j] != '\0' && str[i + j] == sub[j]) {
            j++;
        }
        if (sub[j] == '\0') { 
            count++;
            i += j;       
        } else {
            i++;        
        }
    }
    return count;
}

int strLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void vigenere(char text[], char keyword[], int mode) {
    int textLen = strLength(text);
    int keyLen = strLength(keyword);
    char* output = new char[textLen + 1]; 

    for (int i = 0; i < textLen; ++i) {
        char t = text[i];
        char k = keyword[i % keyLen];

        if (t >= 'a' && t <= 'z') {
            int ti = t - 'a';
            int ki = k - 'a';
            int result;

            switch (mode) {
                case 0: 
                    result = (ti + ki) % 26;
                    break;
                case 1: 
                    result = (ti - ki + 26) % 26;
                    break;
                default:
                    delete[] output;
                    return;
            }

            output[i] = result + 'a';
        } else {
            output[i] = t;
        }
    }

    output[textLen] = '\0'; 
    cout << "Result: " << output << endl;
    delete[] output; 
}
