#include <iostream>

using namespace std;

class Father 
{
private:
    int money;

protected:
    int room_key;

public:
    int addr;
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

class Son_pub : public Father 
{
private:
    int toy;
protected:
    void test_protected(void)
    {
        cout<<"void test_protected(void)"<<endl;
    }
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
    void it_skill(void)
    {
        cout<<"Son's it skill"<<endl;
    }
};

class Son_pro : protected Father 
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

class Son_pri : private Father 
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

class GrandSon_pub : public Son_pub
{
public:
    void test(void)
    {
        room_key = 1;
        addr = 1;
    }
};

class GrandSon_pro : public Son_pro
{
public:
    void test(void)
    {
        room_key = 1;
        addr = 1;
    }
};

class GrandSon_pri : public Son_pri
{
public:
    void test(void)
    {
        room_key = 1;
        // addr = 1;
    }
};

int main(int argc, char **argv)
{
    Son_pub son_pub;
    son_pub.it_skill();

    return 0;
}