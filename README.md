# Custom Printf Function Project

Welcome to the Custom Printf Function Project by Team [Rebecca Essandoh, Ayyoub Oumha].

## Table of Contents

- [Project Description](#project-description)
- [Tasks](#tasks)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Examples](#examples)
- [Contributors](#contributors)
- [License](#license)

## Project Description

This project is an implementation of a custom `printf` function in C. The standard `printf` function in C is a powerful tool for formatting and printing text, and this project aims to recreate some of its functionality.

### Tasks

The project consists of several tasks, including:

- Implementing basic `printf` functionality for `%c`, `%s`, and `%%` conversion specifiers.
- Adding support for `%d` and `%i` conversion specifiers.
- Implementing custom conversion specifiers such as `%b`, `%S`, `%p`, `%r`, and `%R`.
- Handling various flag characters, length modifiers, field width, precision, and more.

Each task has its own set of requirements and objectives.

## Getting Started

To get started with this project, follow these steps:

1. Clone this repository to your local machine.
2. Review the task requirements and begin implementing the `printf` function according to the task instructions.
3. Test your implementation thoroughly using different test cases.

## Usage

You can use the custom `printf` function in your C code just like the standard `printf` function. Simply include the `main.h` header file and call `_printf` with the desired format string and arguments.

```c
#include "main.h"

int main(void) {
    _printf("Hello, %s!\n", "World");
    return (0);
}
