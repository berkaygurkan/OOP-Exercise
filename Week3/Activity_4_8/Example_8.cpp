/*
In this part, we want to create a program that draws a diamond or a triangle with a size that the user selects using 
a specific character that will be entered at the keyboard.  

Here are two examples:

A triangle of size using * character:
   *        1    (n*2-1) -> number of stars per line
  ***       3    (n-1) -> number of blanks in reverse order
 *****      5
*******     7
*/

#include <iostream>

using namespace std;

void instructions();                  // This function describes how to use program and how it works
int menu();                           // This function will return a a choice to main : 1)triange 2)diaomond 3)quit
void draw_shape(int choice);          // This function calls on appropriate function on the choice to draw a shape
int get_size();                       // This function returns the size of shape
char get_char();                      // This function will ask users to select a character will be used to draw a shape
void draw_triangle(int size, char c); // This function draws a triangle of size "size" using character c
void draw_diamond(int size, char c);  // This function draws a diamond of size "size" using character c
void draw_bottom(int size, char c);   // This function draws a diamond of size "size" using character c

int main()
{
    int user_selection;
    instructions();
    user_selection = menu();
    if (user_selection != 1 && user_selection != 2)
    {
        cout << "You requested to quit, bye \n";
        return 0;
    }

    draw_shape(user_selection);
    return 0;
}

void instructions()
{
    using namespace std;

    cout << endl;
    cout << "This program will output a triangle or diamond shape drawing!!!" << endl;
    cout << "You can choose either triangle or diamond with a desired size and character" << endl;
    cout << "Program is executing now" << endl;
}

int menu()
{
    int selection;

    cout << "*******************" << endl;
    cout << "Please select your choice" << endl;
    cout << "1: for triangle,  2: for diamond, 3: for quit" << endl;
    cin >> selection;

    return selection;
}

void draw_shape(int choice)
{
    int size;
    char character;

    size = get_size();
    character = get_char();

    cout << "***************************";
    if (choice == 1)
        draw_triangle(size, character);
    else
        draw_diamond(size, character);

    cout << "***************************";
}

int get_size()
{
    int size;

    cout << endl;
    cout << "Please Enter a integer value for drawing size " << endl;
    cin >> size;

    return size;
}

char get_char()
{
    char character;

    cout << endl;
    cout << "Please give your character " << endl;
    cin >> character;

    return character;
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
    using namespace std;
    for (int i = 1; i < size; i++)
    {
        // Blanks
        for (int j = (size - i); j > 0; j--)
        {
            cout << " ";
        }

        // Characters
        for (int j = 0; j < (i * 2 - 1); j++)
        {
            cout << c;
        }

        cout << endl;
    }
}
void draw_diamond(int size, char c)
{
    draw_triangle(size, c);
    draw_bottom(size - 1, c);
}

/*
A diamon of size using * character:
   *        1    (n*2-1) -> number of stars per line
  ***       3    (n-1) -> number of blanks in reverse order
 *****      5
*******     7
 *****      5
  ***       3
   *        1
*/

void draw_bottom(int size, char c)
{
    using namespace std;
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < ((size - i) * 2 - 1); j++)
        {
            cout << c;
        }

        cout << endl;
    }
}