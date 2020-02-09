#include <iostream>

using namespace std;


hyurimaru()
{
    int i,temp,flow,T;
    double p;
    double k[5]={0,0.42,0.95,1.47};
    cout<<"temperature= ";
    cin>>temp;
    cout<<endl;
    cout<<"flow[/s]= ";
    cin>>flow;
    cout<<endl;
    cout<<"turbine lvl= ";
    cin>>T;
    cout<<endl;
    if( (temp<500) || (temp>1000) || (T<1) || (T>3) )
    {
        cout<<"wrong input";
    }
    else
    {
    p= flow*(temp-15)*k[T]    ;
    cout<<"output power is = "<<p/1000<<" MW";
    }



    //(.59[fluid fuel value] * Effiency[of turbine] * 100 * (temp-15))/(1000[max fluid temp]-15[defualt fluid temp]
};


schaltear()  // normap py power
{
    int i,temp,flow,T;
    double k[5]={0,0.42,0.95,1.47};
    double p;
    cout<<"temperature= ";
    cin>>temp;
    cout<<endl;
    cout<<"power[MW]= ";
    cin>>p;
    cout<<endl;
    cout<<"turbine lvl= ";
    cin>>T;
    cout<<endl;
    if( (temp<500) || (temp>1000) || (T<1) || (T>3) )
    {
        cout<<"wrong input";
    }
    else
    {

    flow=p*1000/( (temp-15)*k[T] );
    cout<<"input flow is = "<<flow<<"/s";
    }

};

akame()  // fusion
{
    int j,k[6],f,efficient;
    double P,b,h[7];
    int CoolingRatio=2;


    P=0;
    efficient=8;
for (int i = 1; i < 6; i++)
{
  cout<< "for the temperature of "<<i<<"000 C"<<endl;
  cout<<" flow =";
  cin>>f;
  cout<<endl;

h[i]=i*(1000-15)*efficient*CoolingRatio*f;
P=P+h[i];
}

cout<<"THE TOTAL POWER IS "<<P/1000<<" MW";
cout<<" "<<endl;
cout<<" "<<endl;
for (int i = 1; i < 6; i++)
{
  cout<< "for the temperature of "<<i<<"000 C the % is :";
  b=h[i]/P*100;
  cout<<b <<endl;
}
cin>>b;

};



int main()
{
    int  a;
    cout<< "HI WELCOME TO THE PY TURBINE POWER CALCULATOR!" << endl;
    cout<< "ENTER 1 IF YOU WANT TO CALCULATE POWER WITH TEMPERATURE INPUT AND FLOW OR," << endl;
    cout<< "2 IF YOU WANT TO CALCULATE THE FLOW NEEDED FROR A GIVEN POWER AND A GIVEN TEMPERATURE" << endl;
    cout<< "3 IF YOU WANT TO CALCULATE THE POWER PRODUCED BY A FUSION ARRAY" << endl;
    cout<< "entered number=";
    cin>>a;
    cout<<endl;
    switch (a)
    {
        case 1: hyurimaru();
            break;
        case 2: schaltear();
            break;
        case 3: akame();
            break;
        default : cout<<"wrong input!"<<endl;
    };

    cin>>a;
    return 0;
}
