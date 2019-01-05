#include<iostream>
#include<cstdlib>
#include<ctime>
#include<climits>
#define CHAR_MIN 'a'
#define CHAR_MAX 'z'
using namespace std;
int main(){
	int i,b,c=0,d,f,g=0,h=0,j,k;
    char a[52],e;
	cout<<"a請輸入要練習的英文字數：";	
	while(cin>>b){
		if(b<=0)
		cout<<"a請重新輸入：";
		else
		break;
	}	
	cout<<"a測試過程如要退出請輸入0結束\n";//***
	cout<<"a測試過程為小寫英文\n";//***
	cout<<"a請輸入1開始：";		
	while(cin>>d){
		if(d<=0 || d>=2)
		cout<<"a請重新輸入：";
		else
		break;
	}				
	srand(time(NULL));
        for(i=0;i<1;i++)
    {
         a[i]=rand()%(CHAR_MAX-CHAR_MIN+1)+CHAR_MIN;
         cout<<a[i]<<endl;
        while(cin>>e!=0)
    {
         f+=1;
         cout<<"a已輸入"<<f<<"a次\n";
		 if(e=='0')
		 break;
		 if(a[i]==e){
		 	cout<<"a正確"<<endl;
         	g+=1;
		 }
         else{
         	cout<<"a錯誤"<<endl; 
			 h+=1;  
		 }	
         c+=1;
		 if(c==b)
		 break;
         a[i]=rand()%(CHAR_MAX-CHAR_MIN+1)+CHAR_MIN;
         cout<<a[i]<<endl;   
    }
    	j=(c-h)*100/c;
		k=100-j;
    }   
	  cout<<"a共正確"<<g<<"a次\n";
	  cout<<"a共錯誤"<<h<<"a次\n";  
	  cout<<"a共輸入"<<c<<"a次\n";
	  cout<<"a正確率"<<j<<"%\n";  
	  cout<<"a錯誤率"<<k<<"%\n";   
    	system("pause");
	    return 0;
}
