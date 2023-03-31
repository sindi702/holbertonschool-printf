# READ ME
​
`printf` is a commonly used function in C programming language that allows developers to output formatted text to the console or a file. It stands for *print formatted* and is often used to display data values, messages, and other information during program execution. 
​
The function takes a string argument that specifies the format of the output and one or more additional arguments that provide the values to be displayed. The output can include text, numbers, and special characters that control the formatting of the display.
​
## Description
​
SHORT DESCRIPTION FOLLOWING THE FIGURE
​
​
- `p_char`: This function prints a single character to the console or file.
- `p_str`: This function prints a string of characters to the console or file.
- `p_int`: This function prints an integer value to the console or file.
p_int_rec: This function is a helper function that recursively converts an integer value to a string for printing.
- `p_float`: This function prints a floating-point value to the console or file.
- `_putchar`: This function is a helper function that prints a single character to the console or file.
​
## Compilation
​
To compile the code on your own machine, kindly
​
* Clone the code from this repository using `git clone ...`
* Compile the code using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf`
* To run it, use `./printf`
​
## Requirements
​
You must have a `C` compiler installed on your own machine. All tests are made on a `Ubuntu 20.04` using `gcc` as the compiler
​
## Examples
​
To run this code you can use the `main.c` file included in this project. Here's a short example 
​
```C
#include <limits.h>
#include <stdio.h>
#include "main.h"
​
int main(void)
{
    int len, len2;
 
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
 
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    
​
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
​
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    
    return (0);
}
```
​
## Testing
​
The code is tested with various floating-point numbers, integers, strings, and characters, ensuring that the output is accurate and reliable for all scenarios.
​
If you encounter a bug, or a problem, kindly let me know. 
​
## Happy coding! 
​
## Contributers
​
-[Sindi Hamataj](https://github.com/sindi702/holbertonschool-printf)

