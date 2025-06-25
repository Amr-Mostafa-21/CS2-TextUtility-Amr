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
