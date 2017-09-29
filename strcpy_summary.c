#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
      The header of strcpy() is:
      char *strcpy(char *dest, const char *src);

      A const char applies a restriction on src, where
      the pointer is mutable but what it points to is immutable.

      When designating a destination use an initialized
      or allocated piece of memory. You may not have access
      to the arbitrary piece of memory an
      uninitialized char pointer points to.
      Therefore segmentation fault = sad.

      A char array is valid because a char array allocates
      a piece of memory but remember that the pointer is
      immutable.
    */
    char *src = "hello there cool person";
    char dest1[100];
    printf("src stores: %s\n", src);
    printf("dest1 stores: %s\n", dest1);
    strcpy(dest1, src);
    printf("src now stores: %s\n", src);
    printf("dest1 now stores: %s\n", dest1);

    /*
      The header of strncpy() is:
      char *strncpy(char *dest, const char *src, size_t n);

      It is similar to strcpy() but at most n bytes are copied.

      KEEP IN MIND:
      dest of strncpy() will not have a null-terminating character
      if there isn't a null byte in first n bytes of src.

      If length of src < n, strncpy() will write
      null bytes at the end of dest so n bytes are written.
    */
    char dest2[100];
    strncpy(dest2, src, 11);
    printf("11 bytes of src are copied to dest2\n");
    printf("WARNING: dest2 is NOT NECESSARILY null-terminated!!!\n");
    printf("dest2 stores: %s\n", dest2);

    return 0;

}
