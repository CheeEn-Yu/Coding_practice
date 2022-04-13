#include <stdio.h>
int main(){
    char s[100];
    scanf("%s", s);
    int i = 0;
    // while (s[i] != '\0'){
    //     printf("%c", s[i]);
    //     i++;
    //     }
    int ans[27] = {0};
    while (s[i] != '\0'){
        if (s[i] == 'a' || s[i] == 'A') ans[1]++;
        if (s[i] == 'b' || s[i] == 'B') ans[2]++;
        if (s[i] == 'c' || s[i] == 'C') ans[3]++;
        if (s[i] == 'd' || s[i] == 'D') ans[4]++;
        if (s[i] == 'e' || s[i] == 'E') ans[5]++;
        if (s[i] == 'f' || s[i] == 'F') ans[6]++;
        if (s[i] == 'g' || s[i] == 'G') ans[7]++;
        if (s[i] == 'h' || s[i] == 'H') ans[8]++;
        if (s[i] == 'i' || s[i] == 'I') ans[9]++;
        if (s[i] == 'j' || s[i] == 'J') ans[10]++;
        if (s[i] == 'k' || s[i] == 'K') ans[11]++;
        if (s[i] == 'l' || s[i] == 'L') ans[12]++;
        if (s[i] == 'm' || s[i] == 'M') ans[13]++;
        if (s[i] == 'n' || s[i] == 'N') ans[14]++;
        if (s[i] == 'o' || s[i] == 'O') ans[15]++;
        if (s[i] == 'p' || s[i] == 'P') ans[16]++;
        if (s[i] == 'q' || s[i] == 'Q') ans[17]++;
        if (s[i] == 'r' || s[i] == 'R') ans[18]++;
        if (s[i] == 's' || s[i] == 'S') ans[19]++;
        if (s[i] == 't' || s[i] == 'T') ans[20]++;
        if (s[i] == 'u' || s[i] == 'U') ans[21]++;
        if (s[i] == 'v' || s[i] == 'V') ans[22]++;
        if (s[i] == 'w' || s[i] == 'W') ans[23]++;
        if (s[i] == 'x' || s[i] == 'X') ans[24]++;
        if (s[i] == 'y' || s[i] == 'Y') ans[25]++;
        if (s[i] == 'z' || s[i] == 'Z') ans[26]++;
        i++;
    }
    for (int j = 1; j <=26; j++) printf("%d\n", ans[j]);


    return 0;
}