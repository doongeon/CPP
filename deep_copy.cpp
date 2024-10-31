#include <string>
#include <iostream>

using namespace std;

class Data
{
public:
    int *m_pData;

    Data(int data)
    {
        this->m_pData = new int(data);
    }

    Data(Data& data)
    {
        this->m_pData = new int(data.getData());
    }

    int getData()
    {
        return *m_pData;
    }

    ~Data()
    {
        delete this->m_pData;
    }
};

int main(void)
{
    Data data_1(5);
    Data data_2(data_1);

    cout << data_1.getData() << endl;
    cout << data_2.getData() << endl;

    return 0;
}