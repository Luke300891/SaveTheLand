/* Script per la configurazione del GPIO di uscita su Raspberry.
   Creazione cartella GPIOxx */

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <sys/select.h>

void main() {
	int i = 0;
	system("echo 17 > /sys/class/gpio/export");
	sleep(1);
	system("echo ""out"" > /sys/class/gpio/gpio17/value);
	i++;
	
	if (i == 1) {
		
		exit(0);
		
	}
	else {
		
		printf("Error: GPIOxx not exported");
	}
}