# Focus App
WIP - How much have you worked?

An small app to track the time you have wasted doing something, tasks, work, etc.

Written with Vala for Linux!

![Focus App](https://github.com/pedrolucasp/focusapp/raw/master/dist/img/screenshot.png)

## Install [WIP]

Inside the __dist__ folder, there is a .deb package, double-click it or open a shell and type in:

`sudo dpkg -i focusapp_X.Y.Z_amd64.deb`

There is no .desktop file yet, so to open you must type `focus` on a shell

## How to build

- Install [autovala](https://github.com/rastersoft/autovala) 
- Clone the repo: `git clone https://github.com/pedrolucasp/focusapp`
- Still on the shell, type: `autovala update && cd install && cmake .. && sudo make install`

## TODO

A LOT of stuff:

- [ ] Separate into Classes and Objects - (Timer, Task, etc)
- [ ] Stop building the View manually
- [ ] Use Glade Builder to do all the View handling (this will keep code maintainable)
- [ ] I8tn
- [ ] Make-up the app (Improve view)

## Contact
[@pedrolucasp](http://www.twitter.com/pedrolucasp) 

[pedrolucasporcellis@gmail.com](mailto:pedrolucasporcellis@gmail.com)

:metal:
