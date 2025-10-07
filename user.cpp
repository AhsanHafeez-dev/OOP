#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;
class user
{
public:
    int id;
    static int next_id; // must initialize static variable imediately after class defination
    static int next_user_id();
    int get_id();

    user();
};
int user::next_id = 0;

int main(){

    user u;
    user v;
    cout << u.get_id() << endl;
    cout << v.get_id() << endl;
    return 0;
}

user::user()
{
    id = user::next_user_id();
}
int user::next_user_id()
{
    user::next_id++;
    return user::next_id;
}
int user::get_id()
{
    return id;
}