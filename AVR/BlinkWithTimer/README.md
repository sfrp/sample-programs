Blink with Timer
================

The blinking LED connected to the PIN-D7.
The blinking duration is controlled by timer.

* target: AVR ATmega8-16PU
* writer(programmer): AVRISPmkII
* c compiler: avr-gcc


With `-Os` (code size optimization) option:
```
$ sfrp -v
sfrp 1.2.1
$ sfrp Main --build='avr-gcc -Os -mmcu=atmega8'
$ avr-size Main
   text	   data	    bss	    dec	    hex	filename
    794	      2	     14	    810	    32a	Main
```

Without `-Os` option:
```
$ sfrp -v
sfrp 1.2.1
$ sfrp Main --build='avr-gcc -mmcu=atmega8'
$ avr-size Main
   text	   data	    bss	    dec	    hex	filename
   1572	      2	     14	   1588	    634	Main
```
