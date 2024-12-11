# Animal Management System

## Description

This C++ project implements an object-oriented design for managing different types of animals (Dog, Cat, Snake) with a base `Animal` class and derived specific animal classes. The system provides comprehensive functionality for creating, storing, and manipulating animal objects with various attributes.

## Key Features

- Inheritance-based animal class hierarchy
- Polymorphic behavior with virtual methods
- Overloaded input/output operators
- Support for multiple animal types
- Attribute validation and setter methods
- Dynamic object creation and management

## Class Structure

### Base Class: Animal
- Attributes: size, life span, age, color, gender
- Setter and getter methods
- Virtual `print_color()` method
- Copy assignment operator

### Derived Classes
1. **Dog**
   - Additional attributes: tail length, owner name
   - Inherited methods from Animal
   - Specialized input/output operators

2. **Cat**
   - Additional attributes: favorite toy, number of teeth
   - Inherited methods from Animal
   - Specialized input/output operators

3. **Snake**
   - Additional attributes: poisonous status, length
   - Inherited methods from Animal
   - Specialized input/output operators

## Prerequisites

- C++ Compiler (C++11 or later)
- Standard C++ Libraries

## Compilation

Compile the program using a C++ compiler:

```bash
g++ -std=c++11 animal_management.cpp -o animal_management
```

## Usage

1. Run the compiled executable
2. Input the number of animals for each type (Dog, Cat, Snake)
3. Enter details for each animal when prompted
4. The program will display the entered animal information

### Input Format Example
```
2 3 1     # Number of Dogs, Cats, Snakes
# Dog details (for each dog)
10 5 2 Brown Male 15 John
# Cat details (for each cat)
Mouse 30 8 5 White Female
# Snake details (for each snake)
true 2.5 12 10 3 Green Male
```

## Limitations

- No persistent storage mechanism
- Limited input validation
- Fixed array-based storage

## Potential Improvements

- Implement dynamic memory management
- Add more comprehensive input validation
- Create a more flexible storage mechanism
- Implement additional animal-specific methods

## Contributing

Contributions, issues, and feature requests are welcome. Feel free to check [issues page](your-github-repo-link/issues).


## Author

Salman Hashemi
