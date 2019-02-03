#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<climits>
#include<windows.h>
#include<cctype>
using namespace std;

//混合 

int bs(){
	
	int b,c=0,d,f=0,g=0,h=0,j=0,k=0,n;
    char a[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},e;
    char *m=a;
    
    cout<<"請輸入要練習的英文字數：";	
	while(cin>>b){
		if(b<=0)
		cout<<"請重新輸入：";
		else
		break;
	}	
    
	cout<<"測試過程如要退出請輸入0結束\n";
	cout<<"請輸入1開始：";		
		while(cin>>d){
		int r=d;
		if(isdigit(d)==false){
			cout<<"請重新輸入：";
		}		
		else if(d=='1')
		{
			break;
		}
		else if(r<=0 || r>=2){
			cout<<"請重新輸入：";
		}				
	}						
	srand(time(NULL));
         n=rand()%52;
         cout<<*(m+n)<<endl;
        while(e = getche())
    {
		 cout<<endl;
		  if(e=='0'){
		 	 cout<<"\n結束！\n";
	  		 break;  
		 }
		 if(*(m+n)==e){
		 	cout<<"正確"<<endl;
         	g+=1;
		 }
         else{
         	cout<<"錯誤"<<endl; 
			 h+=1;  
		 }
		 
		 f+=1;
         cout<<"已輸入"<<f<<"次\n";
         
         c+=1;
		 if(c==b){
		 	cout<<"\n結束！\n";
		 	break;
		 }
         n=rand()%52;
         cout<<*(m+n)<<endl;
    }
    	j=(c-h)*100/c;
		k=100-j;  
	  cout<<"共正確"<<g<<"次\n";
	  cout<<"共錯誤"<<h<<"次\n";  
	  cout<<"共輸入"<<c<<"次\n";
	  cout<<"正確率"<<j<<"%\n";  
	  cout<<"錯誤率"<<k<<"%\n";   
    	system("pause");
	
	return 0;
} 

//大寫 

int big(){
	
	int b,c=0,d,f=0,g=0,h=0,j=0,k=0,n;
    char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},e;
    char *m=a;
    
   	cout<<"請輸入要練習的英文字數：";	
	while(cin>>b){
		if(b<=0)
		cout<<"請重新輸入：";
		else
		break;
	}	
    
	cout<<"測試過程如要退出請輸入0結束\n";
	cout<<"請輸入1開始：";		
		while(cin>>d){
		int r=d;
		if(isdigit(d)==false){
			cout<<"請重新輸入：";
		}		
		else if(d=='1')
		{
			break;
		}
		else if(r<=0 || r>=2){
			cout<<"請重新輸入：";
		}				
	}						
	srand(time(NULL));
         n=rand()%26;
         cout<<*(m+n)<<endl;
        while(e = getche())
    {
		 cout<<endl;
		  if(e=='0'){
		 	 cout<<"\n結束！\n";
	  		 break;  
		 }
		 if(*(m+n)==e){
		 	cout<<"正確"<<endl;
         	g+=1;
		 }
         else{
         	cout<<"錯誤"<<endl; 
			 h+=1;  
		 }	
		 
		 f+=1;
         cout<<"已輸入"<<f<<"次\n";
         
         c+=1;
		 if(c==b){
		 	cout<<"\n結束\n";
		 	break;
		 }
         n=rand()%26;
         cout<<*(m+n)<<endl;
    }
    	j=(c-h)*100/c;
		k=100-j;  
	  cout<<"共正確"<<g<<"次\n";
	  cout<<"共錯誤"<<h<<"次\n";  
	  cout<<"共輸入"<<c<<"次\n";
	  cout<<"正確率"<<j<<"%\n";  
	  cout<<"錯誤率"<<k<<"%\n";   
    	system("pause");
	
	return 0;
} 

//小寫 

int main(){
	system("title 英文打字練習軟體");
	int b,c=0,f=0,g=0,h=0,j=0,k=0,n;
    char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},e,p,d;
    char *m=a;
    
	cout<<"請輸入練習模式1小寫2大寫3混合：";
		while(cin>>p){
		int q=p;	
		if(isdigit(p)<=0 || isdigit(p)>=4){
			cout<<"請重新輸入：";
		}		
		else if(p=='1')
		{
			break;
		}
		else if(p=='2')
		{	
			big();
			break;
		}
		else if(p=='3'){
			bs();
			break;
		}else if(q<=0 || q>=4){
			cout<<"請重新輸入：";
		}	
	}
	
	cout<<"請輸入要練習的英文字數：";	
	while(cin>>b){
		if(b<=0)
		cout<<"請重新輸入：";
		else
		break;
	}	
	
	cout<<"測試過程如要退出請輸入0結束\n";
	cout<<"請輸入1開始：";		
	while(cin>>d){
		int r=d;
		if(isdigit(d)==false){
			cout<<"請重新輸入：";
		}		
		else if(d=='1')
		{
			break;
		}
		else if(r<=0 || r>=2){
			cout<<"請重新輸入：";
		}				
	}				
	srand(time(NULL));
         n=rand()%26;
         cout<<*(m+n)<<endl;
         
        while(e = getche())
    {
     	 cout<<endl;	 
		  	 
		 if(e=='0'){
		 	 cout<<"\n結束！\n";
	  		 break;  
		 }
		 
		 if(*(m+n)==e){
		 	cout<<"正確"<<endl;
         	g+=1;
		 }
         else{
         	cout<<"錯誤"<<endl; 
			 h+=1;  
		 }
		 f+=1;
         cout<<"已輸入"<<f<<"次\n";
         
         c+=1;
		 if(c==b){
		 	cout<<"\n結束！\n";
		 	break;
		 }

         n=rand()%26;
         cout<<*(m+n)<<endl;
    }
    	j=(c-h)*100/c;
		k=100-j;
      
	  cout<<"\n共正確"<<g<<"次\n";
	  cout<<"共錯誤"<<h<<"次\n";  
	  cout<<"共輸入"<<c<<"次\n";
	  cout<<"正確率"<<j<<"%\n";  
	  cout<<"錯誤率"<<k<<"%\n";   
    	system("pause");
	    return 0;
}


