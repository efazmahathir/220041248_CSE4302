#include<iostream>
using namespace std;

class RationalNumber
{
    private:
        int Numerator,Denominator;
    
    public:
        void assign(int numerator, int denominator)
        {
            if(denominator==0)
            {
                 cout<<"You can not assign 0 as denominator."; 
                 //Denominator  
            }
               
             
             else
             {
                 Denominator = denominator;

                Numerator = numerator;
             }
           
        }

        float convert()
        {
            float result = (float)Numerator/Denominator;
            return result;
        }

        void invert()
        {
            if(Numerator!=0)
            {
                int temp;
                temp = Denominator;
                Denominator = Numerator;
                Numerator = temp;
            }
            else
            {
                cout<<"You can not assign 0 as denominator.\n";
                cout<<"Inversion Failed.\n";
            }
                
        }
        void print()
        {
        
            if(Denominator!=0)   
                cout<<Numerator<<"/"<<Denominator<<"\n";

        }

};

int main()
{
    RationalNumber frac;
    frac.assign(5,1);
    frac.invert();
    frac.print();
    cout<<frac.convert();
}