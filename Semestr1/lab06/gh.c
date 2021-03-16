int main() {
    int num = 5223;
    char result[4][15];
    char thousands[9][20] = { " one thousand ", " two thousands ", " three thousands ", " four thousands ", " five thousands", " six thousands ", " seven thousands ", " eight thousands ", " nine thousands " };
    char hundreds[9][20] = { " one hundred ", " two hundreds ", " three hundreds ", " four hundreds ", " five hundreds ", " six hundreds ", " seven hundreds ", " eight hundreds ", " nine hundreds " };
    char exception[9][20] = { " ten ", " eleven ", " twelve ", " thirteen ", " fourteen ", " fifteen ", " sixteen ", " seventeen ", " eighteen ", " nineteen " };
    char decs[9][15] = { " twenty ", " thirty ", " fourty ", " fifty ", " sixty ", " seventy ", " eighty ", " ninety " };
    char units[9][15] = { " one ", " two ", " three ", " four ", " five ", " six ", " seven ", " eight ", " nine " };

    for (int i = 0; i < 15; i++) {
        result[i][i] = ' ';
    }

    for (int j = 0; j < 15; j++) {
        result[0][j] = thousands[num / 1000 - 1][j];
        result[1][j] = hundreds[num % 1000 / 100 - 1][j];
        result[2][j] = decs[num % 100 / 10 - 2][j];
        if (num % 100 >= 10 && num % 100 < 20) {
            result[3][j] = exception[num % 100 - 10][j];
        }
        else {
            result[3][j] = units[num % 10 - 1][j];
        }
    }


    return 0;
}