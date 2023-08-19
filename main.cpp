#include <iostream>
#include <windows.h>

int main() {
    int numWindows = 1000; // Количество окон командной строки, которые нужно открыть

    for (int i = 0; i < numWindows; i++) {
        std::string cmd = "start cmd.exe /k echo YOU HACKED??"; // Команда для открытия окна командной строки и вывода сообщения
        system(cmd.c_str()); // Запуск команды с помощью системной функции
    }

    return 0;
}
