
### String
- The length of the string is always one greater than the nubmer of chracters in the string, because of null charactor(`'\0'`) at the end.
- Strings in C are stored in an array of type char.
- Can be defined like `char some_str[20];`.
- Just don't specify the size when initializating a string.
- You can assign a value to a string varaible with `strncpy` function.
- The format specifier is `%s`.
- A string is a pointer. So you don't have to put `&` when inputing a string with `scanf` function.
- To compare two strings, you should use `strcmp` function. You cannot use `==` operator.

### Constant strings
- You can create a constant by 1) `#define` header, 2) `const` keyword, or 3) `enum`.

### String functions
- `strlen`
- `strcpy` or `strncpy`
- `strcat` or `strncat`
- `strcmp` or `strncmp`
- `strchr` or `strstr`: Search a string. Returns a pointer to the first position in the string where the match is found. If not found, it just returns `NULL`.
- `strtok`: Tokenize a string given delimitor.
- `islower`, `isupper`, `isalpha`, `isdigit`
- `toupper`, `tolower`
- `atof`, `atoi`, `atol`, `atoll`
