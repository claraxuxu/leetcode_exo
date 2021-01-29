#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int romanToInt(char * s){
    int sum = 0;
    int judge = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
            sum -= 1;
            judge = -1;
        } else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
            sum -= 10;
            judge = -1;
        } else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
            sum -= 100;
            judge = -1;
        }
        if (judge == -1) {
            i++;
            judge = 0;
        }
        switch (s[i]) {
            case 'I': 
                sum++;
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                sum += 10;
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                sum += 100;
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
            default:
                break;
            }
    }
    return (sum);
}

int main()
{
    int res = romanToInt("MCMXCIV");
    printf ("%i\n",res);
    return 0;
}