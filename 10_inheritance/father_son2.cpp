#include <iostream>

using namespace std;

class Father 
{
private:
    int money;

protected:
    int room_key;

public:
    int getMoney(void)
    {
        return money;
    }
    
    void setMoney(int money)
    {
        this->money = money;
    }

    void it_skill(void)
    {
        cout<<"Father's it skill"<<endl;
    }

};

class Son : public Father 
{
private:
    int toy;
public:
    using Father::room_key;
    void playGame(void)
    {
        cout<<"Son's play game"<<endl;
        // cout<<"in playGame money : "<<money<<endl;
        int m = getMoney();
        m--;
        setMoney(m);
        room_key = 100;
        cout<<"room_key "<<room_key<<endl;
    }
};

int main(int argc, char **argv)
{
    Son s;
    s.setMoney(10);
    cout<<"money : "<<s.getMoney()<<endl;
    s.it_skill();
    s.playGame();
    cout<<"money : "<<s.getMoney()<<endl;
    s.room_key = 1;
    return 0;
}