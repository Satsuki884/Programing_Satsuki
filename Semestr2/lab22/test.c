//#include <regex.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <locale.h>
//int reg_func(char * string1, char * string3){
//    regex_t regex;
//    int return_value = regcomp(&regex,string3,0);
//    return_value = regexec(&regex, string1, 0, NULL, 0);
//    return return_value;
//}
//int main() {
//    setlocale(LC_ALL, "rus");
//    char *string = "У-н. н:в?!";
//    char *reg = "^[-a-zA-Z0-9а-яА-Я.,;!?: ]*$";
//    int a = reg_func(string, reg);
//    if (a == 0) printf("Pattern found.\n");
//    else if (a == REG_NOMATCH) {
//        printf("Pattern not found.\n");
//        return 0;
//    } else {
//        printf("An error occured.\n");
//        return 0;
//    }
//    return 0;
//}