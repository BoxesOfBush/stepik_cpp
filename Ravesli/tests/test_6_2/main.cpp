#include <iostream>
#include <string>

struct studentInfo{
    std::string name;
    int grade;
};

void sort(studentInfo *students, int length){
    for (int startIndex = 0; startIndex < length - 1; ++startIndex)
    {
        int smallestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            if (students[currentIndex].grade > students[smallestIndex].grade)
                smallestIndex = currentIndex;
        }
        std::swap(students[startIndex].grade, students[smallestIndex].grade);
    }
}

int main(){
    int numberOfstudents = 0;
    do{
        std::cout << "How many student do you want to enter? ";
        std::cin >> numberOfstudents;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767,'\n'); //
        }

    }while (numberOfstudents <= 0);

    studentInfo *student = new studentInfo[numberOfstudents];

    for (int index = 0; index < numberOfstudents; ++index){
        std::cout << "Enter the name of student: " << "\n";
        std::cin >> student[index].name;
        std::cout << "Enter the grade of " << student[index].name << "\n";
        std::cin >> student[index].grade;
    }

    sort(student, numberOfstudents);
    for (int index = 0; index < numberOfstudents; ++index){
        std::cout << student[index].name << " has " << student[index].grade << "\n";
    }

    delete [] student;
    student = nullptr;
}
