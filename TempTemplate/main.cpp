#include<iostream>

using std::cout;
using std::cin;
using std::endl;

//全部同じ内容で(型も)できている場合に使える ←オーバーロードとの違い
//テンプレート　型をパラメータにとっていろいろな型に対応できる機能
//まぁ多態性の一つ(おなじ関数や、クラスをいろんな型に対応させられる)


//２つの整数のうち大きい方を返す
int myMax(int a, int b);

//二つの単精度実数のうち大きい方を返す
float myMax(float a, float b);

//二つの倍精度実数のうち大きい方を返す
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

//関数テンプレート
template <typename T>
T tMax(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}

//クラステンプレート
template <typename T>
class Vec2
{
public:
	T x;
	T y;
	void SetX(T _x) { x = _x; }
	voh
};
//課題　ベクトルの長さをT型で返すメンバ関数を作成する
//　　　ベクトルの長さを比較する＞演算子をオーバーロード
//　　　ベクトルの長さを比べて長い方表示して本当にあっているか確認

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
