/*

    Annoucements:

    - Before the test, check your attendance and remove everything from the desk except for the laptop for the test.

    - DO NOT leave the classroom before the finish time. (Do your best and never give up!)

    - You can refer to the following materials
     . Lecture slides and homework slides
     . The source codes provided in this course
     . Your own homework solutions and personal notes written by yourself.
    
    - The following behaviors are cheating:
     . Referring to other documents not written by yourself.
     . Communicating with others or connecting to the Internet (except for the problem download and solution submission.)
     . Sharing solutions, discussing or collaborating with others, before 10/25 01:30 AM (due to the delayed submission period)

    - The use of any other electronic device, such as a phone, tablet, iPad, dual monitor, is NOT allowed.

    - Solve the problem with VS-Code and gcc (incl. MinGW).


    Read a hexadecimal string composed of characters in '0'~'9', 'A'~'F', or 'a'~'f' using "%s".
    Then, convert each hexadecimal digit character into integer and represent it using '#', as following example.
    (The horizontal coordinate of '#' should be the integer value of the hexadecimal digit.)
    The output should be as close to the example as possible.

    DO NOT use the console functions such as gotoxy().
    Make your solution display output as simillar to the examples as possible.
    DO NOT modify the existing code unnecessarily.

    Example)
        Input a hexadecimal string: 301249ABcF  // "301249ABcF" is the user's input
        String lenth = 10
            0123456789ABCDEF                    // ruler
         3:    #                                // position of '#' indicates the value of each digit
         0: #
         1:  #
         2:   #
         4:     #
         9:          #      
        10:           #     
        11:            #    
        12:             #   
        15:                #

    Example)
        Input a hexadecimal number: DEFabc7894561230    // "DEFabc7894561230" is the user's input
        String lenth = 16
            0123456789ABCDEF                    // ruler
        13:              #
        14:               #
        15:                #
        10:           #
        11:            #
        12:             #
         7:        #
         8:         #
         9:          #
         4:     #
         5:      #
         6:       #
         1:  #
         2:   #
         3:    #
         0: #

*/

// My previous solution was perfect, so I didn't modify it 

#include <stdio.h>

void GetStringLength(char string[], int *n);
int HexToDec(char h);

int main()
{
    char hex_str[128] = { 0 };
    printf("Input a hexadecimal string: ");
    scanf("%s", hex_str);

    int len = 0;
    GetStringLength(hex_str, &len);
    printf("String length = %d\n", len);

    // TO DO: Display a ruler as the example
    printf("     0123456789ABCDEF\n");
    // Repeat for each hexadecimal digit
    for(int i = 0; i < len; i++){
        /* TO DO: represent each digit by the position of '#'
            Algorithm
                Convert the hexadecimal digit into integer. (implement and use HexToDec())
                    e.g., '0' -> 0, '1' -> 1, ..., '9' -> 9, 'A' -> 10, 'B' -> 11, ..., 'F' -> 15, 'a' -> 10, ..., 'f' -> 15, etc.
                Display the integer followed by a colon (": ")
                Print the space character (' ') as many as the digit value. Then, print '#'.
        */
       int hex = HexToDec(hex_str[i]);
       printf("%3d: ", hex);
       for(int j = 0; j < hex; j++){
            printf(" ");
       }
       printf("#\n");
    }

    return 0;
}

void GetStringLength(char string[], int *n)
// Stores the length of string in *n
// TO DO: implement this function
{
    // TO DO: write your code here
    int i=0;
    while(string[i] != '\0'){
        (*n)++;
        i++;
    }
}

int HexToDec(char h)
// convert a hexadecimal character into the corresponding integer value
// TO DO: implement this function
{
    /*
        if h is '0', return 0
        if h is '1', return 1
        ...
        if h is '9', return 9

        if h is 'A' or 'a', return 10
        if h is 'B' or 'b', return 11
        ...
        if h is 'F' or 'f', return 15

        otherwise, return -1

        Hint) this function can be efficiently implemented with three if-statements
    */

    // TO DO: write your code here
    if(h >= '0' && h <= '9'){
        return h - '0';
    }
    if((h >= 'a' && h <= 'f')){
        return h - 'a' + 10;
    }
    if((h >= 'A' && h <= 'F')){
        return h - 'A' + 10;
    }
    else{
        return -1;
    }
}
