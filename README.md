0. Factorize all the things!
Factorize as many numbers as possible into a product of two smaller numbers. The usage is factors <file> where file is a file containing natural numbers to factor. One number per line. You can assume that all lines will be valid natural numbers greater than 1. You can assume that there will be no empty line and no space before and after the valid number. The file will always end with a new line. The output format n=p*q would be one factorization per line. p and q don’t have to be prime numbers. 

You can work on the numbers of the file in the order of your choice. Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on. 
TIME LIMIT: Your program will be killed after 5 seconds if it hasn’t finished. Push all your scripts, source code, etc to your repository.

ALGORITHM
Create a file .c
Read the file from the arguments
Parse the content of the file into a variable
For each number find the corresponding factors starting from 2
Using modulo and division operation
Close the file 


1. RSA Factoring Challenge
RSA Laboratories state that: for each RSA number n, there exist prime numbers p and q such that n = p X q. The problem is to find these two primes, given only n. This task is the same as task 0, except p and q are always prime numbers and there is only one number in the files.

How far can you go in less than 5 seconds?

ALGORITHM
Create a file .py
Initialize imports
Take input from file
Apply Pollard’s Rho algorithm to factorize the RSA number quickly
Output the RSA products

