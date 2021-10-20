// Drivers and Stubs

/*
Lets create a program that draws a diamond or a triangle with a size that the user selects using 
a specific character that will be entered at the keyboard.  

Here are two examples:

A triangle of size using * character:
   *        1    (n*2-1) -> number of stars per line
  ***       3    (n-1) -> number of blanks in reverse order
 *****      5
*******     7

A diamond of size 4, using *:
   *            
  ***          
 *****      
*******
 *****
  ***
   *
   * 
*/

#include <iostream>
using namespace std;

void instructions();                  // This function describes how to use program
int menu();                           // This function will return a chocie to main function : 1) triangle 2)diamond 3)quit
void draw_shape(int choice);          // This function will call on appriopriate function on choice to draw shape
int get_size();                       //this function returns shape size from user
char get_char();                      // this function returns desired character from user
void draw_triangle(int size, char c); // This function draws a triangle size of "size" using charcter c
void draw_diamond(int size, char c);  // This function draws a diamond size of "size" using charcter c
void draw_bottom(int size, char c);   // This function draws bottom part of diamond size of "size" using character c

int main()
{
    int user_selection;
    instructions();             // This functionworks
    user_selection = menu();    // This function works
    draw_shape(user_selection); // This function works
    return 0;
}

void instructions()
{
    cout << endl;
    cout << "This program will output triangle or diamond shape drawing" << endl;
    cout << "You can choose either triangle or diamond with desired size and character " << endl;
    cout << "Program is executing now" << endl;
}

int menu()
{
    int selection;

    cout << "**********" << endl;
    cout << "Please select your choice" << endl;
    cout << "1: for triangle, 2: for diamond, 3: for quit : ";
    cin >> selection;
    cout << "You have selected option " << selection;

    return selection;
}

void draw_shape(int choice)
{
    int size;
    char character;

    size = get_size();      // This function works
    character = get_char(); // This function works

    cout << "**************" << endl;
    if (choice == 1)
        draw_triangle(size, character);
    else if (choice == 2)
        draw_diamond(size, character);
    cout << endl;
    cout << "**************" << endl;
}

int get_size()
{
    int size;
    cout << endl;
    cout << "Please enter your shape size : ";
    cin >> size;
    return size;
}

char get_char()
{
    char c;
    cout << endl;
    cout << "Please enter your desried character : ";
    cin >> c;
    return c;
}

/*
A triangle of size using * character:
   *        1    (n*2-1) -> number of stars per line
  ***       3    (n-1) -> number of blanks in reverse order
 *****      5
*******     7
*/
void draw_triangle(int size, char c)
{
    cout << endl;
    // For each row
    for (int row = 1; row <= size; row++)
    {
        for (int j = 1; j <= (size - row); j++)
        {
            cout << " ";
        }
        // Draw character
        for (int i = 1; i <= row * 2 - 1; i++)
        {
            cout << c;
        }
        cout << endl;
    }
}

/*
A diamond of size 4, using *:
   *        -> Same as triangle    
  ***          
 *****      
*******

 *****       row equals to blanks size  
  ***        (n*2+1) star numbers in reverse order 
   *
*/

void draw_diamond(int size, char c)
{
    draw_triangle(size, c);
    draw_bottom(size - 1, c);
}

void draw_bottom(int size, char c)
{
    // For each row
    for (int i = 1; i <= size; i++)
    {
        // Print Blanks
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Print Characters
        for (int k = 0; k < ((size - i) * 2 + 1); k++)
        {
            cout << c;
        }
        cout << endl;
    }
}