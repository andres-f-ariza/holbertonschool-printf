
# holbertonschool-printf

The _printf program is a recreation of the C standard library function, printf, command to format and print data.


## Synopsis
The following paragraph describes how to run _printf and what command line options it takes. To use the _printf function, assuming the above .c dependencies have been installed, compile all .c files in the repository and include the header main.h in the entry point function.

```javascript
#include "main.h"

int main() {
    _printf("Hi friend,from C20!");

return (0);
}
```
The previous code can be stored in a .c file called “main”.

To compile the code, execute $ gcc *.c -o [File_name].

Output:
```javascript
$ ./[File_Name] Hi friend,from C20! $
```
## Flow chart
![image](https://user-images.githubusercontent.com/119007772/229633239-e90ec89e-f3ae-4934-9570-e2d40c4e4423.png)


## Documentation

This code defines functions that handle different format specifiers used in printf-style formatting in C.

perc_case handles the % character specifier.

Syntaxis Prototype: int _printf(const char *format, ...); The function _printf writes output to standard output. The function writes under the control of a format string that specifies how consecutive arguments (accessed via the variable-length facilities of stdarg) are converted for output. Return Value If successful return, _printf returns the number of characters printed excluding the terminating null byte used to end output to strings. But if an output error is encountered, the function returns -1 and it does not print anything. Format of the Argument String The format string is a constant character string composed of ordinary characters which are copied unchanged to the output stream. Specification cases are introduced by the character % and ends with a conversion specifier. Conversion Specifiers The conversion specifier introduced by the character % is a character that specifies the type of conversion to be applied.

The _printf function supports the following conversion specifiers: d, i The d and i argument is converted to char for decimal and integer notation.
## d, i
```javascript
int main() {
    _printf("%d\n", 9);
        }
```
Output:
```javascript
9
```
## c
```
The int argument is converted to a char.

```javascript
int main() {
    _printf("%c\n", 48);
          }
```
Output:
```javascript
0 
```
## s
Arguments are printed as a string.
```javascript
int main() {
    _printf("%s\n", "Hello, World!");
          }
```
Output:

```javascript
Hello, World!
```
## %
```
% is written. No argument is converted. The complete conversion specification is %%.
```javascript
int main(void) {
     _printf("%%\n");
           }
```
Output:
```javascript
%
```


## Bugs

No known bugs.
## Authors

- [Andrés Ariza](https://www.github.com/andres-f-ariza)
- [Jorge Ochoa](https://www.github.com/goever1)
