/*
    Программа просит ввести символ, который нужно найти, 
    а затем последовательность символов. Она обрабатывает 
    последовательность с помощью цикла и считает текущую 
    длину непрерывной последовательности. Если символ встречается, 
    программа увеличивает текущую длину и число повторений. 
    Если символ не встречается, программа обнуляет текущую длину. 
    Когда программа достигает конца последовательности, она выводит 
    максимальную длину непрерывной последовательности, состоящую из 
    введенного символа, и число повторений символа.
*/


#include <stdio.h>

int main() {
    char symbol;
    printf("Enter a symbol: ");
    scanf("%c", &symbol);
    printf("Enter an array of characters:\n");

    char array[100];                                    // setting a character array of size 100
    int length = 0;                                     // the current length of the continuous sequence
    int maxLength = 0;                                  // maximum length of a continuous sequence
    int count = 0;                                      // the number of repetitions of the symbol

    // we read characters from the console and process them
    char c;
    scanf("%c", &c);                                                 // we read the line feed after the character
    while (scanf("%c", &c) == 1 && c != '\n') {                      // we read the characters to the end of the line
        if (c == symbol) {                                           // if the character matches the one entered
            length++;                                                // increasing the current length of the sequence
            count++;                                                 // increasing the number of repetitions of the symbol
            if (length > maxLength) {                                // check if the current length is the maximum
                maxLength = length;
            }
        } else {
            length = 0;                                              // reset the current length of the sequence
        }
    }
    printf("\nMax length of sequence: %d\n", maxLength);
    printf("Number of symbol repetitions: %d\n", count);
    return 0;
}


/*
    Example of program output:
        
        Enter a symbol: a
        Enter an array of characters:
            aSFihoihfoiqwhlkashflkajslkfhakjfsaaaasjdjdjajsjfaksfhj87
        
        Max length of sequence: 4
        Number of symbol repetitions: 10
*/

// P.S. SPACES AND TABS IN THE EXAMPLE ARE OUTPUT FOR EASY READING


