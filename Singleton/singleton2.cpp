//懒汉模式--在第一次使用是才被初始化，也称延迟初始化

#include<iostream>

using namespace std;

class Singleton
{
public:
//给外界的唯一接口
    static Singleton& getInstance()
    {
        //第一次调用getInstance才初始化，离开函数仍然存在
        static Singleton instance;
        return instance;
    }
    void setDate(int data);
    int getData();
private:
    Singleton(){};
    ~Singleton(){};
    int m_data;
};

void Singleton::setDate(int data)
{
    m_data = data;
}

int Singleton::getData()
{
    return m_data;
}

int main()
{
    Singleton::getInstance().setDate(888);
    cout<<Singleton::getInstance().getData()<<endl;

    return 0;
}