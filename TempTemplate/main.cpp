#include<iostream>

using std::cout;
using std::cin;
using std::endl;

//�S���������e��(�^��)�ł��Ă���ꍇ�Ɏg���� ���I�[�o�[���[�h�Ƃ̈Ⴂ
//�e���v���[�g�@�^���p�����[�^�ɂƂ��Ă��낢��Ȍ^�ɑΉ��ł���@�\
//�܂����Ԑ��̈��(���Ȃ��֐���A�N���X�������Ȍ^�ɑΉ���������)


//�Q�̐����̂����傫������Ԃ�
int myMax(int a, int b);

//��̒P���x�����̂����傫������Ԃ�
float myMax(float a, float b);

//��̔{���x�����̂����傫������Ԃ�
double myMax(double a, double b);

int myMax(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

float myMax(float a, float b)
{
	if (a > b)
		return a;
	else
		return b;
}

double myMax(double a, double b)
{
	if (a > b)
		return a;
	else
		return b;
}

//�֐��e���v���[�g
template <typename T>
T tMax(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}

//�N���X�e���v���[�g
template <typename T>
class Vec2
{
public:
	T x;
	T y;
	void SetX(T _x) { x = _x; }
	voh
};
//�ۑ�@�x�N�g���̒�����T�^�ŕԂ������o�֐����쐬����
//�@�@�@�x�N�g���̒������r���遄���Z�q���I�[�o�[���[�h
//�@�@�@�x�N�g���̒������ׂĒ������\�����Ė{���ɂ����Ă��邩�m�F

template<typename T>
int main()
{
	//int var1 = 20;
	//int var2 = 10;
	//int res = myMax(var1, var2);
	//int res = tMax<int>(var1, var2);
	//cout << "myMax var1 var2 :" << res << endl;
    //
	//float var3 = 20.5;
	//float var4 = 1.5;
	//
	///*float res2 = myMax(var3, var4);*/
	//float res2 = tMax<float>(var3, var4);
	//cout << "myMax var3 var4 :" << res2 << endl;
	//
	//double var5 = 0.00000062;
	//double var6 = 1e-15;
	//double res3 = myMax(var5, var6);
	//double res3 = tMax<double>(var5, var6);
	//cout << "myMax var5 var6 :" << res3 << endl;

	
	Vec2<double> v;
	v.x = 2.2;
	v.y = 3.4;
	v.PrintVec();
	return 0;
}
