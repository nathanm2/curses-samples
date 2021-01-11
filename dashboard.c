/** Basic Curses Dashboard */

#include <ncurses.h>

int main(int argc, char *argv[])
{
    int ch = 0;

    initscr();

    cbreak();
    noecho();
    scrollok(stdscr, true);

    while (ch != 'q') {
        ch = getch();
        printw("Character: %d\n", ch);
        refresh();
    }
    endwin();
    return 0;
}
