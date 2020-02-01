#ifndef SAMPLEACCESSMETHOD_H
#define SAMPLEACCESSMETHOD_H


class SampleAccessMethod
{
    public:
        void setNum(int num);   // private指定されたメンバ変数に書き込む
        int getNum();           // private指定されたメンバ変数を読み取る
    private:
        int m_num;
};

#endif // SAMPLEACCESSMETHOD_H
