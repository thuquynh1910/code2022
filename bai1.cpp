#include <iostream>
using namespace std;

struct Phanso
{
	int tuso;
	int mauso;
};
void nhapphanso(Phanso & ps)
{
	cin >> ps.tuso;
	cin >> ps.mauso;
}
void xuat(Phanso ps)
{
	if (ps.mauso == 1)
		cout << ps.tuso;
	else
		cout << ps.tuso << "/" << ps.mauso;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a*b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
void rutgon(Phanso &ps)
{
	int c = UCLN(ps.tuso, ps.mauso);
	ps.tuso = ps.tuso / c;
	ps.mauso = ps.mauso / c;
}
void sosanhphanso(Phanso x, Phanso y)
{
	if ((x.tuso*1.0f / x.mauso) > (y.tuso*1.0f / y.mauso))
		cout << "Phan so lon hon la: " << x.tuso<<"/"<< x.mauso<<endl;
	else
		cout << "Phan so lon hon la: " << y.tuso<<"/" <<y.mauso<<endl;
}
Phanso tong(Phanso x, Phanso y)
{
	Phanso tong;
	tong.tuso = x.tuso*y.mauso + y.tuso*x.mauso;
	tong.mauso = x.mauso*y.mauso;
	rutgon(tong);
	xuat(tong);
	cout << endl;
	return tong;
}
Phanso hieu(Phanso x, Phanso y)
{
	Phanso hieu;
	hieu.tuso = x.tuso*y.mauso - y.tuso*x.mauso;
	hieu.mauso = x.mauso*y.mauso;
	rutgon(hieu);
	xuat(hieu);
	cout << endl;
	return hieu;
}
Phanso tich(Phanso x, Phanso y)
{
	Phanso tich;
	tich.tuso = x.tuso*y.tuso;
	tich.mauso = x.mauso*y.mauso;
	rutgon(tich);
	xuat(tich);
	cout << endl;
	return tich;
}
Phanso thuong(Phanso x, Phanso y)
{
	Phanso thuong;
	thuong.tuso = x.tuso*y.mauso;
	thuong.mauso = x.mauso*y.tuso;
	rutgon(thuong);
	xuat(thuong);
	cout << endl;
	return thuong;
}
int main()
{
	Phanso Phanso_x, Phanso_y;
	nhapphanso(Phanso_x);
	nhapphanso(Phanso_y);
	sosanhphanso(Phanso_x, Phanso_y);
	rutgon(Phanso_x);
	tong(Phanso_x, Phanso_y);
	hieu(Phanso_x, Phanso_y);
	tich(Phanso_x, Phanso_y);
	thuong(Phanso_x, Phanso_y);
	return 0;
}