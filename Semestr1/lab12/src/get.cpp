#include <iostream>
#include <cstring>
#include <ctime>
int main()
{
    unsigned int start_time =  clock();
    char str[] = "Hello, I am Jack";
    for(int i = strlen(str); i >= 0; i-- ){
        std::cout << str[i];
    }
    unsigned int end_time = clock(); // конечное время
    unsigned int search_time = end_time - start_time;
    std::cout << "\n";
    std::cout << search_time;
}