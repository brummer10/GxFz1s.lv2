# GxFz1s.lv2
Vintage Fuzz Pedal simulation


![GxFz1s](https://raw.githubusercontent.com/brummer10/GxFz1s.lv2/master/GxFz1s.png)


###### BUILD DEPENDENCY’S 

the following packages are needed to build GxFz1s:

- libc6-dev
- libcairo2-dev
- libx11-dev
- x11proto-dev
- lv2-dev

note that those packages could have different, but similar names 
on different distributions. There is no configure script, 
make will simply fail when one of those packages isn't found.

## BUILD 

$ make install

will install into ~/.lv2

$ sudo make install

will install into /usr/lib/lv2

