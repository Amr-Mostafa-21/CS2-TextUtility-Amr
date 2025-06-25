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

