#include <iostream>

using std::cout;
using std::endl;

bool induct() {
    bool XISANUMBEREQUALORLOWERTHAN5 = true;
    bool YISEQUALTO5 = true;
    bool EQUASIONISEQUALORLOWERTHAN25 = true;
    bool RESULT = XISANUMBEREQUALORLOWERTHAN5 &&
        YISEQUALTO5 &&
        EQUASIONISEQUALORLOWERTHAN25;
    return RESULT;
}

bool deduct() {
    bool XISNOTNOTANUMBEREQUALORLOWERTHAN5 = true;
    bool YISNOTNOTEQUALTO5 = true;
    bool EQUASIONISNOTNOTEQUALORLOWERTHAN25 = true;
    bool ANOTHERRESULT = XISNOTNOTANUMBEREQUALORLOWERTHAN5 &&
        YISNOTNOTEQUALTO5 &&
        EQUASIONISNOTNOTEQUALORLOWERTHAN25;
    return ANOTHERRESULT;
}

int main() {
    setlocale(LC_ALL, "");
    cout << "I���������� ����� = " << induct() << endl;
    cout << "����������� ����� = " << deduct() << endl;
    cout << "�������� ������ (�����) :)" << endl;
}

/*
����������� � ��� ��� ������?
��� ������� �������!
��� ���������� �� ��������,
� �������� ����� ���,
����� �� ������ ���������
������ �������, �����!
����� ����� ���� �� ����
����������� �����!
*/