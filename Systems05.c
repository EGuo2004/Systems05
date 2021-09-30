#include <stdio.h>

int main() {
  char c = 'a';
  int i = 15;
  long l = 1555;
  
  printf("\nValues\n")
  printf("char: %c\n", c);
  printf("int: %d\n", i);
  printf("long: %ld\n", l);
  
  printf("\nHex\n")
  printf("hex - char: %p\n", c);
  printf("hex - int: %p\n", i);
  printf("hex - long: %p\n", l);
  printf("\n");
  
  printf("\nDecimal\n");
  printf("decimal address - char: %d\n", c);
  printf("decimal address - int: %d\n", i);
  printf("decimal address - long: %d\n", l);
  
  //3-5
  printf("\nPointers\n")
  int *intpoint = &i;
  char *charpoint = &c;
  long *longpoint = &l;
  printf ("int = %p\n", intpoint);
  printf ("char = %p\n", charpoint);
  printf ("long = %p\n", longpoint);
  intpoint++;
  charpoint++;
  longpoint++;
  
  printf("\nChanged Pointers")
  printf ("int: %p\n", intpoint);
  printf ("char: %p\n", charpoint);
  printf ("long: %p\n", longpoint);
 //6-11
  printf("\nUnsigned Ints\n");
  unsigned int ui = 1000000;
  int *ip = &ui;
  char *cp = &ui;
  printf("ip = %p  ip points to %u\n", ip, ui);
  printf("cp = %p  cp points to %u\n", cp, ui);
  
  printf("\nHex & Decimal\n");
  printf("Hex: %x\n", ui);
  printf("Decimal: %u\n", ui);
  
  printf("\nBytes\n");
  printf("Hex: %hhx\n", cp);
  printf("Decimal: %hhx\u", cp);
  
  printf("\nIncremented");
  cp++;
  printf("Hex: %hhx\n", cp);
  printf("Decimal: %hhx\u", cp);
  
  printf("\nIncremented By 16");
  cp+= 16;
  printf("Hex: %hhx\n", cp);
  printf("Decimal: %hhx\u", cp);
  return 0;
}
