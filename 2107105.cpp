#include<bits/stdc++.h>
using namespace std;
class cafeteria;
class new_account;
class hall;
class academics;
class store_data;
class employee;
class dept_store;
class dept_store
{
    public:
   vector<pair<string,float>>item_1={{"Pencil",15.0},{"Pen",5},{"Scale",30},{"Eraser",12},{"Lab_report",50},{"Mechanical_drawing_set",500},{"Architecture_set",800}};
    public:
    void display_1()
    {
        for(int i=0;i<item_1.size();i++)
        {
            cout<<i+1<<". "<<item_1[i].first<<" $ "<<item_1[i].second<<" Taka."<<endl;
        }
        cout<<endl;
    }
    void add_item(string s,float f)
    {
        item_1.push_back({s,f});
    }
    void update_item(string s,float f)
    {
        for(int i=0;i<item_1.size();i++)
        {
            if(item_1[i].first==s)
            {
                item_1[i].second=f;
                cout<<"Price updated"<<endl;
                break;
            }
        }
    }
    void remove_item(string s)
    {
        for(int i=0;i<item_1.size();i++)
        {
            if(item_1[i].first==s)
            {
                item_1.erase(item_1.begin()+i);
                break;
            }
        }
    }
    float get_price(string s)
{
    for(int i=0; item_1.size();i++)
    {
        if(s==item_1[i].first)
        {
            return item_1[i].second;
        }
    }
    cout<<"Item not found"<<endl;
    return 0.0;
}
};

class cafeteria
{
    vector<pair<string,float>>item={{"tea",15},{"Coffee",30},{"Somocha",5},{"Soup",50},{"Chicken_fry",80},{"Chips",10},{"Biscuits",20},{"Drinks",25},{"Cake",20}};
    public:
    void display_1()
    {
        cout<<"Available items:"<<endl;
        for(int i=0;i<item.size();i++)
        {
            cout<<i+1<<". "<<item[i].first<<"   $ "<<item[i].second<<" Taka."<<endl;
        }
        cout<<endl;
    }
    void add_item(string s,float f)
    {
        item.push_back({s,f});
    }
    void update_item(string s,float f)
    {
        for(int i=0;i<item.size();i++)
        {
            if(item[i].first==s)
            {
                item[i].second=f;
                cout<<"Price updated"<<endl;
                break;
            }
        }
    }
    void remove_item(string s)
    {
        for(int i=0;i<item.size();i++)
        {
            if(item[i].first==s)
            {
                item.erase(item.begin()+i);
                break;
            }
        }
    }

float get_price_cafe(string s)
{
    for(int i=0;item.size();i++)
    {
        if(s==item[i].first)
        {
            return item[i].second;
        }
    }
    cout<<"Item not found"<<endl;
    return 0.0;
}
};
class hall
{
    static int hall_fee;
    pair<float,vector<string>>avail_items ={40,{"Rice","Chicken","Lentil","Vegetable"}};
    public:
        vector<string>h_name={{"Lalan_shah_hall"},{"Khan_jahan_ali_hall"},{"Dr_a_k_fozlul_haque_hall"},{"Bongobondhu_sheikh_mujibur_rahamn_hall"},{"Amar_ekushe_hall"},{"Dr_m_a_roshid_hall"},{"Rokeya_hall"}};
    friend void show_hall(hall &);
    void av_meal()
    {
        cout<<"Meal price :"<<avail_items.first<<endl;
        cout<<endl;
        cout<<"items are:"<<endl;
        for(int i=0;i<avail_items.second.size();i++)
        {
            cout<<i+1<<" . "<<avail_items.second[i]<<endl;
        }
        cout<<endl;
    }
    void add_item()
    {
        string s;
        cout<<"Enter item name:"<<endl;
        cin>>s;
        cout<<"price of that item:"<<endl;
        float f;
        cin>>f;
        avail_items.first+=f;
        avail_items.second.push_back(s);

    }
    void remove_item()
    {
        string s;
        cout<<"Enter item name:"<<endl;
        cin>>s;
        cout<<"price of that item:"<<endl;
        float f;
        cin>>f;
        for(int i=0;i<avail_items.second.size();i++)
        {
            if(avail_items.second[i]==s)
            {
                avail_items.second.erase(avail_items.second.begin()+i);
                avail_items.first-=f;
                cout<<"successfully done!"<<endl;
                break;
            }
        }
    }
    float hall_fee_func()
    {
        cout<<"Your Hall fee is "<<hall_fee<<" taka"<<endl;
        cout<<"Do you want to pay it? Type (YES/NO)"<<endl;
        string s;
        cin>>s;
        if(s=="YES")
        {
            float ff=hall_fee;
            return ff;
        }
        else
        {
        return 0.0;
        }
    }
    void update_hall_fee()
    {
        cout<<"Fee is "<<hall_fee<<" taka"<<endl;
        cout<<"Do you want to change it ? Type(YES/NO)"<<endl;
        string s;
        cin >>s;
        if(s=="YES")
        {
            cout<<"Enter amount"<<endl;
            int a;
            cin>>a;
            hall_fee=a;
            cout<<"Updated and the amount."<<endl;
        }

    }
    float get_price()
    {
            return avail_items.first;
    }

};
class academics
{
    static int reg_fee;
    vector<pair<string,vector<pair<string,float>>>>subject_book={{"EEE",{{"basic_electrical_science",100},{"digital_circuit",80}}},{"CSE",{{"let_us_c",120},{"let_us_c++",130},{"ANCI_C",100}}},{"MATH",{{"Coordinate_geometry",100},{"Differential_calculus",110},{"integral_calcusus",100}}}};
    public:
    void add_books()
    {
        bool x=false;
        cout<<"Enter Subject name:"<<endl;
        string s;
        cin>>s;
        cout<<"Enter Book name:"<<endl;
        string s1;
        cin>>s1;
        cout<<"Enter Amount:"<<endl;
        float f;
        cin>>f;
        for(int i=0;i<subject_book.size();i++)
        {
            if(s==subject_book[i].first)
            {
                x=true;
                subject_book[i].second.push_back({s1,f});
            }
        }
        if(x==false)
        {
            vector<pair<string,float>>temp;
            temp.push_back({s1,f});
            subject_book.push_back({s,temp});

        }
    }
    void show_books()
    {
        for(int i=0;i<subject_book.size();i++)
        {
            cout<<"Subject is : "<<subject_book[i].first<<endl;
            cout<<endl;
            cout<<"Suggested books are:"<<endl;
            cout<<endl;
            for(auto it : subject_book[i].second)
            {
                cout<<it.first<<"  and price is "<<it.second<<" taka."<<endl;
            }
            cout<<endl;
        }
    }
    float value_books()
    {
        bool x=false;
        cout<<"Subject name:"<<endl;
        string s;
        cin>>s;
        cout<<"Book name:"<<endl;
        string s1;
        cin>>s1;
        for(int i=0;i<subject_book.size();i++)
        {
            if(s==subject_book[i].first)
            {
                for(auto it:subject_book[i].second)
                {
                    if(it.first==s1)
                    {
                        x=true;
                        cout<<"The price of the book is "<<it.second<<endl;
                        cout<<"Get it ? Type (YES/NO)"<<endl;
                        string s2;
                        cin>>s2;
                        if(s2=="YES")
                        {
                            cout<<"Price added to Due"<<endl;
                            return it.second;
                        }
                        else
                        {
                            cout<<"No book for you"<<endl;
                            return 0.0;
                        }
                    }
                }
            }
        }
        if(x==false)
        {
            cout<<"not found"<<endl;
              return 0.0;
        }
    }
    float reg_fee_func()
    {
        cout<<"Your Hall fee is "<<reg_fee<<" taka"<<endl;
        cout<<"Do you want to pay it? Type(YES/NO)"<<endl;
        string s;
        cin>>s;
        if(s=="YES")
        {
            float ff=reg_fee;
            return ff;
        }
        else
        {
        return 0.0;
        }
    }
    void update_reg_fee()
    {
        cout<<"Fee is "<<reg_fee<<" taka"<<endl;
        cout<<"Do you want to change it ? Type(YES/NO)"<<endl;
        string s;
        cin >>s;
        if(s=="YES")
        {
            cout<<"Enter amount"<<endl;
            int a;
            cin>>a;
            reg_fee=a;
            cout<<"Updated and the amount."<<endl;
        }

    }

};
void show_hall(hall &asds)
    {
        for(int i=0;i<asds.h_name.size();i++)
        {
            cout<<i+1<<". "<<asds.h_name[i]<<endl;
        }
        cout<<endl;
    }

class new_account
{
private:
    string name;
    string dept;
    string hall;
    int roll;
    string year;
    float amount;
    float due;
    public:
        friend class store_data;
    new_account()
    {
    name="NULL";
    dept="NULL";
    hall="NULL";
    roll=0;
    year="NULL";
    amount=0;
    due=0;
    }
    new_account(string b,string c,string d,int e,string f ,float g)
    {
    name=b;
    dept=c;
    hall=d;
    roll=e;
    year=f;
    amount=g;
    due=0;
    }
    void set_name(string a)
    {
        name=a;
    }
    void set_dept(string a)
    {
        dept=a;
    }
    void set_hall(string a)
    {
        hall=a;
    }
    void set_roll(int a)
    {
        roll=a;
    }
    void set_year(string a)
    {
        year=a;
    }
    void set_amount(float a)
    {
        amount=a;
    }
    void set_due(float a)
    {
        due=a;
    }
    string get_name()
    {
        return name;
    }
    string get_dept()
    {
        return dept;
    }
    int get_roll()
    {
        return roll;
    }
    string get_year()
    {
        return year;
    }
    string get_hall()
    {
        return hall;
    }
    float get_amount()
    {
        return amount;
    }
    float get_due()
    {
        return due;
    }
    void update_due(float f)
    {
        if(due+f>10000)
    {
    cout<<"Due limit exceeded"<<endl;
    cout<<"Pay money first"<<endl;
    }
    else
     {
        due+=f;
     }
    }
    void update_amount(float f)
    {
        amount+=f;
    }
    void  pay_due()
    {
        if(amount>=due)
        {
            cout<<"All dues are cleared."<<endl;
            amount=amount-due;
            due=0;

        }
        else
        {
            cout<<"some dues are payed"<<endl;
            due=due-amount;
            amount=0;
        }
    }
};
class employee
{
private:
    int id;
    string name;
    string Posting;
public:
    friend class store_data;
    employee()
    {
    }
    employee(int a,string b,string c)
    {
        id=a;
        name=b;
        Posting=c;
    }
    int get_id()
    {
        return id;
    }
    string get_name()
    {
        return name;
    }
    string get_Posting()
    {
        return Posting;
    }
};

class store_data
{
    vector<new_account>student;
    vector<employee>emp;
    static int count1;
public:
    friend class new_account;
    friend class employee;

    void create_account(new_account a)
    {
        student.push_back(a);
    }
    void create_employee(employee a)
    {
        emp.push_back(a);
    }
    void pay_dues_student()
    {
        cout<<"Enter Roll:"<<endl;
        int r11;
        cin>>r11;
        for(int i=0;i<student.size();i++)
        {
            if(student[i].get_roll()==r11)
            {
                student[i].pay_due();
                return;
            }
        }
        cout<<"Roll not found"<<endl;
        return;
    }
    void recharge_money()
    {
        cout<<"Enter Roll:"<<endl;
        int r11;
        cin>>r11;
        for(int i=0;i<student.size();i++)
        {
            if(student[i].get_roll()==r11)
            {
                cout<<"Enter recharge amount:"<<endl;
                float ft;
                cin>>ft;
                student[i].update_amount(ft);
                return;
            }
        }
        cout<<"Roll not found"<<endl;
        return;
    }
    void see_money()
    {
        cout<<"Enter Roll:"<<endl;
        int r11;
        cin>>r11;
        for(int i=0;i<student.size();i++)
        {
            if(student[i].get_roll()==r11)
            {
                cout<<"Student has "<<student[i].get_amount()<<" taka in his account"<<endl;

                return;
            }
        }
        cout<<"Roll not found"<<endl;
        return;
    }
    void show_due_student()
    {
        bool x=false;
        cout<<"Enter Roll:"<<endl;
        int a;
        cin>>a;
        for(int i=0;i<student.size();i++)
        {
            if(a==student[i].get_roll())
            {
                cout<<"Dues of that student is:"<<student[i].get_due()<<endl;
                string s;
                cout<<"see all info of that student? Type(YES/NO)"<<endl;
                cin>>s;
                if(s=="YES")
                {
                    cout<<"Students information:"<<endl;
                    cout<<"Name:"<<student[i].get_name()<<endl;
                    cout<<"Roll:"<<student[i].get_roll()<<endl;
                    cout<<"Department:"<<student[i].get_dept()<<endl;
                    cout<<"Hall:"<<student[i].get_hall()<<endl;
                    cout<<"Year:"<<student[i].get_year()<<endl;
                    cout<<"Due:"<<student[i].get_due()<<endl;
                    cout<<"Balance:"<<student[i].get_amount()<<endl;
                }
            }
        }
    }
        void update_due(float ff)
      {
          bool bb=false;
        cout<<"Enter Roll"<<endl;
        int aa;
        cin>>aa;
        for(int i=0;student.size();i++)
        {
            if(student[i].get_roll()==aa)
            {
                bb=true;
                cout<<"Due Updated"<<endl;
                student[i].update_due(ff);
                break;
            }
        }
        if(bb==false)
        {
            cout<<"Roll not found"<<endl;
        }
        }
        string get_prof(int xx)
        {
            for(int i=0;i<emp.size();i++)
            {
                if(xx==emp[i].get_id())
                {
                    return emp[i].get_Posting();
                }
            }
            cout<<"Id not found"<<endl;
            return "NULL";
        }
};
int store_data::count1;
int hall :: hall_fee;
int academics :: reg_fee;
int main()
{
    store_data obj;
    dept_store obj1;
    cafeteria obj2;
    dept_store obj3;
    cafeteria obj4;
    hall obj5;
    academics obj6;
    bool bx=false;
    string spk;
    cout<<"Payment Section"<<endl;
    cout<<"Press Any To Start Operation"<<endl;
    cout<<endl;
    cin>>spk;
    while(1)
    {
        cout<<"Operations:"<<endl;
        cout<<"1.Create Account & Payments"<<endl;
        cout<<"2.Academic Bills"<<endl;
        cout<<"3.Hall Bills"<<endl;
        cout<<"4.Cafeteria Bills"<<endl;
        cout<<"5.Departmental Store Bills"<<endl;
        cout<<"6.Update Information"<<endl;
        cout<<"7.Exit Code"<<endl;
        cout<<endl;
        int a;
        cout<<"Enter your choice"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
            {
            while(1)
            {
            bool ss=false;
            cout<<endl;
            cout<<"1.Create Account for student"<<endl;
            cout<<"2.Create Account for Employee"<<endl;
            cout<<"3.Show dues"<<endl;
            cout<<"4.Pay dues"<<endl;
            cout<<"5.Recharge"<<endl;
            cout<<"6.Check Balance"<<endl;
            cout<<"7.Back"<<endl;
            cout<<endl;
            int a1;
            cout<<"Enter your choice"<<endl;
            cin>>a1;
            switch(a1)
            {
            case 1:
              {
                cout<<"Students info:"<<endl;
                    cout<<"Name:"<<endl;
                    string n1;
                    cin>>n1;
                    cout<<"Roll:"<<endl;
                    int r1;
                    cin>>r1;
                    cout<<"Department:"<<endl;
                    string d1;
                    cin>>d1;
                    cout<<"Hall:"<<endl;
                    string h1;
                    cin>>h1;
                    cout<<"Year:"<<endl;
                    string y1;
                    cin>>y1;
                    cout<<"Amount:"<<endl;
                    float dd;
                    cin>>dd;
                    new_account xx(n1,d1,h1,r1,y1,dd);
                    obj.create_account(xx);
                    cout<<"Account Creation Successful!"<<endl;
                    break;
              }
            case 2:
                {
                cout<<"Information of The Employee"<<endl;
                cout<<"ID:"<<endl;
                int i1;
                cin>>i1;
                cout<<"Name:"<<endl;
                string n1;
                cin>>n1;
                cout<<"Posting:"<<endl;
                string s1;
                cin>>s1;
                employee xx(i1,n1,s1);
                obj.create_employee(xx);
                break;
                }
            case 3:
                {

                obj.show_due_student();
                break;
                }
            case 4:
                {
                    obj.pay_dues_student();
                    break;
                }
            case 5:
                {
                    obj.recharge_money();
                    break;
                }
                case 6:
                {
                    obj.see_money();
                    break;
                }
                case 7:
                {
                    ss=true;
                    break;
                }
            default:
                {
                cout<<"Invalid Response"<<endl;
                break;
                }
        }
        if(ss==true)
        {
            break;
        }
            }
        break;
        }
            case 2:
                {
            while(1)
            {
            bool ss=false;
            cout<<endl;
                    cout<<"1.Show books"<<endl;
                    cout<<"2.Pay registration bills"<<endl;
                    cout<<"3.Get Books and Pay"<<endl;
                    cout<<"4.Back"<<endl;
                    cout<<endl;
                    cout<<"Enter Your Choice"<<endl;
                    int a2;
                    cin>>a2;
            switch(a2)
            {
            case 1:
                {
                    obj6.show_books();
                    break;
                }
            case 2:
                {
                    float ff;
                    ff=obj6.reg_fee_func();
                    obj.update_due(ff);
                    break;
                }
            case 3:
                {
                    float ff;
                    ff=obj6.value_books();
                    obj.update_due(ff);
                    break;
                }
                case 4:
                {
                    ss=true;
                    break;
                }
            default:
                {
                    cout<<"Invalid Response"<<endl;
                    break;
                }
                    }
                    if(ss==true)
                    {
                        break;
                    }
            }
                break;
                }
                case 3:
                    {
                    while(1)
                   {
                    bool ss=false;
                    cout<<endl;
                        cout<<"1.Available Meal"<<endl;
                        cout<<"2.Show All halls"<<endl;
                        cout<<"3.Pay Hall fees"<<endl;
                        cout<<"4.Pal And Get Meal"<<endl;
                        cout<<"5.Back"<<endl;
                        cout<<endl;
                        int a3;
                        cout<<"Enter your choice"<<endl;
                        cin>>a3;
                        switch(a3)
                        {
                        case 1:
                            {
                                obj5.av_meal();
                                break;
                            }
                        case 2:
                            {
                                show_hall(obj5);
                                break;
                            }
                        case 3:
                            {
                                float ff;
                                ff=obj5.hall_fee_func();
                                obj.update_due(ff);
                                break;
                            }
                        case 4:
                            {
                                float ff;
                                ff=obj5.get_price();
                                obj.update_due(ff);
                                break;

                            }
                        case 5:
                        {
                            ss=true;
                            break;
                        }
                        default:
                            {
                                cout<<"Invalid Response"<<endl;
                                break;
                            }
                        }
                        if(ss==true)
                        {
                            break;
                        }
                   }
                        break;
                    }
                        case 4:
                            {
                    while(1)
                     {
                       bool ss=false;
                        cout<<endl;
                        cout<<"1.Available Food"<<endl;
                        cout<<"2.Pay And Get Food"<<endl;
                        cout<<"3.Back"<<endl;
                        cout<<endl;
                        int a3;
                        cout<<"Enter your choice"<<endl;
                        cin>>a3;
                        switch(a3)
                        {
                        case 1:
                            {
                                obj4.display_1();
                                break;
                            }
                        case 2:
                            {
                                cout<<"Enter food Name:"<<endl;
                                string sss;
                                cin>>sss;
                                float ff;
                                ff=obj4.get_price_cafe(sss);
                                obj.update_due(ff);
                                break;
                            }
                            case 3:
                            {
                                ss=true;
                                break;
                            }
                        default:
                            {
                                cout<<"Invalid Response"<<endl;
                                break;
                            }
                        }
                         if(ss==true)
                        {
                            break;
                        }
                   }
                        break;
                            }
                            case 5:
                            {
                        while(1)
                       {
                        bool ss=false;
                        cout<<endl;
                        cout<<"1.Available Items"<<endl;
                        cout<<"2.Pay And Get Items"<<endl;
                        cout<<"3.Back"<<endl;
                        cout<<endl;
                        int a3;
                        cout<<"Enter your choice"<<endl;
                        cin>>a3;
                        switch(a3)
                        {
                        case 1:
                            {
                                obj3.display_1();
                                break;
                            }
                        case 2:
                            {
                                cout<<"Enter Item Name:"<<endl;
                                string sss;
                                cin>>sss;
                                float ff;
                                ff= obj3.get_price(sss);
                                obj.update_due(ff);
                                break;
                            }
                            case 3:
                            {
                                ss=true;
                                break;
                            }
                        default:
                            {
                                cout<<"Invalid Response"<<endl;
                                break;
                            }
                        }
                        if(ss==true)
                        {
                            break;
                        }
                   }
                        break;
                            }
                        case 6:
                            {
                                cout<<"Enter your id:"<<endl;
                                cout<<endl;
                                int aaa;
                                cin>>aaa;
                                string st1;
                                st1=obj.get_prof(aaa);
                                if(st1=="hall_manager")
                                {
                                    cout<<"Update info for hall"<<endl;
                                     cout<<"1. Add Item"<<endl;
                                     cout<<"2.Remove Item"<<endl;
                                     cout<<"3.Update  hall fee"<<endl;
                                     int abc;
                                     cout<<"Enter your choice"<<endl;
                                     cin>>abc;
                                     if(abc==1)
                                     {
                                         obj5.add_item();
                                     }
                                     else if(abc==2)
                                     {
                                         obj5.remove_item();
                                     }
                                     else if(abc==3)
                                     {
                                         obj5.update_hall_fee();
                                     }
                                     else
                                     {
                                         cout<<"Invalid Response"<<endl;
                                     }
                                }
                                else if(st1=="office_assistant")
                                {
                                    cout<<"Update Academic info "<<endl;
                                     cout<<"1.Add Books"<<endl;
                                     cout<<"2.Update registration fee"<<endl;
                                     int abc;
                                     cout<<"Enter your choice"<<endl;
                                     cin>>abc;
                                     if(abc==1)
                                     {
                                         obj6.add_books();
                                     }
                                     else if(abc==2)
                                     {
                                         obj6.update_reg_fee();
                                     }
                                     else
                                     {
                                         cout<<"Invalid Response"<<endl;
                                     }
                                }
                                else if(st1=="butler")
                                {
                                    cout<<"Update Food info in Cafeteria"<<endl;
                                     cout<<"1.Add items"<<endl;
                                     cout<<"2.Remove items"<<endl;
                                     cout<<"3.Update items"<<endl;
                                     cout<<endl;
                                     int abc;
                                     cout<<"Enter your choice"<<endl;
                                     cin>>abc;
                                     if(abc==1)
                                     {
                                         cout<<"Enter name of the food:"<<endl;
                                         string ffs;
                                         cin>>ffs;
                                         cout<<"Enter Price"<<endl;
                                         float fff;
                                         cin>>fff;
                                         obj2.add_item(ffs,fff);
                                     }
                                     else if(abc==2)
                                     {
                                         cout<<"Enter name of the food:"<<endl;
                                         string ffs;
                                         cin>>ffs;
                                         obj2.remove_item(ffs);
                                     }
                                     else if(abc==3)
                                     {
                                         cout<<"Enter name of the food:"<<endl;
                                         string ffs;
                                         cin>>ffs;
                                         cout<<"Enter Price"<<endl;
                                         float fff;
                                         cin>>fff;
                                         obj2.update_item(ffs,fff);
                                     }
                                     else
                                     {
                                         cout<<"Invalid Response"<<endl;
                                     }
                                }
                                else if(st1=="shop_keeper")
                                {
                                    cout<<endl;
                                    cout<<"Update item info in Depatmental store"<<endl;
                                     cout<<"1.Add items"<<endl;
                                     cout<<"2.Remove items"<<endl;
                                     cout<<"3.Update items"<<endl;
                                     cout<<endl;
                                     int abc;
                                     cout<<"Enter your choice"<<endl;
                                     cin>>abc;
                                     if(abc==1)
                                     {
                                         cout<<"Enter name of the Item:"<<endl;
                                         string ffs;
                                         cin>>ffs;
                                         cout<<"Enter Price"<<endl;
                                         float fff;
                                         cin>>fff;
                                         obj3.add_item(ffs,fff);
                                     }
                                     else if(abc==2)
                                     {
                                         cout<<"Enter name of the Item:"<<endl;
                                         string ffs;
                                         cin>>ffs;
                                         obj3.remove_item(ffs);
                                     }
                                     else if(abc==3)
                                     {
                                         cout<<"Enter name of the Item:"<<endl;
                                         string ffs;
                                         cin>>ffs;
                                         cout<<"Enter Price"<<endl;
                                         float fff;
                                         cin>>fff;
                                         obj3.update_item(ffs,fff);
                                     }
                                     else
                                     {
                                         cout<<"Invalid Response"<<endl;
                                     }
                                }
                                else
                                {
                                    cout<<"You cannot perform any changes!"<<endl;
                                    cout<<"Your profession must be one of the following"<<endl;
                                    cout<<"shop_keeper// butler // office_assistant // hall_manager"<<endl;
                                    cout<<endl;
                                }
                                break;
                            }
                            case 7:
                            {
                                bx=true;
                                break;
                            }
                        default:
                            {
                                cout<<"Invalid Response"<<endl;
                                break;
                            }
                }
                if(bx==true)
                {
                    break;
                }
    }
    cout<<"Payment and Management Complete"<<endl;
    return 0;
}
