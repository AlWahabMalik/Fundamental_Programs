#include<iostream>
using namespace std;
int main()
{

 cout<<"Currency"<<endl;

 int cr;
    cout<<"Select Option"<<endl;
    cout<<"1. PKR to Dollor,Euros,Yen,won "<<endl;
    cout<<"2. Dollor to PKR,Euros,yen,won"<<endl;
    cout<<"3. Euros to Dollor,PKR ,yen ,won"<<endl;
    cout<<"4. yen to Dollor,Euros,won and PKR"<<endl;
    cout<<"5. won to Dollor,Euros yen,pkr "<<endl;

    cin>>cr;
    switch (cr) {
    	  	 	float p,e,y,d,w;
  	 case 1:
  	 	cout<<"Enter Currency in PKR "<<endl;
  	 	cin>>p;
  	 	d = p/187;
  	 	y = p*0.69;
  	 	e= p/200;
  	 	w=p*6.72;
        cout<<p<<" PKR = " <<d<< " Dollers"<<endl;
  	 	cout<<p<< " PKR = "<<e<<" Euros"<<endl;
  	 	cout<<p<< " PKR = "<<y<<" yen"<<endl;
  	 	cout<<p<< " PKR = "<<w<<" won"<<endl;
  	    break;
    case 2:
  	 	cout<<"Enter Currency in Dollers "<<endl;
  	 	cin>>d;
  	 	p = d*187;
  	 	y = d*128.16;
  	 	e= d*0.93;
  	 	w= d*1253.08;
        cout<<d<<" Dollers = " <<p<< " PKR"<<endl;
  	 	cout<<d<< " Dollers = "<<e<<" Euros"<<endl;
  	 	cout<<d<< " Dollers = "<<y<<" yen"<<endl;
  	 	cout<<d<< " Dollers = "<<w<<" won"<<endl;
        break;
    case 3:
  	 	cout<<"Enter Currency in Euros "<<endl;
  	 	cin>>e;
  	 	p = e*200;
  	 	y = e*137.44;
  	 	d= e*1.07;
  	 	w=e*1344.36;
        cout<<e<<" Euros = " <<p<< " PKR"<<endl;
  	 	cout<<e<< " Euros = "<<d<<" Dollers"<<endl;
  	 	cout<<e<< " Euros = "<<y<<" yen"<<endl;
  	 	cout<<e<< " Euros = "<<w<<" won"<<endl;
        break;
       
    case 4:
  	 	cout<<"Enter Currency in yen "<<endl;
  	 	cin>>y;
  	 	p = y*1.45;
  	 	e = y*0.0073;
  	 	d= y*0.0078;
  	 	w=y*9.77;
        cout<<y<<" yen = " <<p<< " PKR"<<endl;
  	 	cout<<y<< " yen = "<<d<<" Dollers"<<endl;
  	 	cout<<y<< " yen = "<<e<<" Euros"<<endl;
  	 	cout<<y<< " Yen = "<<w<<" won"<<endl;
    	break;
     
    
    
  case 5:
  	cout<<"Enter Currency in won "<<endl;
  	 	cin>>w;
  	 	p = w*0.15;
  	 	e = w*0.00074;
  	 	d= w*0.00080;
  	 	y=w*0.10;
        cout<<w<<" Won = " <<p<< " PKR"<<endl;
  	 	cout<<w<< " Won = "<<d<<" Dollers"<<endl;
  	 	cout<<w<< " Won = "<<e<<" Euros"<<endl;
  	 	cout<<w<< " Won = "<<y<<" yen"<<endl;
    	break;
    }
    break;

}


}
