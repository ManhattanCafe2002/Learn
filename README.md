# Learn
This is my first github repo
I use this repo to record my learning notes

Week 1
Day 1 
I learned how to install the Ubuntu alongside the windows system.
Then I created my first github repo, and edited it first time.
Claude told me wrong information, I wasted a hour to try creating a UEFI area.
But in the end, I realized that Ubuntu 24.04 creats UEFI area by herself.

Day 2
Trying install extensions on my VScode. 
I installed python, C++ extension pack, ruff, GitLens, ErrorLens and Code Runner.
Of course, Claude Code.
Tried to fix some problem of ubuntu system, such as can not wake the monitor after the system turns in to
sleep mode
  sudo systemctl mask sleep.target suspend.target hibernate.target hybrid-sleep.target
is useless.
just turn off the screen blank in Power settings.

Day 3 - Day 4
I got some code of the C Primer Plus from the github because I wanted to finish this book first.
Found the cmd to fix the time error that happens every time when I switch between Ubuntu and Windows:
  timedatectl set-local-rtc 1 --adjust-system-clock
I learned how to use C's struct, half of the chapt 14 of the textbook.

Day 5
Learning how to use github, created my first SSH key, even though I dont know what is ssh.

Day 6
Learned how to use struct, function ptr and bitwise operation.
dualview.c is difficult to learn.
struct box {
  unsigned int a            : 2;
  unsigned int b            : 2;
  unsigned int              : 4;
  };
  
 (1001)>> 2    (0010) or (1110) 
 (1001)<< 2    (0100)
 ~ invert
 & and 
 | or
 ^ XOR

Set a bit |=(1<<n)
Clear a bit &=~(1<<n)
Check a bit &(1<<n)
toggle a bit ^=(1<<n)

Day 7

Practiced bitwise operating. Wrote a program: practice.c.
Tried to use commit, rebase and gitlens.
rotate function is a little difficult.
It's must to consider the situation that rotate bits are longer than the size of the data.
GitLens practice;
Source Control;

Week 2

Day 1
Ch 16 useheader
I cant build useheader.c which have to link the name_str.c
I dont want to edit task.json because that will make other .c file fail to build.
In the end, I write a "Makefile" file(or "makefile", No "MakeFile")
dont foget the "Tab"!
Then use the command:
make && ./useheader

Day 2 -Day 7
Its a little busy this week, but I tried to finish C primer plus. 
Binary tree is amazing.
But I realized that I can't master every code in the  program. 
Whatever, in this stage, the array is always good.
The best part is that I learned how to use abstraction and header.

Week 3

Day 1
C++ is started.
I write my first C++ program and push it to my github.


