#include "bit_array.h"
#include <limits.h>
#include <stdio.h>
unsigned character_offset(unsigned bit_number) { return bit_number / CHAR_BIT; }
unsigned bit_offset(unsigned bit_number) { return bit_number % CHAR_BIT; }
void set_bit(char bit_array[], unsigned bit_number) {
  /*
  ** During the operator priority,shifting will be done before bitwise 'OR'.
  */
  bit_array[character_offset(bit_number)] |= 1 << bit_offset(bit_number);
}
void clear_bit(char bit_array[], unsigned bit_number) {
  bit_array[character_offset(bit_number)] &= ~(1 << bit_offset(bit_number));
}