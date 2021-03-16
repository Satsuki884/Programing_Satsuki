int main() {
    char space = ' ';
    char str[15];
    char word[15] = "Ivanov        ";
    int count_spaces = 0;
    int count_letters = 0;

    for (int i = 0; i < 15; i++)
    {
        if (word[i] == space)
            count_spaces++;
        else
            count_letters++;

    }
    count_letters--;
    int the_number_of_words_before_the_space = (int)count_spaces / 2;
    for (int i = 0, k = 0; i < 15; i++)
    {
        if (the_number_of_words_before_the_space)
        {
            str[i] = space;
            the_number_of_words_before_the_space--;
        }
        else if (count_letters)
        {
            str[i] = word[k++];
            count_letters--;
        }
        else
        {
            str[i] = space;
        }
    }
    return  0;
}
