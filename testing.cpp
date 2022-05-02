#include <iostream>
using namespace std;
class player {
    public:
    static int count;
    player(){
        count++;
    }
    ~player(){
        count-- ;
    }
    void print(){
        cout<<"The no. of players "<<count<<endl;
    }
};
int player::count;
void test(){
    player ob,ob1;
    cout<<ob.count<<endl;
}
int main(){
    player ob2,ob3;
    cout<<ob2.count<<endl;
    test();
    cout<<ob2.count;
}