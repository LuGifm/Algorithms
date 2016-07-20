#include <iostream>
// Сам алгоритм.
// Возводит в степень, за логарифм.

int pow(int x, int y) {
    if(y % 2 == 0)
        if (y == 2)
            return x*x;
        else {
            int answer = pow(x, y / 2);
            return answer * answer;
        }
    else
        return pow(x, y-1)*x;
}



int main() {
    std::cout << pow(2, 20);
}