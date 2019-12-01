#include<iostream>
#include<cmath>
using namespace std;

int check(int a, int b, int c){
	if ( a<b+c && b<a+c && c<a+b ){
	return 1;
	}else return 0;
}
void type (int a, int b, int c){
		if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            cout<<"Day la tam giac vuong";
        else if(a==b==c)
            cout<<"Day la tam giac deu";
        else if(a==b || a==c || b==c)
            cout<<"Day la tam giac can";
        else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)    
            cout<<"Day la tam giac tu";
        else
            cout<<"Day la tam giac nhon";
}
float circumference(int a, int b, int c){
	return a + b + c;
}

float triangle (int a, int b, int c){
	float p = circumference(a, b, c) / 2.0;
	return sqrt(p * (p - a)*(p - b)*(p - c));
}

int main()
{
	cout<<"Nhap 3 canh tam giac: \n"; float a, b, c;
	cout<< " Nhap canh a :";cin>>a;
	cout<< " Nhap canh b :";cin>>b;
	cout<< " Nhap canh c :";cin>>c;

	if (check(a, b, c) == 1){
		type(a, b, c);
		cout<<endl;
		cout<<"Chu vi: "<<circumference(a, b, c)<<endl;
		cout<<"Dien tich: "<<triangle(a, b, c)<<endl;
	}
	else
	cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac";
}
