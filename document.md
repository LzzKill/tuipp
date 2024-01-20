# TUIPP - TUI of Cpp

## tree

Root
├── readme.md
├── document.md
└── tuipp
├── include
│ ├── tuipp.h
│ ├── screen.h
│ └── window.h
├── source
│ ├── tuipp.cpp
│ ├── screen.cpp
│ └── window.cpp
├── module
│ ├── tuipp.cppm
│ ├── screen.cppm
└──└── window.cppm

## function

| object name    | function name | function args                                                            | function return value | note |
| -------------- | ------------- | ------------------------------------------------------------------------ | --------------------- | ---- |
| tuipp.h:screen | screen        | constexpr unsigned int ID <br> constexpr char\* Name <br> fstream stream | screen object         |      |
| tuipp.h:screen | getID         |                                                                          | ID                    |      |
| tuipp.h:screen | getName       |                                                                          | screen Name           |      |
| tuipp.h:screen | draw          |                                                                          | bool                  | draw |
| tuipp.h:screen |               |                                                                          | screen object         |      |
| tuipp.h:screen |               |                                                                          | screen object         |      |
| tuipp.h:screen |               |                                                                          | screen object         |      |
