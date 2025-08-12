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
    int v;
    v = height*width*length ;
    return v;
    }
void disp(){
    int a =volume();
    cout<<"The volume is"<< a:
    }
};

int main(){
   cube cube1;
   cube1.input();
    int vol = cube1.volume() ;
    cout<<"volume:"<<vol<<endl;
    cube1.disp();

}
