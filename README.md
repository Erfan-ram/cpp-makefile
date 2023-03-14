# cpp-makefile
This is a simple **Makefile** guide for anyone who wants to run codes using `make` and optimize compile time each time program is run

## Run calculator
To run this project using makefile first istall make

```bash
  sudo apt install make
```
Then clone this repository to your local storage

```bash
  git clone https://github.com/Erfan-ram/cpp-makefile.git

  ╰─➤  cd cpp-makefile  

```
After cloning and open directory it's time to run project

```bash
  make
```
<br><br/>
After this a file name `calculator` will appear .you just need to run program using 
```bash
./calculator
```
**or**
```bash
make run
```
> i optimized Makefile to run the program using `make run` 
> - if you want to develop it or test your code you can locate your codes on **Makefile** line 13

also you can clean complied `.o` output files using 
```bash
make clean
```