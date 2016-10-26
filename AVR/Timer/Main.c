#include <avr/io.h>

int seg_pat(int n) {
  switch (n) {
    case 0: return 0b01111110;
    case 1: return 0b00010010;
    case 2: return 0b01011101;
    case 3: return 0b01010111;
    case 4: return 0b00110011;
    case 5: return 0b01100111;
    case 6: return 0b01101111;
    case 7: return 0b01010010;
    case 8: return 0b01111111;
    case 9: return 0b01110111;
  }
  return 0b00000001;
}

int display(int a, int b, int c, int d) {
  static unsigned char pos;
  DDRC = 0b11111111;
  DDRD = 0b11111111;
  PORTC = (1 << pos) ^ 0b00001111;
  PORTD &= 0b10000000;
  PORTD |= seg_pat(pos == 0 ? a : pos == 1 ? b : pos == 2 ? c : d);
  pos = (pos + 1) % 4;
  return 0;
}
