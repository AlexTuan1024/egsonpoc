#include <stdio.h>
unsigned int reverse_bit(unsigned int value) {
  unsigned int i, answer;
  answer = 0;
  /*
  **Keep going as long as i is nonzero.  This makes the loop
  **independent of the machine's word size, hence portable.
  **/
  for (i = 1; i != 0; i <<= 1) {
    /*
      ** Shift the old answer to make room for the next
      ** bit; then OR in a 1 if the value's last bit is
      ** set; then shift the value to its next bit.
      */
    answer <<= 1;
    if (value & 1)
      answer |= 1;
    value >>= 1;
  }
  return answer;
}
int main() {
  unsigned int ch;
  if ((ch = getchar()) != EOF)
    printf("%u\n", reverse_bit(ch));
  return 0;
}