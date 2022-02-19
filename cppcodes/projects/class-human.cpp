#include <iostream>
#include <string>

class Human{
    public:
        int age;
        std:: string name;
        void IntroduceSelf()
        {
            std::cout<<"Hello! My name is "<< name << " and I am " << age << " years old"<< std::endl;
        }
};

int main() {
    Human userInfo;
    userInfo.name = "Vincent";
    userInfo.age = 99;
    userInfo.IntroduceSelf();
    return 0;
}