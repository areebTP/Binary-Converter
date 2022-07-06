# Binary-Converter

This is a small project that converts binary numbers to hexadecimal, adding zeroes to the right or left(in this case it is a regular binary to hexa converter). The main purpose of this project is to remove whitespace from the requested binary and convert that into hexadecimal and decimal. This functionality is not found in many online converters.

For example 0b"1100 1111" goes to 0b"11001111". 

Another functionality is the direction. If the direction 'r'(right) is selected, 0s are added to the right side to make the number 16-bit or 32-bit. 

The diagram below illustrates this point.

<img width="750" alt="image" src="https://user-images.githubusercontent.com/92602684/177642468-c54c3306-2f67-43bc-995f-4ba24f6a2c50.png">

A more practical example would look like the following:

![image](https://user-images.githubusercontent.com/92602684/177642747-a197b98e-e85e-4b16-af44-cfbc8a25c5be.png)


Direction now changed to right:

![image](https://user-images.githubusercontent.com/92602684/177642905-06361a07-010f-48e1-a8b0-e1b04c806e6e.png)

Note the difference in the 32-bit value when the 0s are added.


![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/areebTP/Binary-Converter)


# Installation and Usage

1- Use an IDE or a text editor to compile the following files : "Converter.h" + "Converter.cpp" + "main.cpp".

2- The instructions are made explicit in the main.cpp file. Compilation requires a version of C++11 onwards. 

3- A working copy can be found in the onlineGDB compiler:
https://www.onlinegdb.com/rZVFil0HYj



