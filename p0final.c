#include<stdio.h>
int main()
{
  printf("my name is Navaneeth \n");
  return 0;
}
 
 gcc -g p0final.c
 gdb a.out
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from a.out...done.
(gdb) b main
Breakpoint 1 at 0x63e: file p0final.c, line 4.
(gdb) r
Starting program: /home/runner/Navaneethgowda024-pps-test1-2/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p0final.c:4
4     printf("my name is Navaneeth \n");
(gdb) n
my name is Navaneeth 
5     return 0;
(gdb) c