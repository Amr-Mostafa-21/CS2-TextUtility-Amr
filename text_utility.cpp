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