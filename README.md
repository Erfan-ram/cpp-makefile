# cpp-makefile
This is a simple **Makefile** guide for anyone who wants to run codes using `make` and optimize compile time each time program is run

# Run calculator

First clone this repository to your local storage

```bash
  git clone https://github.com/Erfan-ram/cpp-makefile.git

  ╰─➤  cd cpp-makefile

```
you would have 2 choices to continue
- [Using makefile](#makefile) :sunglasses:
- [Using code](#quick-run) :monocle_face:
<br><br/>
# Makefile <a id="makefile"></a>
To run this project using makefile first istall make

```bash
  sudo apt install make
```
After cloning and open directory it's time to run project

```bash
  make
```

After this a file name `calculator` will appear . you just need to run program using 
```bash
make run
```
**or**
```bash
./calculator
```
> i optimized Makefile to run the program using `make run` 
> - if you want to develop it or test your code you can locate your codes on **Makefile** line 19

also you can clean complied `.o` output files using 
```bash
make clean
```
<br><br/>
# Quick run <a id="quick-run"></a>
you can run below code without being involved with make :smiling_face_with_tear:
```bash
g++ -std=c++20 calculator.cpp src/add-mine.cpp src/mul-dev.cpp
./calculator
```