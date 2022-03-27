#include<iostream>
using namespace std;
class sophuc{
	private:
		int pt,pa;
		public:
			void nhap(){
				cout<<"nhap vao phan thuc:";
			cin>>pt;
			cout<<"nhap vao phan ao:";
			cin>>pa;
			}
			void in(){
				cout<<"\nA="<<pt<<"+"<<pa<<"*j";
			}
			int getPT(){
				return pt;
			}
			int getPA(){
				return pa;
			}
};
int main(){
  sophuc a[2];
  for(int i=0;i<2;i++){
  	a[i].nhap();
  }
 
 	cout<<"hieu cua 2 so thuc va 2 so phuc la:"<<a[0].getPT() - a[1].getPT()<<"-"<<a[0].getPA() - a[1].getPA()<<"*j";
 
 
}
