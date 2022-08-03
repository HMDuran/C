/**
 * @file ExerciseTwo.c
 * @author HMDuran
 * @brief program will identify if the alphabet is vowel or constant.
 * @version 0.1
 * @date 2022-08-01
 *
 * @copyright Copyright (c) 2022
 *
 */

/* header files */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
  /* declaration of variables */
  char letter;

  /* asking user to enter an alphabet  */
  printf("\nEnter an Alphabet: ");
  scanf("%c", &letter);

  /* evaluate if the variable letter is a vowel */
  if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' ||
      letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' ||
      letter == 'O' || letter == 'U') {
    printf("\n%c is a VOWEL.", letter);
  } else {
    printf("\n%c is a CONSONANT.", letter);
  }

  return 0;
}