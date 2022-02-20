#include <iostream>

int main() {
    int a[4][4];
    int b[4][4];
    bool res= false;

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            std::cout << "Enter next elements matrix A - ";
            std::cin >> a[i][j];
        }
    }
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            std::cout << "Enter next elements matrix B - ";
            std::cin >> b[i][j];
        }
    }
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if (a[i][j]!=b[i][j]){
                res= true;
            };
            if (res) break;
        }
        if (res) break;
    }
    if (res){
        std::cout << "Arrays are not equal !";
    }
    else {
        std::cout << "Arrays are equal !";

    }
    return 0;
}
