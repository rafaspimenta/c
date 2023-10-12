#include <stdio.h>
#include <string.h>

int main() {
  for (int i = 1; i <= 100; i++) {
    char word[8];
    if (i % 3 == 0) {
      strcpy(word, "Fizz");
    } 
    
    if (i % 5 == 0) {
      strcat(word, "Buzz");
    } 

    word[0] != '\0' ? printf("%s\n", word) : printf("%d\n", i);
    strcpy(word, "\0");
  }
}