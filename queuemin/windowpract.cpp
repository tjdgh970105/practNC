//20191555

#include <ncurses.h>
#include <iostream>

int main()
{
    int row, col;

    for (int i = 0; i<3; i++){
        std::cin >> row >> col;

        initscr();
        resize_term(row, col);
        mvprintw(3, 4, "Any String! Just for practice!");

        refresh();
        getch();
    }
    endwin();

    return 0;
}
