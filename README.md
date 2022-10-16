# printf

The printf project is a collaboration between Obakore Obukohwo and Chibueze Okorie who are Software Engineering students of Alx. The _printf function for this project imitates the actual printf function in the stdio.h library.

It's prototype is

`int _printf(const char *format, ...)`

#### Return Value

The -printf function returns the total number of characters to the stdout  excluding the null byte upon successful completion.

If an output error is encountered, a negative value of -1 is returned.

#### Specifiers

| Specifier |  Output   | 
| :-------- | :------- | 
| `c` | Character |
| `d or i` | Signed integer |
| `s` | String of characters |
| `b` | Signed binary |
| `u` | Unsigned integer |
| `o` | Unsigned octa |
| `x` | Unsigned hexadecimal |
| `X` | Unsigned hexadecimal uppercase |
| `p` | Pointer address |
| `S` | String with special chars replaced by their ASCII valueq |
| `r` | Reversed string of character |
| `R` | ROT13 Translation of string |

## Compilation

The code will be compiled this way:

`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

## Authors

- Chibueze Okorie [@izy4eze](https://www.github.com/ize4eze)

- Obakore Ogedegbe [@thezillionairedev](https://www.github.com/thezillionairedev)
