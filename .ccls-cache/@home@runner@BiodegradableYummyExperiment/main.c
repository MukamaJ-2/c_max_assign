/*
JOSEPH MUKAMA S23B23/036  B24267

Initialize a[] = {55, 1, 99, 74, 60, 18}
Set m = a[0]
Set i = 1
while i < 6
    if a[i] > m then
        m = a[i]
    end if
    i = i + 1
end while
print "Max:", m

 */
#include <stdio.h>

int main() {
  int a[] = {55, 1, 99, 74, 60, 18}, m = a[0], i = 1;
  for (; i < 6; i++)
    if (a[i] > m)
      m = a[i];
  printf("Max: %d\n", m);
}