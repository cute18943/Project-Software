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
	cout<<"a�п�J�n�m�ߪ��^��r�ơG";	
	while(cin>>b){
		if(b<=0)
		cout<<"a�Э��s��J�G";
		else
		break;
	}	
	cout<<"a���չL�{�p�n�h�X�п�J0����\n";//***
	cout<<"a���չL�{���p�g�^��\n";//***
	cout<<"a�п�J1�}�l�G";		
	while(cin>>d){
		if(d<=0 || d>=2)
		cout<<"a�Э��s��J�G";
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
         cout<<"a�w��J"<<f<<"a��\n";
		 if(e=='0')
		 break;
		 if(a[i]==e){
		 	cout<<"a���T"<<endl;
         	g+=1;
		 }
         else{
         	cout<<"a���~"<<endl; 
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
	  cout<<"a�@���T"<<g<<"a��\n";
	  cout<<"a�@���~"<<h<<"a��\n";  
	  cout<<"a�@��J"<<c<<"a��\n";
	  cout<<"a���T�v"<<j<<"%\n";  
	  cout<<"a���~�v"<<k<<"%\n";   
    	system("pause");
	    return 0;
}
