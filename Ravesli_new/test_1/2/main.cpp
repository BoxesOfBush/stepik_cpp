#include <iostream>
int readNumber();
void writeAnswer(int x);


int main(){
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x+y);
}
