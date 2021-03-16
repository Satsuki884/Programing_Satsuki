/*
    switch (number / 1000)
    {
    case 1: for (int j = 0;  j < 15;  j++)
    {
        number_c[i][j] = thousand[0][j];
    }; break;
    case 2: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = thousand[1][j];
    } break;
    case 3: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = thousand[2][j];
    } break;
    case 4: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = thousand[3][j];
    } break;
    case 5: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = thousand[4][j];
    } break;
    case 6: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = thousand[5][j];
    } break;
    case 7: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = thousand[6][j];
    } break;
    case 8: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = thousand[7][j];
    } break;
    case 9: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = thousand[8][j];
    } break;
    default: break;
    }
    i++;
    switch (((number % 1000)/10)/10)
    {
    case 1: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = hundreds[0][j];
    } break;
    case 2: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = hundreds[1][j];
    } break;
    case 3: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = hundreds[2][j];
    } break;
    case 4: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = hundreds[3][j];
    } break;
    case 5: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = hundreds[4][j];
    } break;
    case 6: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = hundreds[5][j];
    } break;
    case 7: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = hundreds[6][j];
    } break;
    case 8: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = hundreds[7][j];
    } break;
    case 9: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = hundreds[8][j];
    } break; 
    default: break;
    }
    i++;
    switch ((number % 100) / 10)
    {
    case 2: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = dozens[0][j];
    } break;
    case 3: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = dozens[1][j];
    } break;
    case 4: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = dozens[2][j];
    } break;
    case 5: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = dozens[3][j];
    } break;
    case 6: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = dozens[4][j];
    }; break;
    case 7: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = dozens[5][j];
    } break;
    case 8: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = dozens[6][j];
    } break;
    case 9: for (int j = 0; j < 15; j++)
    {
        number_c[i][j] = dozens[7][j];
    } break;
  
    default: break;
    }
    i++;
    if (number % 100 >= 10 & number % 100 < 20) {
        switch (number % 100) {
        case 10: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[10][j];
        } break;
        case 11: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[11][j];
        } break;
        case 12: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[12][j];
        } break;
        case 13: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[13][j];
        } break;
        case 14: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[14][j];
        } break;
        case 15: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[15][j];
        } break;
        case 16: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[16][j];
        } break;
        case 17: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[17][j];
        } break;
        case 18: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[18][j];
        } break;
        case 19: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[19][j];
        } break;
        default: break;
        }
    }
    else {
        switch (number % 10)
        {
        case 0: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[0][j];
        } break;
        case 1: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[1][j];
        } break;
        case 2: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[2][j];
        } break;
        case 3: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[3][j];
        } break;
        case 4: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[4][j];
        } break;
        case 5: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[5][j];
        } break;
        case 6: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[6][j];
        } break;
        case 7: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[7][j];
        } break;
        case 8: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[8][j];
        } break;
        case 9: for (int j = 0; j < 15; j++)
        {
            number_c[i][j] = units[9][j];
        } break;
        default: break;
        }
    }  
*/