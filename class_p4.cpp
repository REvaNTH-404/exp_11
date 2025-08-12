#include<iostream>
using namespace std;
class cube{
    public:
    int height;
    int width;
    int length;

    void input(){
    cout << "Enter value for height: ";
    cin >> height;
    cout << "Enter value for width: ";
    cin >> width;
    cout << "Enter value for length: ";
    cin >> length;
    }

int volume(){
    return height*width*length ;
    }

void disp(){
    int a =volume();
    cout<<"The volume is"<< a:
    }
};

int main(){
    cube cube1;
    cube1.input();
    cube1.disp();

}

