Blink
=====

The blinking LED connected to the PIN-D7.

* target: AVR ATmega8-16PU
* writer(programmer): AVRISPmkII
* c compiler: avr-gcc

## Binary size
```
$ sfrp --build='avr-gcc -mmcu=atmega8'
% avr-size Main
   text	   data	    bss	    dec	    hex	filename
    784	      0	      0	    784	    310	Main

$ sfrp --build='avr-gcc -Os -mmcu=atmega8'
% avr-size Main
   text	   data	    bss	    dec	    hex	file
    400	      0	      0	    400	    190	Main
```
