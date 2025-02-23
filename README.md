# Joy-of-Pokemon-Observation


### Description of Files

**Repository Structure**
```

--->root_directory
      |----main.cpp
      |----makefile
      |----Readme.md     
``` 

**main.cpp**
  This is the main C++ source code file

 **Makefile** 
  This file is used to automate the build process. It compiles the C++ code in main.cpp to generate an executable. You can run make cmd to compile the project 

**README.md** 
  This file contains the description of the project and  overview of the project setup and usage



## Problem overview

The **Pokemon Conservation Society** is studying Pokemon species and their habitats around the globe each habitat contains a number of Pokemon species, and researchers know how many limbs each species has total number of limbs for a habitat is also known, but not the exact combination of species. The problem asks us to determine how many different ways the species limb counts can sum up to the observed total number of limbs in each habitat

## Problem statement

Given several habitats each with a total number of limbs t and several species with known limb counts we need to determine how many different ways we can combine the species to form the exact total number of limbs

### Input variables

- h The number of habitats. This is the number of test cases
- t The total number of limbs in a habitat
- s The number of species in the habitat. Each species has a specific number of limbs, represented by the next s integers
- species[] An array that holds the number of limbs for each species in the habitat
- dp[] A dynamic programming (DP) array that keeps track of the number of ways to form a specific number of limbs

## Prerequisites

Before you start, ensure that you have the following installed

- **g++ (GNU Compiler Collection)**: The program uses  g++ to compile the code
- **make** To automate the compilation process using a Makefile

If you don't have g++ or make installed you can install them via MinGW or another compiler for Windows

## Project setup

Follow these steps to set up and run the program on your local machine

### 1. Clone the repository

If you haven't already cloned the repository, do so using the following Git command

```
git clone <repository-url>
cd <repository-folder>
```

### 2. Compile the Program

Open a Command Prompt/termial in visual studio and navigate to the folder containing the program files

```
D:\folder_of_program > make
This will invoke the Makefile and use g++ to compile the .cpp
 file into an executable called program.exe.
```
### 3 Run the program
After compiling the program, you can run it by executing the following command
```
D:\folder_of_program .\program
```
### 4. Provide input
When you run the program, it will ask for  input values
Example input

```
3 6 1 3 6 2 2 3 6 3 1 2 3
```

### Output

```
1
2
7
```



![image](https://github.com/user-attachments/assets/8b7868fc-d454-481b-a1dc-7cc9e5b63d1b)


## program can be excecuted directly without make file also since its a simple structure 

This is very simple folder structure  their is no necessary of make file
u can directly compile and excecute  .cpp file in  cmd prompt directly 

```
project directory >g++ -o program main.cpp
project directory >.\program

```
![image](https://github.com/user-attachments/assets/0cb657be-fb43-43bd-a7a5-c54329ca1f36)
## Compiler selection in makefile

```
CC = g++: The Makefile specifies that we are using g++ as the C++ compiler.
CFLAGS = -Wall -std=c++11: This sets the flags for the compiler:
-Wall enables all warnings to help identify potential issues.
-std=c++11 specifies the C++11 standard to be used for compiling.


```

### Alternative method: online compiler(GDBonline compiler)

If you prefer not to set up the environment locally,
 you can simply run the program on an online compiler 
such as GDB Online Compiler 




### Notes

 For large data  input sets like

  ```
  4 1000000000 3 1 1 1 0 3 2 4 5 17 2 2 4 34 3 5 3 2
  ```

  The program may not produce an output on online compilers (e.g., GDB).



### Time taken to excecute
  -In Visual Studio Code/local pc setup 
```
          The program takes approximately **1 second** to compile, and
           for larger input  data, it  take **2 to 3 seconds**
```

## Memory usage
```

The program uses **3.5 MB** of memory during execution.
```



![image](https://github.com/user-attachments/assets/223190a3-b691-4c71-8475-0afcbf93ad2d)


```
```
### Calculation (just reference)
1)First habitat  
  Total limbs t = 6 number of species s = 1 species limbs [3]  
  We can only form the sum `6` by using two Pokémon of species with 3 limbs
  3+3 
  
  output 1
2) Secnd habitat  
  Total limbs t = 6 number of species s = 2 species limb [2, 3]  
  Possible combination to form  6 limbs
  2 + 2 + 2
  3 + 3
  
   output 2

3)Third habita  
  Total limbs t = 6 number of species s = 3 species limbs [1, 2, 3]  
  Possible combinations to form 6 limbs
   1 + 1 + 1 + 1 + 1 + 1
   2 + 2 + 2
   3 + 3
so on ..... 
 output 7

#### Output
1
2
7

