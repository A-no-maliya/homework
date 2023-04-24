#include <stdio.h>

int main() {
  char word[100];                                                                      // string for storing the word
  int vowels = 0;                                                                      // number of vowel letters
  int consonants = 0;                                                                  // number of consonant letters
  
  // We ask the user to enter the word
  printf("Enter a word in Latin (without capital letters): ");
  scanf("%s", word);

  char *ptr = word;                                                                    // pointer to the first character of the word
   
  while (*ptr != '\0') {

    if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {    // If the symbol is a vowel letter
      vowels++;
    } 
    else {
      consonants++;
    }
    ptr++;                                                                            // moving on to the next character
  }

  // result
  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);
  
  return 0;
}