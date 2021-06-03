# libft_42
this is my first project inside the 42sp, is an incredible experience create my own library have as base the library libc, and some additional functions. All files that are inside this project are made by me and some friends from 42sp.

Inside this library, we have the functions, a header with the prototyping of the functions and a structure that I use in the bonus part, and a Makefile that compile and verify my code.

### This library is separate for 3 parts:

* ## PART 1
  >In this part, i re-code some functions of libc, have as base only the manual of each function.<br />
  >I dont use any external function (only malloc to ft_calloc and strdub)  
  >Functions of part 1:
  
  | Function | Description |
  | ---- | :---- |
  | [ft_memset](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_memset.c) | Population the first n bytes of string ptr with char x |
  | [ft_bzero](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_bzero.c) | Transform, in my string s, n bytes in \0  |
  | [ft_memccpy](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_memccpy.c) | Copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found.\nIf the memory areas overlap, the results are undefined. |
  | [ft_memmove](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_memmove.c) | Copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes insrc are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest. |
  | [ft_memchr](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_memchr.c) | Scans  the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char. |
  | [ft_memcmp](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_memcmp.c) | Compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2. |
  | [ft_strlen](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strlen.c) | Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0'). |
  | [ft_strlcpy](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strlcpy.c) | Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. |
  | [ft_strlcat](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strlcat.c) | Appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the re‐sult. |
  | [ft_strchr](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strchr.c) | Returns a pointer to the first occurrence of the character c in the string s. |
  | [ft_strrchr](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strrchr.c) | Returns a pointer to the last occurrence of the character c in the string s. |
  | [ft_strnstr](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strnstr.c) | Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.  Characters that appear after a ‘\0’ character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern. |
  | [ft_strncmp](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strncmp.c) | Compare the first n bytes of two strings (s1, s2) |
  | [ft_atoi](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_atoi.c) | converts the initial portion of the string pointed to by nptr to int.  The behavior is the same as |
  | [ft_isalpha](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_isalpha.c) | Return a number diferent of 0 if my c is alphabetic |
  | [ft_isdigit](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_isdigit.c) | Return a number diferent of 0 if my c is numeric |
  | [ft_isalnum](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_isalnum.c) | Return a number diferent of 0 if my c is alphabet or numeric  |
  | [ft_isascii](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_isascii.c) | Return a number diferent of 0 if my c is in ASCII table |
  | [ft_isprint](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_isprint.c) | Return a number diferent of 0 if my c is printable |
  | [ft_toupper](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_toupper.c) | Transform the char 'c' in uppercase if my c is a lower case. Return c if is not lower case |
  | [ft_tolower](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_tolower.c) | Transform the char 'c' in lowercase if my c is a upper case. Return c if is not upper case |
  | [ft_calloc](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_calloc.c) | Allocates size bytes and returns a pointer to the allocated memory.  The memory is not initialized.  If size is 0, then malloc() re-turns either NULL, or a unique pointer value that can later be successfully passed to free(). |
  | [ft_strdup](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strdup.c) | Returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with malloc(3), and can be freed with free(3). |

* ## PART 2
  >This part are additional functions, they are not included in the libc library, or they are, but on a different form. In building these functions, I used some functions above.<br />
  >In this part, i can use the malloc to all functions.<br />
  >Functions of part 2:

  | Function | Description |
  | ---- | :---- |
  | [ft_substr](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_substr.c) | Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
  | [ft_strjoin](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strjoin.c) | Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |
  | [ft_strtrim](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strtrim.c) | Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |
  | [ft_split](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_split.c) | Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer. |
  | [ft_itoa](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_itoa.c) | Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled. |
  | [ft_strmapi](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_strmapi.c) | Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’. |
  | [ft_putchar_fd](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_putchar_fd.c) | Outputs the character ’c’ to the given file descriptor.|
  | [ft_putstr_fd](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_putstr_fd.c) | Outputs the string ’s’ to the given file descriptor. |
  | [ft_putendl_fd](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_putendl_fd.c) | Outputs the string ’s’ to the given file descriptor, followed by a newline. |
  | [ft_putnbr_fd](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_putnbr_fd.c) | Outputs the integer ’n’ to the given file descriptor. |
  
  * ## PART 3
   >This part is the bonus functions, i use a struct that is inside the libft.h, and this functions work manipulating the lists of my struct. I use some functions of last 2 parts, always making the code without external functions.<br />
   >Functions of part 3:
 
  | Function | Description |
  | ---- | :---- |
  | [ft_lstnew](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_lstnew.c) | Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL. |
  | [ft_lstadd_front](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_lstadd_front.c) | Adds the element ’new’ at the beginning of the list.|
  | [ft_lstsize](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_lstsize.c) | Counts the number of elements in a list. |
  | [ft_lstlast](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_lstlast.c) | Returns the last element of the list. |
  | [ft_lstadd_back](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_lstadd_back.c) | Adds the element ’new’ at the end of the list. |
  | [ft_lstdelone](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_lstdelone.c) | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed. |
  | [ft_lstclear](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_lstclear.c) | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed. |
  | [ft_lstiter](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_lstiter.c) | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. |
  | [ft_lstmap](https://github.com/jhonatan229/libft_42/blob/main/libft/ft_lstmap.c) | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed. |
  
