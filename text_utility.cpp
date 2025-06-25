int Character_Count(char arr[]) {
    int i = 0;
    int counter = 0;
    while (arr[i] != '\0') {
        counter++;
        i++;
    }
    return counter;
}

