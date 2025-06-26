# CS2-TextUtility-Amr
in this project we are building a text utility libirary consists prebuild functions. 
The goal is to provide basic string processing tools such as word counting, reversing strings, checking for palindromes, converting case, counting vowels/consonants, substring occurrences, and encrypting text using the Vigenère cipher.
also the project modularized using multiple files and managed using a build system like cmake.

-------
To build the library, you typically create a separate folder for the build (so that all the compiled files don’t mix with your source files), and then you let CMake configure everything based on the CMakeLists.txt file that comes with the project. After that, you can compile the project using a single command.

Once it's built, the project gives you a working executable that runs some test cases showing how each function works. The actual library functions are implemented in .cpp files and declared in a header file (text_utility.h), so if you want to use them in your own programs, you can just include the header and link the compiled object files or library

