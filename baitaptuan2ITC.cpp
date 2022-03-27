#include<iostream>
using namespace std;
class khachhang{
	private:
	char hoten[30];
	struct NS{
		int ngay;  
       int thang;  
        int nam; 
	}ns;
	char cmt[10];
	char hokhau[50]; 
	public:
	void nhap(){
		cout<<"nhap ho va ten:"<<endl;
		cin.getline(hoten, 30);
		cout<<"nhap vao ho khau:"<<endl;
		cin.getline(hokhau, 50); 
		cout<<"nhap vao ngay sinh:"<<endl;
		cin>> ns.ngay;
		cout<<"nhap vao thang sinh:"<<endl;
		cin>>ns.thang;
		cout<<"nhap vao nam sinh:"<<endl;
		cin>>ns.nam;
		cout<<"nhap vao chung minh thu so:"<<endl;
		cin>>cmt; 
		 
		fflush(stdin);
	} 
	void xuat(){
		cout<<"ho va ten"<<hoten
		    <<"ngay sinh"<<ns.ngay 
			<<"thang sinh"<<ns.thang 
			<<"nam sinh"<<ns.nam 
			<<"chung minh thu so"<<cmt
			<<"ho khau "<<hokhau<<endl; 
			
			 
		
	} 
	 


}; 
int main(){
	int n;
	cout<<"nhap so luong khach hang:";
	cin>>n;
	khachhang a[n];
	fflush(stdin);
	cout<<"nhap thong tin khach hang:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"khach hang  thu:"<<i+1<<endl;
		a[i].nhap();
	}
	
	
	 
	
	
	
	
	return 0;
}
