## Programming convention

Include order (alphanumeric sorting):

* Header file (for implementation only)
* C system header
* C++ system header
* Third-party libraries
* First-party libraries

Guidelines:

* Conforming to cpplint conventions
* Use of `this->` pointer always when specifying member properties or methods
* All conditional checks within parenthesis except booleans
* If conditionals are only a single line, they can be written without braces
* Lines wrapped to 80 characters

Naming:

| Element          | Convention      |
| ---------------- | --------------- |
| Variables        | `snake_case`    |
| Functions        | `snake_case`    |
| Filenames        | `snake_case`    |
| Classes/structs  | `PascalCase`    |
| Enum names       | `PascalCase`    |
| Macros/constants | `CONSTANT_CASE` |
