#include <iostream>  
using namespace std;  
class stud  
 {  
   public:  
        stud()    
        {    
            cout<<"Default Constructor "<<endl;    
        }  
        stud(int a,int b)    
        {    
            cout<<"parameter Constructor "<<a+b<<endl;    
        } 
        void showdata(){
            cout<<"function called by custructor "<<endl;
            
        }
       
};  
int main(void)   
{  
    stud t1;  
    stud t2(10,20); 
    t1.showdata();
    return 0;  
}  
