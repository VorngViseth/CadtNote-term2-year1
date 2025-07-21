#include <stdio.h>

int countA(char text[], int textCountA, int length){
    for (int i = 0; i < length; i++) {
        if (text[i] == 'a')  {
            textCountA++;
        }
    }
    return textCountA;
}

int main() {


    // Count the number of A in text 1
    char text1[4] = {'a', 'b', 'b', 'a'};
    int text1CountA = countA(text1, text1CountA, 4);


    // Count the number of A in text 2
    char text2[5] = {'b', 'a', 'a', 't', 't'};
    int text2CountA = countA(text2, text2CountA, 5);


    // Count the number of A in text 3
    char text3[6] = {'r', 'w', 'q', 'q', 'i', 'a'};
    int text3CountA = countA(text3, text3CountA, 6);


}
