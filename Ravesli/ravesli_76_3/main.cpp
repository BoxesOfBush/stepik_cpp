#include <iostream>

int main()
{
    int students[] = { 73, 85, 84, 44, 78};
    const int numStudents = sizeof(students) / sizeof(students[0]);

    int maxIndex = 0; // отслеживаем самую высокую оценку

    for (int person = 0; person < numStudents; ++person)
        if (students[person] > students[maxIndex])
            maxIndex = person;


    std::cout << "The best score was " << students[maxIndex] << '\n';

    return 0;
}
