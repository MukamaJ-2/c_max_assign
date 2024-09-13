/* START
Initialize a[] = {25, 1, 99, 74, 60, 18}
Set m = a[0]
Set i = 1
WHILE i < 6
    IF a[i] > m THEN
        m = a[i]
    END IF
    i = i + 1
END WHILE
PRINT "Max:", m
END */
#include <stdio.h>

  int main() {
      int a[] = {25, 1, 99, 74, 60, 18}, m = a[0], i = 1;
      for (; i < 6; i++)
          if (a[i] > m) m = a[i];
      printf("Max: %d\n", m);
  }