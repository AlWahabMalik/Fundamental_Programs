 #include<iostream>
 using namespace std;
 int main(){
 
 int cr;
 
    cout<<"Select Option"<<endl;
    cout<<"1. PKR to Dollor,Euros and Riyal "<<endl;
    cout<<"2. Dollor to PKR,Euros and Riyal"<<endl;
    cout<<"3. Euros to Dollor,PKR and Riyal"<<endl;
    cout<<"4. Riyal to Dollor,Euros and PKR"<<endl;
    cin>>cr;
    switch (cr) {
    	  	 	float p,e,r,d;
  	 case 1:
  	 	cout<<"Enter Currency in PKR "<<endl;
  	 	cin>>p;
  	 	d = p/180;
  	 	r = p/45;
  	 	e= p/201.84;
        cout<<p<<" PKR = " <<d<< " Dollers"<<endl;
  	 	cout<<p<< " PKR = "<<e<<" Euros"<<endl;
  	 	cout<<p<< " PKR = "<<r<<" Riyals";
  	    break;
    case 2:
  	 	cout<<"Enter Currency in Dollers "<<endl;
  	 	cin>>d;
  	 	p = d*180;
  	 	r = d*3.75;
  	 	e= d*0.93;
        cout<<d<<" Dollers = " <<p<< " PKR"<<endl;
  	 	cout<<d<< " Dollers = "<<e<<" Euros"<<endl;
  	 	cout<<d<< " Dollers = "<<r<<" Riyals";
        break;
    case 3:
  	 	cout<<"Enter Currency in Euros "<<endl;
  	 	cin>>e;
  	 	p = e*201.84;
  	 	r = e/0.25;
  	 	d= e/0.93;
        cout<<e<<" Euros = " <<p<< " PKR"<<endl;
  	 	cout<<e<< " Euros = "<<d<<" Dollers"<<endl;
  	 	cout<<e<< " Euros = "<<r<<" Riyals";
        break;
       
    case 4:
  	 	cout<<"Enter Currency in Riyals "<<endl;
  	 	cin>>r;
  	 	p = r*45;
  	 	e = e*0.25;
  	 	d= r*0.27;
        cout<<r<<" Riyals = " <<p<< " PKR"<<endl;
  	 	cout<<r<< " Riyals = "<<d<<" Dollers"<<endl;
  	 	cout<<r<< " Riyals = "<<e<<" Euros";
    	break;
     
    }
    
  

}


