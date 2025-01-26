Number System Conversion Application

Overview

This application is a desktop GUI program built using C++ and the Qt framework. The app allows users to choose different number systems (Binary, Octal, Decimal, Hexadecimal) and navigate between interfaces to perform operations or view details related to these number systems.

Features

Main Menu

Provides a central hub with buttons to access different number system modules.

Displays a clean UI with four options:

-Binary

-Octal

-Decimal

-Hexadecimal

Individual Number System Windows

Each number system has its own window with the following features:

Clear title and labels to indicate the number system.

A "Back" button to return to the main menu.

Additional buttons for interacting with other number systems (e.g., convert or switch).

User-Friendly Design

Simple and responsive GUI.

Consistent styling with readable labels and buttons.

How It Works

Main Menu

When the application launches, the MainWindow is displayed.

The user can select one of four number systems by clicking the corresponding button.

Each button opens a new window for the selected number system and hides the main menu.

Number System Windows

Each number system window is represented by a class (Binary, Octal, Decimal, Hexadecimal).

These windows:

Display a label indicating the current number system.

Provide buttons to navigate back to the main menu.

Optionally, include buttons for additional actions or conversions (depending on further development).

Navigation

The "Back" button in each number system window brings the MainWindow back to focus using raise() and setFocus() methods.

Prerequisites

Development Environment:

Install Qt Creator or set up the Qt framework in your IDE.

Make sure qmake or CMake is configured for building Qt projects.

.Libraries:

Ensure you have the QtCore and QtWidgets modules included.

Installation

Clone the repository:

git clone https://github.com/MegaMindDaInevitable/BaseSystemCalculator.git
cd project

Open the project in Qt Creator or your IDE.

.Build the project:

Run qmake or CMake (if applicable).

Compile the application.

Run the application to launch the main menu.

.Key Files
  main.cpp:

    -Entry point of the application. Launches the MainWindow.

  mainwindow.h and mainwindow.cpp:

    -Define and implement the main menu.

    -Handle navigation to the different number system windows.

  binary.h and binary.cpp:

    -Define and implement the Binary number system interface.

  octal.h and octal.cpp:

    -Define and implement the Octal number system interface.

  decimal.h and decimal.cpp:

    -Define and implement the Decimal number system interface.

  hexadecimal.h and hexadecimal.cpp:

    -Define and implement the Hexadecimal number system interface.

Future Enhancements

Add Conversion Logic:

Implement functions to convert numbers between different bases.

Add Input Fields:

Allow users to input numbers for conversion.

Save and Load Functionality:

 

Dynamic Styling:

//

Error Handling:

//

Credits

Developed using C++ and Qt Framework.

Designed and implemented by Reitumetse Masoko.


Contact

For inquiries, reach out to:

Email: your.edwinreitu@gmail.com

GitHub: Reitumetse Masoko (MegaMindDaInevitable)

