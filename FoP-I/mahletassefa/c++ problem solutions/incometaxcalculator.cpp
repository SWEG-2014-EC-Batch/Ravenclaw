#include <iostream>
using namespace std;
int main()
{
    // declare the variables
    float gross_salary;
    float net_salary;
    float income_tax_rate;
    float income_tax;
    float pension;
    int work_hours;
    int over_time=0;
    
    cout<<"enter your gross salary:\n";
    cin>>gross_salary;
    cout<<"enter your worked hours:\n";
    cin>>work_hours;
    cout<<"enter income tax rate in percent:\n";
    cin>>income_tax_rate;
    //calculate net salary
    pension=gross_salary*0.07;
    income_tax= (gross_salary*income_tax_rate/100);
       if(work_hours>40){
       over_time=gross_salary*(work_hours-40);
       }
        if(gross_salary<=200){
            net_salary=gross_salary-pension;
            cout<<"your net salary is"<<net_salary<<endl;
        }else if(gross_salary>200 && gross_salary<=600){
            net_salary=gross_salary-(pension+(gross_salary*0.1));
        } else if(gross_salary>600 && gross_salary<=1200){
            net_salary=gross_salary-(pension+(gross_salary*0.15));
        } else if(gross_salary>1200 && gross_salary<=2000){
            net_salary=gross_salary-(pension+(gross_salary*0.2));
        } else if(gross_salary>2000 && gross_salary<=3500){
            net_salary=gross_salary-(pension+(gross_salary*0.25));
        } else if(gross_salary>3500){
            net_salary=gross_salary-(pension+(gross_salary*0.3));
        }
        if(gross_salary>200){
        net_salary=gross_salary-pension+over_time;
        cout<<"your net salary is"<<net_salary<<endl;
        }else if(gross_salary>200 && gross_salary<=600){
            net_salary=gross_salary+over_time-(pension+(gross_salary*0.1));
        } else if(gross_salary>600 && gross_salary<=1200){
            net_salary=gross_salary+over_time-(pension+(gross_salary*0.15));
        } else if(gross_salary>1200 && gross_salary<=2000){
            net_salary=gross_salary+over_time-(pension+(gross_salary*0.2));
        } else if(gross_salary>2000 && gross_salary<=3500){
            net_salary=gross_salary+over_time-(pension+(gross_salary*0.25));
        } else if(gross_salary>3500){
            net_salary=gross_salary+over_time-(pension+(gross_salary*0.3));
        }

    
}
