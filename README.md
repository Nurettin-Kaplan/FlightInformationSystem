
```markdown
# Flight Information System

This project is a flight information system implemented in C. It allows users to manage flight plans for passengers. Users can add, delete, view, and search flight plans through this system. The application uses a doubly linked list to store passenger information.

## Features

- **Add Flight Plan**: Add a new flight plan with passenger details.
- **Delete Flight Plan**: Remove an existing flight plan by passenger ID.
- **View All Flight Plans**: Display all registered flight plans.
- **Search Flight Plan**: Search for a specific flight plan by passenger ID.

## Requirements

- C compiler (e.g., GCC)
- Windows operating system (due to the use of Windows API)

## Installation

1. **Download the Code**

   Clone the repository from GitHub or download the source code from another source.

   ```bash
   git clone https://github.com/Nurettin-Kaplan/FlightInformationSystem.git
   ```

2. **Compile**

   To compile the code, run the following command in your terminal or command prompt:

   ```bash
   gcc -o FIS FIS.c
   ```

   Here, `FIS.c` should be the name of your source file, and `FIS` is the name of the executable file that will be created.

3. **Run**

   After a successful compilation, run the program with:

   ```bash
   ./FIS
   ```

## Usage

1. **Menu Options**

   - `1`: Add a new flight plan
   - `2`: Cancel a flight plan
   - `3`: View all flight plans
   - `4`: Search for a flight plan by ID number
   - `5`: Exit the program

   Choose an option by entering the corresponding number.

2. **Add Flight Plan**

   - Enter the passenger's ID number, name, surname, departure location, and destination.

3. **Delete Flight Plan**

   - Enter the ID number of the passenger whose flight plan you want to delete.

4. **View All Flight Plans**

   - Displays all registered flight plans.

5. **Search Flight Plan**

   - Enter the ID number of the passenger whose flight plan you want to search for.

## Files

- `FIS.c`: Source code for the flight information system.

## License

This project is licensed under the [MIT License](https://github.com/Nurettin-Kaplan/FlightInformationSystem/blob/master/LICENSE.txt).

## Contributors

- [Nurettin Kaplan](https://github.com/Nurettin-Kaplan) - Project owner and developer.

## Contact

For any questions or issues, you can reach out via [email address](nurettinkaplaan@gmail.com).
```