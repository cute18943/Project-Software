#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<climits>
#include<windows.h>
#include<cctype>
using namespace std;

//�V�X 

int bs(){
	
	int b,c=0,d,f=0,g=0,h=0,j=0,k=0,n;
    char a[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},e;
    char *m=a;
    
    cout<<"�п�J�n�m�ߪ��^��r�ơG";	
	while(cin>>b){
		if(b<=0)
		cout<<"�Э��s��J�G";
		else
		break;
	}	
    
	cout<<"���չL�{�p�n�h�X�п�J0����\n";
	cout<<"�п�J1�}�l�G";		
		while(cin>>d){
		int r=d;
		if(isdigit(d)==false){
			cout<<"�Э��s��J�G";
		}		
		else if(d=='1')
		{
			break;
		}
		else if(r<=0 || r>=2){
			cout<<"�Э��s��J�G";
		}				
	}						
	srand(time(NULL));
         n=rand()%52;
         cout<<*(m+n)<<endl;
        while(e = getche())
    {
		 cout<<endl;
		  if(e=='0'){
		 	 cout<<"\n�����I\n";
	  		 break;  
		 }
		 if(*(m+n)==e){
		 	cout<<"���T"<<endl;
         	g+=1;
		 }
         else{
         	cout<<"���~"<<endl; 
			 h+=1;  
		 }
		 
		 f+=1;
         cout<<"�w��J"<<f<<"��\n";
         
         c+=1;
		 if(c==b){
		 	cout<<"\n�����I\n";
		 	break;
		 }
         n=rand()%52;
         cout<<*(m+n)<<endl;
    }
    	j=(c-h)*100/c;
		k=100-j;  
	  cout<<"�@���T"<<g<<"��\n";
	  cout<<"�@���~"<<h<<"��\n";  
	  cout<<"�@��J"<<c<<"��\n";
	  cout<<"���T�v"<<j<<"%\n";  
	  cout<<"���~�v"<<k<<"%\n";   
    	system("pause");
	
	return 0;
} 

//�j�g 

int big(){
	
	int b,c=0,d,f=0,g=0,h=0,j=0,k=0,n;
    char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},e;
    char *m=a;
    
   	cout<<"�п�J�n�m�ߪ��^��r�ơG";	
	while(cin>>b){
		if(b<=0)
		cout<<"�Э��s��J�G";
		else
		break;
	}	
    
	cout<<"���չL�{�p�n�h�X�п�J0����\n";
	cout<<"�п�J1�}�l�G";		
		while(cin>>d){
		int r=d;
		if(isdigit(d)==false){
			cout<<"�Э��s��J�G";
		}		
		else if(d=='1')
		{
			break;
		}
		else if(r<=0 || r>=2){
			cout<<"�Э��s��J�G";
		}				
	}						
	srand(time(NULL));
         n=rand()%26;
         cout<<*(m+n)<<endl;
        while(e = getche())
    {
		 cout<<endl;
		  if(e=='0'){
		 	 cout<<"\n�����I\n";
	  		 break;  
		 }
		 if(*(m+n)==e){
		 	cout<<"���T"<<endl;
         	g+=1;
		 }
         else{
         	cout<<"���~"<<endl; 
			 h+=1;  
		 }	
		 
		 f+=1;
         cout<<"�w��J"<<f<<"��\n";
         
         c+=1;
		 if(c==b){
		 	cout<<"\n����\n";
		 	break;
		 }
         n=rand()%26;
         cout<<*(m+n)<<endl;
    }
    	j=(c-h)*100/c;
		k=100-j;  
	  cout<<"�@���T"<<g<<"��\n";
	  cout<<"�@���~"<<h<<"��\n";  
	  cout<<"�@��J"<<c<<"��\n";
	  cout<<"���T�v"<<j<<"%\n";  
	  cout<<"���~�v"<<k<<"%\n";   
    	system("pause");
	
	return 0;
} 

//�p�g 

int main(){
	system("title �^�奴�r�m�߳n��");
	int b,c=0,f=0,g=0,h=0,j=0,k=0,n;
    char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},e,p,d;
    char *m=a;
    
	cout<<"�п�J�m�߼Ҧ�1�p�g2�j�g3�V�X�G";
		while(cin>>p){
		int q=p;	
		if(isdigit(p)<=0 || isdigit(p)>=4){
			cout<<"�Э��s��J�G";
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
			cout<<"�Э��s��J�G";
		}	
	}
	
	cout<<"�п�J�n�m�ߪ��^��r�ơG";	
	while(cin>>b){
		if(b<=0)
		cout<<"�Э��s��J�G";
		else
		break;
	}	
	
	cout<<"���չL�{�p�n�h�X�п�J0����\n";
	cout<<"�п�J1�}�l�G";		
	while(cin>>d){
		int r=d;
		if(isdigit(d)==false){
			cout<<"�Э��s��J�G";
		}		
		else if(d=='1')
		{
			break;
		}
		else if(r<=0 || r>=2){
			cout<<"�Э��s��J�G";
		}				
	}				
	srand(time(NULL));
         n=rand()%26;
         cout<<*(m+n)<<endl;
         
        while(e = getche())
    {
     	 cout<<endl;	 
		  	 
		 if(e=='0'){
		 	 cout<<"\n�����I\n";
	  		 break;  
		 }
		 
		 if(*(m+n)==e){
		 	cout<<"���T"<<endl;
         	g+=1;
		 }
         else{
         	cout<<"���~"<<endl; 
			 h+=1;  
		 }
		 f+=1;
         cout<<"�w��J"<<f<<"��\n";
         
         c+=1;
		 if(c==b){
		 	cout<<"\n�����I\n";
		 	break;
		 }

         n=rand()%26;
         cout<<*(m+n)<<endl;
    }
    	j=(c-h)*100/c;
		k=100-j;
      
	  cout<<"\n�@���T"<<g<<"��\n";
	  cout<<"�@���~"<<h<<"��\n";  
	  cout<<"�@��J"<<c<<"��\n";
	  cout<<"���T�v"<<j<<"%\n";  
	  cout<<"���~�v"<<k<<"%\n";   
    	system("pause");
	    return 0;
}


