/** Basic Curses Dashboard */

#include <ncurses.h>

int main(int argc, char *argv[])
{
    int ch;

    initscr();

    ch = getch();
    printw("Character: %d\n", ch);

    endwin();
    return 0;
}
