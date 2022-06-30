//饿汉模式 指单例实例在程序运行时被立即执行初始化
#include<iostream>

using namespace std;

class Singleton
{
public:
    //给外界的唯一接口
    static Singleton& getObject(){
        return instance;
    }
    void setData(int data);
    int getData();

private:
   Singleton(){};
   ~Singleton(){};
   
   Singleton &operator=(const Singleton& obj);
   Singleton(const Singleton &obj);
   
   static Singleton instance;
   int m_data;
};

Singleton Singleton::instance;

void Singleton::setData(int data)
{
    m_data = data;
}

int Singleton::getData()
{
   return m_data;
}

int main()
{
    Singleton::getObject().setData(1111);
    cout << Singleton::getObject().getData()<<endl;
}
