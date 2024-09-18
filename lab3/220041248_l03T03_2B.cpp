#include<iostream>
#include<string.h>
using namespace std;

class Medicine
{
    private:
        char tname[30],gname[30];
        double Price, Discount=0.0;
    public:
        void assignName(char name[], char genericName[])
        {
            strcpy(tname,name);
            strcpy(gname,genericName);
        }

        void assignPrice(double price)
        {
            Price = price;
        }

        void setDiscountPercent(double percent)
        {
           Discount = percent;
        }
        double getSellingprice(int nos)
        {
             if(Discount==0.0)
                return nos*Price;
            else
            {
             Price = Price - Price*(Discount/100);
             return nos*Price;
            }
            
        }

        void display()
        {
            cout<<"MRP. of "<<tname <<" ("<<gname<<") is BDT "<<Price<<". Current discount "<<Discount<<"%.\n";
            cout<<"Selling price BDT "<<getSellingprice(1)<<endl;
        }


};

int main()
{
    Medicine med;
    med.assignName("Napa","Paracetemol");
    med.assignPrice(15.35);
    med.setDiscountPercent(5.0);
    med.display();
}