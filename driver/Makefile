obj-m :=simple_char_driver.o


all:
	make -C /lib/modules/4.4.0-21-generic/build M=$(PWD) modules 
	gcc simple_char_test.c -o simple_char_test

clean:
	make -C /lib/modules/4.4.0-21-generic/build M=$(PWD) clean
