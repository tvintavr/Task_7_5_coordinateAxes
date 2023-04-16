#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int xmax;
    int xmin;
    int ymax;
    int ymin;
    int x;
    int y;
    std::cout<<"Выберите диапазон расположения координатных осей x и y\n";
    std::cout<<"Введите макс. неотрицательное значение x: ";
    std::cin>>xmax;
    std::cout<<"Введите мин. неположительное значение x: ";
    std::cin>>xmin;
    std::cout<<"Введите макс. неотрицательное значение y: ";
    std::cin>>ymax;
    std::cout<<"Введите мин. неположительное значение y: ";
    std::cin>>ymin;
    std::cout<<"\n";



    if ((xmax<0 || xmin>0) && (ymax<0 || ymin>0)) {
        if (xmax<0) {
            std::cout<<"Неверное значение макс. неотрицательного значения x\n";
        }
        if (xmin>0) {
            std::cout<<"Неверное значение мин. неположительного значения x\n";
        }
        if (ymax<0) {
            std::cout<<"Неверное значение макс. неотрицательного значения y\n";
        }
        if (ymin>0) {
            std::cout<<"Неверное значение мин. неположительного значения y\n";
        }
        std::cout<<"Оси не будут построены\n";
    } else if (xmax>xmin && ymax>ymin) {
        if (xmax<0) {
            std::cout<<"Неверное значение макс. неотрицательного значения x, оси y не будет видно";
        }
        if (xmin>0) {
            std::cout<<"\nНеверное значение мин. неположительного значения x, оси y не будет видно";
        }
        if (ymax<0) {
            std::cout<<"\nНеверное значение макс. неотрицательного значения y, оси x не будет видно";
        }
        if (ymin>0) {
            std::cout<<"\nНеверное значение мин. неположительного значения y, оси x не будет видно";
        }

        std::cout<<"\n";



        for (y=ymax;y>=ymin;y--) {
            for (x=xmin;x<=xmax;x++) {
                if (x==0) {
                    if (y==0) {
                        std::cout<<"+";
                    } else  if (y==ymax) {
                        std::cout<<"^";
                    } else {
                        std::cout<<"|";
                    }
                } else if (y==0) {
                    if (x==xmax) {
                        std::cout<<">";
                    } else {
                        std::cout<<"-";
                    }
                } else {
                    std::cout<<" ";
                }
            }
            std::cout<<"\n";
        }









    } else {
        std::cout<<"Проверьте правильность ввода параметров!\n";
    }



}
