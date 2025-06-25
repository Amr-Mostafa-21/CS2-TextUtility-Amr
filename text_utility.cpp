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
