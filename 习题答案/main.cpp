#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cassert>
#include <iterator>
#include <deque>
#include <list>
#include <map>
#include <utility>
#include <functional>
#include <iomanip>
using namespace std;

/*学堂在线作业*/

//int main() {
//    int n;
//    cout<<"please input:"<<endl;
//    cin>>n;
//    if (n<=0||n>100){
//        cout<<"please input:"<<endl;
//        cin>>n;
//    }
//    int max;
//    int min;
//    int sum;
//    int s;
//    cout<<"please inputs:"<<endl;
//    cin>>s;
//    max=s;
//    min=s;
//    sum=s;
//    for (int i=0;i<n-1;i++){
//        cin>>s;
//        if (s>max){
//            max=s;
//        }
//        if (s<min){
//            min=s;
//        }
//        sum=sum+s;
//    }
//    cout<<sum<<" "<<min<<" "<<max<<endl;
//    return 0;
//}

//int main(){
//    int n;
//    cout<<"please input: "<<endl;
//    cin>>n;
//    if (n<0){
//        cout<<"please input: "<<endl;
//        cin>>n;
//    }
//    int x;
//    int sum=0;
//    int s=1;
//    int i=0;
//    while (n){
//        x=n%10;
//        if (x>2){
//            cout<<"error"<<endl;
//            sum=0;
//            break;
//        }
//        sum+=x*s;
//        s*=2;
//        n=n/10;
//        i+=1;
//        if (i>=9){
//            cout<<"error"<<endl;
//            sum=0;
//            break;
//        }
//    }
//    cout<<sum<<endl;
//    return 0;
//}

//int main(){
//    int n;
//    cout<<"please input: "<<endl;
//    cin>>n;
//    if (n<=0||n>10){
//        cout<<"please input: "<<endl;
//        cin>>n;
//    }
//    int i=1;
//    int j=1;
//    for (i=1;i<=n;i++){
//        for (j=1;j<=n-i;j++){
//            cout<<' ';
//        }
//        for (j=1;j<=2*i-1;j++){
//            cout<<'*';
//        }
//        cout<<endl;
//    }
//    return 0;
//}

//bool Istriangle(int a, int b, int c){
//    bool istr;
//    if (a>b+c || b>a+c || c>a+b){
//        istr= false;
//    }
//    if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
//        istr= true;
//    } else{
//        istr= false;
//    }
//    return istr;
//}

//int main(){
//    int a,b,c;
////    cin>>a>>b>>c;
//    while (cin>>a>>b>>c){
//        if (Istriangle(a,b,c)){
//            cout<<"True"<<endl;
//        } else{
//            cout<<"False"<<endl;
//        }
//    }
//    return 0;
//}

//int fib(int n){
//    int sum;
//    if (n==0){
//        sum=1;
//    }
//    if (n==1){
//        sum=1;
//    }
//    if (n>1){
//        sum=fib(n-1)+fib(n-2);
//    }
//    return sum;
//}

//int main(){
//    int n;
//    cin>>n;
//    if (n<0 || n>30){
//        cout<<"plase input again"<<endl;
//        cin>>n;
//    }
//    cout<<fib(n)<<endl;
//    return 0;
//}

//bool Ischou(int n){
//    bool ischou;
//    if (n==1){
//        ischou= false;
//    }
//    if (n>1){
//        while (n%2==0){
//            n/=2;
//        }
//        while (n%3==0){
//            n/=3;
//        }
//        while (n%5==0){
//            n/=5;
//        }
//        if (n==1){
//            ischou= true;
//        } else{
//            ischou= false;
//        }
//    }
//    return ischou;
//}
//
//int main(){
//    int n;
//    cin>>n;
//    if (n<1||n>100000){
//        cout<<"error"<<endl;
//        cin>>n;
//    }
//    if (Ischou(n)){
//        cout<<"True"<<endl;
//    } else{
//        cout<<"False"<<endl;
//    }
//    return 0;
//}

//class Integer{
//private:
//    int _num;
//public:
//    Integer(int num);
//    int gcd(Integer b);
//};
//
//Integer::Integer(int num) {
//    _num=num;
//}
//
//int Integer::gcd(Integer b) {
//    int min_be;
//    int max_gong=0;
//    if (_num==b._num){
//        max_gong=_num;
//    } else{
//        if (_num>b._num){
//            min_be=_num;
//        } else{
//            min_be=b._num;
//        }
//        for (int i=1;i<=min_be;i++){
//            if (_num%i==0&&b._num%i==0){
//                max_gong=i;
//            }
//        }
//    }
//    return max_gong;
//}
//
//int main(){
//    int a,b;
//    cin>>a>>b;
//    Integer A(a);
//    Integer B(b);
//    cout<<A.gcd(B)<<endl;
//    return 0;
//}

//class Integer{
//private:
//    int _num;
//public:
//    Integer(int num);
//    int inversed();
//};
//
//Integer::Integer(int num) {_num=num;}
//int Integer::inversed() {
//    int inver=0;
//    int number=0;
//    int s=1;
//    int x,y;
//    x=_num;
//    while (x!=0){
//        x=x/10;
//        number+=1;
//    }
//    x=_num;
//    for (int i=0;i<number;i++){
//        y=x%10;
//        x=x/10;
//        for (int j=1;j<number-i;j++){
//            s=s*10;
//        }
//        inver=inver+y*s;
//        s=1;
//    }
//    return inver;
//}
//
//int main(){
//    int n;
//    cin>>n;
//    Integer integer(n);
//    cout<<integer.inversed()<<endl;
//    return 0;
//}

//class Point{
//private:
//    int x,y;
//public:
//    Point(int xx=0,int yy=0){
//        x=xx;
//        y=yy;
//        cout<<"Calling the constructor of Point"<<endl;
//    }
//    Point(Point &p);
//    int getX(){ return x;}
//    int getY(){ return y;}
//};
//Point::Point(Point &p) {
//    x=p.x;
//    y=p.y;
//    cout<<"Calling the copy constructor of Point"<<endl;
//}
//
//class Line{
//private:
//    Point p1,p2;
//    double len;
//public:
//    Line(Point xp1,Point xp2);
//    Line(Line &l);
//    double getlen(){ return len;}
//};
//Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2) {
//    cout<<"Calling constructor of Line"<<endl;
//    double x= static_cast<double >(p1.getX()-p2.getX());
//    double y= static_cast<double >(p1.getY()-p2.getY());
//    len=sqrt(x*x+y*y);
//}
//Line::Line(Line &l):p1(l.p1),p2(l.p2) {
//    cout<<"Calling the copy constructor of Line"<<endl;
//    len=l.len;
//}
//
//int main(){
//    Point myp1(1,1),myp2(4,5);
//    Line line(myp1,myp2);
//    Line line2(line);
//    cout<<"the length of the line is:";
//    cout<<line.getlen()<<endl;
//    cout<<"the length of the line2 is:";
//    cout<<line2.getlen()<<endl;
//    return 0;
//}

//class Yuebao{
//    static double profitRate;
//public:
//    Yuebao(double x=0):money(x){};
//    static void setProfitRate(double rate);
//    void addProfit();
//    void deposit(double amount);
//    void withdraw(double amount);
//    double getBalance();
//
//private:
//    double money;
//};
//
//void Yuebao::setProfitRate(double rate) {
//    profitRate=rate;
//}
//void Yuebao::addProfit() {
//    money=money+money*profitRate;
//}
//void Yuebao::deposit(double amount) {
//    money=money+amount;
//}
//void Yuebao::withdraw(double amount) {
//    money=money-amount;
//}
//double Yuebao::getBalance() {
//    return money;
//}
//
//double Yuebao::profitRate=0;
//
//int main(){
//    int n;
//    while (cin>>n){
//        double profitRate;
//        cin>>profitRate;
//        Yuebao::setProfitRate(profitRate);
//        Yuebao y(0);
//        int operation;
//        double amount;
//        for (int i=0;i<n;i++){
//            y.addProfit();
//            cin>>operation>>amount;
//            if (operation==0)
//                y.deposit(amount);
//            else
//                y.withdraw(amount);
//        }
//        cout<<y.getBalance()<<endl;
//    }
//    return 0;
//}

// 注意num的作用域
//class Mouse{
////private:
////    static int num;
//public:
//    static int num;
//    Mouse(){num++;};
//    Mouse(Mouse &a){num++;};
//    ~Mouse(){
//        num--;
//        cout<<"output"<<endl;
//    }
//};
//
//void fn(Mouse n);
//
//int Mouse::num=0;
//
//int main(){
//    Mouse::num=0;
//    Mouse a;
//    cout<<Mouse::num<<endl;
//    Mouse b(a);
//    cout<<Mouse::num<<endl;
//    for (int i=0;i<10;i++){
//        Mouse x;
//        cout<<Mouse::num<<endl;
//    }
//    cout<<Mouse::num<<"*****"<<endl;
//    fn(a);
//    cout<<Mouse::num<<endl;
//    return 0;
//}
//
//void fn(Mouse n){
//    cout<<Mouse::num<<endl;
//    Mouse m(n);
//    cout<<Mouse::num<<endl;
//}

//int main(){
//    int n,m,sum=0;
//    int s=0;
//    int max;
//    cin>>n;
//    int array[n];
//    for (int i=0;i<n;i++){
//        cin>>m;
//        array[i]=m;
//    }
//    for (int i=0;i<n;i++){
//        sum+=array[i];
//    }
//    max=sum-array[0];
//    for (int i=0;i<n;i++){
//        s=sum-array[i];
//        if (s>max){
//            max=s;
//        }
//        s=0;
//    }
//    cout<<max<<endl;
//    return 0;
//}

//int main(){
//    int n,k,m;
//    int min;
//    cin>>n;
//    cin>>k;
//    int array[n];
//    for (int i=0;i<n;i++){
//        cin>>m;
//        array[i]=m;
//    }
//    for (int i=0;i<n;i++){
//        for (int j=0;j<n;j++){
//            if (array[i]>array[j]){
//                min=array[j];
//                array[j]=array[i];
//                array[i]=min;
//            }
//        }
//    }
//    cout<<array[k]<<endl;
//    return 0;
//}

//string str,creat="";
//int ans=-1;
//bool used[20]={false};
//
//bool back_forward(string str)
//{
//    for(int i=0;i<str.length()/2;i++)
//    {
//        if(str[i]!=str[str.length()-i-1])
//            return false;
//    }
//    return true;
//}
//
//void search(int len, int start)
//{
//    if(len<=0)
//    {
//        if (back_forward(creat)) {/*cout<<creat<<endl;*/ans++;}
//        return;
//    }
//    for(int i=start;i<str.length();i++)
//    {
//        if (!used[i])
//        {
//            used[i]=true;
//            creat.append(str,i,1);
//            search(len-1,i+1);
//            used[i]=false;
//            creat.erase(creat.length()-1,1);
//        }
//    }
//}
//
//int main(){
//    cin>>str;
//    for(int i=0;i<str.length();i++)
//        search(i,0);
//    if (back_forward(str)) {/*cout<<str<<endl;*/ans++;}
//    cout<<ans<<endl;
//    return 0;
//}

//class Account{
//private:
//    string userName;
//public:
//    Account(){};
//    Account(string name);
//    void PrintUserName();
//};
//
//class CreditAccount:public Account{
//private:
//    int credit;
//public:
//    CreditAccount(string name,int credit);
//    void PrintInfo();
//};
//
//Account::Account(string name) : userName(name){};
//void Account::PrintUserName() {
//    cout<<userName<<endl;
//}
//CreditAccount::CreditAccount(string name, int credit) :Account(name),credit(credit){};
//void CreditAccount::PrintInfo() {
//    PrintUserName();
//    cout<<credit<<endl;
//}
//
//int main(){
//    CreditAccount a("I Love CPP",10000);
//    a.PrintInfo();
//    return 0;
//}

//class Base1
//{
//public:
//    Base1(int x);
//    ~Base1();
//};
//class Base2
//{
//public:
//    Base2(int x);
//    ~Base2();
//};
//class Base3
//{
//public:
//    Base3(int x);
//    ~Base3();
//};
//
//class Derived:public Base2,public Base1,public Base3
//{
//public:
//    Derived(int x1, int x2, int x3, int x4);
//    ~Derived();
//};
//
//Base1::Base1(int x) {
//    cout<<"Base1 constructor called"<<x<<endl;
//}
//Base1::~Base1() {
//    cout<<"Base1 destructor called"<<endl;
//}
//Base2::Base2(int x) {
//    cout<<"Base2 constructor called"<<x<<endl;
//}
//Base2::~Base2() {
//    cout<<"Base2 destructor called"<<endl;
//}
//Base3::Base3(int x) {
//    cout<<"Base3 constructor called"<<x<<endl;
//}
//Base3::~Base3() {
//    cout<<"Base3 destructor called"<<endl;
//}
//
//Derived::Derived(int x1, int x2, int x3, int x4) : Base2(x3),Base1(x2),Base3(x4){
//    cout<<"Derived constructor called"<<x1<<endl;
//};
//Derived::~Derived() {
//    cout<<"Derived destructor called"<<endl;
//}
//
//int main()
//{
//    int x[4];
//    for (int i=0;i<4;i++)
//        cin>>x[i];
//    Derived d(x[0],x[1],x[2],x[3]);
//    return 0;
//}

//struct Base1{
//    int x;
//    Base1(int x);
//};
//struct Base2{
//    int x;
//    Base2(int x);
//};
//
//struct Derived:public Base1,public Base2
//{
//    int x;
//    Derived(Base1& a,Base2& b);
//};
//
//Base1::Base1(int x) :x(x){};
//Base2::Base2(int x) :x(x){};
//Derived::Derived(Base1 &a, Base2 &b) :Base1(a),Base2(b){
//    x=a.x+b.x;
//}
//
//int main()
//{
//    int x,y;
//    cin>>x>>y;
//    Base1 a(x);
//    Base2 b(y);
//    Derived d(a,b);
//    cout<<d.Base1::x<<"+"<<d.Base2::x<<"="<<d.x<<endl;
//    return 0;
//}

//class Complex
//{
//private:
//    double real;
//    double img;
//public:
//    Complex(double r=0.0, double i=0.0):real(r),img(i){};
//    Complex operator+(const Complex &c2) const ;
//    Complex operator-(const Complex &c2) const ;
//    Complex operator*(const Complex &c2) const ;
//    Complex operator/(const Complex &c2) const ;
//    friend ostream & operator<<(ostream &out, const Complex &c);
//};
//
//Complex Complex::operator+(const Complex &c2) const {
//    return Complex(real+c2.real,img+c2.img);
//}
//Complex Complex::operator-(const Complex &c2) const {
//    return Complex(real-c2.real,img-c2.img);
//}
//Complex Complex::operator*(const Complex &c2) const {
//    return Complex(real*c2.real-img*c2.img,real*c2.img+img*c2.real);
//}
//Complex Complex::operator/(const Complex &c2) const {
//    return Complex((real*c2.real+img*c2.img)/(c2.real*c2.real+c2.img*c2.img),(img*c2.real-real*c2.img)/(c2.real*c2.real+c2.img*c2.img));
//}
//
//ostream & operator<<(ostream &out, const Complex &c){
//    out<<c.real<<" "<<c.img<<endl;
//    return out;
//}
//
//int main(){
//    double  real,img;
//    cin>>real>>img;
//    Complex c1(real,img);
//    cin>>real>>img;
//    Complex c2(real,img);
//    cout<<c1+c2;
//    cout<<c1-c2;
//    cout<<c1*c2;
//    cout<<c1/c2;
//    return 0;
//}

//const double pi=3.14;
//class Shape{
//public:
//    Shape(){};
//    ~Shape(){};
//    virtual double getArea()=0;
//    virtual double getPerim()=0;
//};
//
//class Circle:public Shape{
//private:
//    double radius;
//public:
//    Circle(double rad): radius(rad){};
//    ~Circle(){};
//    virtual double getArea();
//    virtual double getPerim();
//};
//
//double Circle::getArea() {
//    return (pi*radius*radius);
//}
//double Circle::getPerim() {
//    return (2*pi*radius);
//}
//
//int main(){
//    double radius;
//    cin>>radius;
//    Circle c(radius);
//    cout<<c.getArea()<<" "<<c.getPerim()<<endl;
//    return 0;
//}

//class Shape{
//public:
//    Shape(){};
//    ~Shape(){};
//    virtual int Count(){
//        return 0;
//    }
//};
//class Triangle:public Shape{
//public:
//    Triangle(){};
//    ~Triangle(){};
//    virtual int Count(){
//        return 3;
//    }
//};
//class Rectangle:public Shape{
//public:
//    Rectangle(){};
//    ~Rectangle(){};
//    virtual int Count(){
//        return 4;
//    }
//};
//int getVertexCount(Shape *b){
//    return (b->Count());
//}
//
//int main(){
//    Shape s;
//    cout<<getVertexCount(&s)<<endl;
//    Triangle t;
//    cout<<getVertexCount(&t)<<endl;
//    Rectangle r;
//    cout<<getVertexCount(&r)<<endl;
//    return 0;
//}

//template <class T>
//T getSum(const T *array, int count){
//    T sum=0;
//    for (int i=0;i<count;i++){
//        sum+=array[i];
//    }
//    return sum;
//}
//
//int main(){
//    int n,m;
//    cin>>n>>m;
//    int* arr_int=new int[n];
//    double* arr_double=new double[m];
//    for (int i=0;i<n;++i){
//        cin>>arr_int[i];
//    }
//    for (int i=0;i<m;++i){
//        cin>>arr_double[i];
//    }
//    cout<<getSum(arr_int,n)<<endl;
//    cout<<getSum(arr_double,m)<<endl;
//    return 0;
//}

//template <class T>
//void binSearch(T arr[],int n, T key){
//    int low=0;
//    int high=n-1;
//    while (low<=high){
//        int mid=(low+high)/2;
//        if (key==arr[mid]){
//            cout<<mid<<endl;
//            break;
//        }
//        else if (key<arr[mid]){
//            cout<<mid<<endl;
//            high=mid-1;
//        }
//        else{
//            cout<<mid<<endl;
//            low=mid+1;
//        }
//    }
//}
//
//int main(){
//    int n,m;
//    int key1;
//    double key2;
//    cin>>n>>m>>key1>>key2;
//    int* arr_int=new int[n];
//    double* arr_double=new double[m];
//    for (int i=0;i<n;++i){
//        cin>>arr_int[i];
//    }
//    for (int i=0;i<m;++i){
//        cin>>arr_double[i];
//    }
//    binSearch(arr_int,n,key1);
//    binSearch(arr_double,m,key2);
//    return 0;
//}

//template <class T,int MAX=1000>
//class Stack{
//private:
//    T list[MAX+1];
//    int top;
//public:
//    Stack();
//    void push(const T &item);
//    T pop();
//    const T & peek() const ;
//    bool isEmpty() const ;
//};
//
//template <class T,int MAX>
//Stack<T,MAX>::Stack():top(-1){}
//
//template <class T,int MAX>
//void Stack<T,MAX>::push(const T &item) {
////    assert(!isEmpty());
//    list[++top]=item;
//}
//
//template <class T,int MAX>
//T Stack<T,MAX>::pop() {
//    assert(!isEmpty());
//    return list[top--];
//}
//
//template <class T,int MAX>
//const T& Stack<T,MAX>::peek() const {
//    assert(!isEmpty());
//    return list[top];
//}
//
//template <class T,int MAX>
//bool Stack<T,MAX>::isEmpty() const {
//    return top==-1;
//}
//
//int main(){
//    string s;
//    while (cin>>s){
//        int flag=0;
//        Stack<char> t;
//        for (int i=0;i<s.length();i++){
//            if (s[i]=='('){
//                t.push(s[i]);
//            }
//            else if (s[i]==')'){
//                if (t.isEmpty()){
//                    flag=1;
//                } else{
//                    t.pop();
//                }
//            }
//        }
//        if (!t.isEmpty()){
//            flag=1;
//        }
//        if (flag){
//            cout<<"No"<<endl;
//        } else{
//            cout<<"Yes"<<endl;
//        }
//    }
//    return 0;
//}

//int out[100];
//int main(){
//    map<string,int> s;
//    string m;
//    int i=0;
//    while (true){
//        cin>>m;
//        if (m=="QUIT"){
//            break;
//        }
//        out[i]=s[m];
//        s[m]++;
//        i++;
//    }
//    for (int j=0;j<i;j++){
//        cout<<out[j]<<endl;
//    }
////    for (map<string,int>::iterator iter=s.begin();iter!=s.end();++iter){
////        cout<<iter->first<<" "<<iter->second<<endl;
////    }
//    return 0;
//}

//int main(){
//    int n;
//    cin>>n;
//    int data;
//    vector<int> v;
//    vector<int> iv;
//    for (int i=0;i<n;i++){
//        cin>>data;
//        v.push_back(data);
//    }
//    sort(v.begin(),v.end());
//    unique_copy(v.begin(),v.end(),back_inserter(iv));
//    for (vector<int>::iterator iter=iv.begin();iter!=iv.end();++iter){
//        cout<<*iter<<endl;
//    }
//    return 0;
//}

//int main(){
//    string a,b;
//    cin>>a;
//    cin>>b;
//    vector<string> c(a.length()-b.length());
//    for (int i=0;i<a.length()-b.length();i++){
//        c.push_back(a.substr(i,b.length()));
//    }
//    cout<<count(c.begin(),c.end(),b);
//    return 0;
//}

//int main(){
//    int m,n;
//    double s;
//    while (cin>>m>>n>>s){
//        if (m==0&&n==0){
//            cout<<0<<endl;
//        } else{
//            cout<<setw(m)<<setfill('0')<<int(s);
//            if (n!=0){
//               ostringstream os;
//               os<<setiosflags(ios::fixed);
//               os<<fixed<<setprecision(n+1)<<s-int(s);
//               os<<setiosflags(ios::fixed);
//               string str=os.str();
//               for (int i=1;i<n+1;i++){
//                   cout<<str[i];
//               }
//            }
//            cout<<endl;
//        }
//    }
//    return 0;
//}

//class Student{
//public:
//    int id;
//    string name,grade;
//    Student(){};
//    Student(int id,string name,string grade);
//    bool operator<(const Student & s) const ;
//};
//istream & operator >>(istream & in,Student & s);
//ostream & operator <<(ostream & out,Student &s);
//
//Student::Student(int id, string name, string grade):id(id),name(name),grade(grade) {}
//
//bool Student::operator<(const Student &s) const {
//    if (id<s.id){
//        return true;
//    } else if (id>s.id){
//        return false;
//    }
//}
//istream & operator >>(istream & in,Student & s){
//    in>>s.id>>s.name>>s.grade;
//    return in;
//}
//ostream & operator <<(ostream & out,Student & s){
//    out<<s.id<<" "<<s.name<<" "<<s.grade<<endl;
//    return out;
//}
//
//int main(){
//    vector<Student> sv;
//    Student temp;
////    循环无法退出
////    while (cin>>temp){
////        sv.push_back(temp);
////    }
//    for (int i=0;i<3;i++){
//        cin>>temp;
//        sv.push_back(temp);
//    }
//    sort(sv.begin(),sv.end());
//    for (int i=0;i<sv.size();++i){
//        cout<<sv[i];
//    }
//    return 0;
//}

//double calArea(double a, double b, double c) throw(invalid_argument)
//{
//    if (a!=b||a!=b||b!=c){
//        throw invalid_argument("The input is illegal");
//    } else{
//        cout<<"yes"<<endl;
//    }
//}
//
//int main(){
//    double a,b,c;
//    cin>>a>>b>>c;
//    try {
//        double area=calArea(a,b,c);
//        cout<<area<<endl;
//    }catch (exception& e){
//        cout<<e.what()<<endl;
//    }
//    return 0;
//}



















