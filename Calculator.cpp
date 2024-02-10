#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#include <fstream>

const double PIE = 3.14159265;
const int r=5,c=5;

using namespace std;
int factorial(int n);



class HexToBin //---------------------------------------------class for hexadecimal to binary
{
private:
    char hexdec[100];
    ofstream ifile;
public:
    void getdata()
    {

    cout<<"\nEnter hexadecimal:";
    cin>>hexdec;
    }
   void convert()
   {


    long int inti = 0;

    while (hexdec[inti]) {

        switch (hexdec[inti]) {

        case '0':
            cout << "0000";
            break;

        case '1':
            cout << "0001";
            break;

        case '2':
            cout << "0010";
            break;

        case '3':
            cout << "0011";
            break;

        case '4':
            cout << "0100";
            break;

        case '5':
            cout << "0101";
            break;

        case '6':
            cout << "0110";
            break;

        case '7':
            cout << "0111";
            break;

        case '8':
            cout << "1000";
            break;

        case '9':
            cout << "1001";
            break;

        case 'Z':
        case 'z':
            cout << "1010";
            break;

        case 'Y':
        case 'y':
            cout << "1011";
            break;

        case 'X':
        case 'x':
            cout << "1100";
            break;

        case 'W':
        case 'w':
            cout << "1101";
            break;

        case 'V':
        case 'v':
            cout << "1110";
            break;

        case 'U':
        case 'u':
            cout << "1111";
            break;

        default:
            cout << "\nThe following is an invalid hexadecimal digit "
                 << hexdec[inti];
        }
        inti++;
    }
   }
   void file()
    {


    ifile.open("calculations.txt",ios::app|ios::ate);
    ifile<<"\nYour input for hexadecimal to binary : ";
    ifile<<hexdec;
    ifile.close();





    }
};

class trig //----------------------------------------------------class for trigonometry functions
{
private:
    double deg, rad;
public:
     void getdata()
     {
          cout << "Please enter the angle in degrees ";
    cin >> deg;
     }

   void putdata()
   {

    rad = deg * PIE / 180.0;
    cout << "Here are the values of the trigonometric ratios " << endl;

    cout << "cos(rad) = " << setprecision(3)
              << cos(rad) << endl;

    cout << "sin(rad) = " << setprecision(3)
              << sin(rad) << endl;

    cout << "tan(rad) = " << setprecision(3)
              << tan(rad) << endl;
   }

};
template<class BD>//---------------------------------------------------------------------Class for binary to decimal and vice versa
	class Conversion
	{
	    public:

        BD num;
        BD rem;
        BD temp;
        BD dec;
        BD a;
        BD i;
        BD a1[];

   void binary_decimal()
    {
        dec = 0, a = 1;
    cout << "Enter the binary number : ";
    cin >> num;
    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        dec = dec + rem * a;
        a *= 2;
        temp /= 10;
    }
    cout << "The decimal equivalent of " << num << " is " << dec<<endl;
    }

    void decimal_binary()
   {
    a1[10], i;
   cout<<"Enter the number to convert: ";
   cin>>num;
   for(i=0; num>0; i++)
    {
     a1[i]=num%2;
     num= num/2;
    }
    cout<<"Binary of the given number: ";
    for(i=i-1 ;i>=0 ;i--)
    {
     cout<<a1[i];
    }
    ofstream ifile;
    ifile.open("calculations.txt",ios::app|ios::ate);
    ifile<<"Your input for decimal to binary: ";
    ifile<<num;
    ifile.close();
}
void file()
    {
    ofstream ifile;
    ifile.open("calculations.txt",ios::app|ios::ate);
    ifile<<"Your input for binary to decimal : ";
    ifile<<num;
    ifile<<"\nOutput(Conversion answer):";
    ifile<<dec;
    ifile.close();
    }
};
template<class A>//-------------------------------------------------------------------------class for addition/subtraction/multiplication/division
	class basic
	{
	    private:
	    A basicnum1;
	    A basicnum2;
        A basicsum;
        A quo;
        A num;
        A rem;
        A temp;
        A dec;
        A a;
        A i;
        A a1[];
        public:
	    void add()
       {
      cout<<"Enter number: ";
      cin>>basicnum1;
      while(basicnum1!=-1)
      {
          cout<<"\nEnter number:";
          cin>>basicnum1;
        basicsum=basicsum+basicnum1;
      }
      cout<<"The answer is:"<<basicsum<<endl;

       }


    void subtract()
    {
        cout<<"Enter number : ";
        cin>>basicnum1;
        basicsum=basicnum1;
        while(basicnum1!=-1)
        {
            cout<<"Enter number: ";
            cin>>basicnum1;
            basicsum=basicsum-basicnum1;
        }
        basicsum=basicsum-1;
        cout<<"The answer is: "<<basicsum<<endl;
    }

    void multiply()
    {
        cout<<"Enter number: ";
        cin>>basicnum1;
        basicsum=basicnum1;
      while(basicnum1!=-1)
      {

          cout<<"Enter number: ";
          cin>>basicnum1;
          basicsum=basicsum*basicnum1;
      }
      cout<<"The answer is: "<<basicsum<<endl;
    }

    void divide()
    {
         quo=0;
         cout<<"Enter divisor: ";
         cin>>basicnum1;
         cout<<"Enter dividend: ";
         cin>>basicnum2;
         quo=basicnum1/basicnum2;
         cout<<"The quotient is: "<<quo<<endl;
    }
    void file()
    {
    ofstream ifile;
    ifile.open("calculations.txt",ios::out|ios::ate);
    ifile<<"\nOutput for basic calculations(add/sub/divide/multiply):";
    ifile<<basicsum;
    ifile.close();
    }

	};
template<class T>
class matrix//----------------------------------------------------------------------------------------------------------class for matrix
{
private:

 T m[r][c];
public:
 void get_value()
 {
  for(int i=0;i<r;i++)
  {
   for(int j=0;j<c;j++)
   {
    cout<<"\n M["<<i<<"]["<<j<<"] = ";
    cin>>m[i][j];
   }
  }
 }

 void operator +(matrix ob)
 {
  T p[r][c];

  for(int i=0;i<r;i++)
  {
   for(int j=0;j<c;j++)
   {
    p[i][j]=m[i][j]+ob.m[i][j];
    cout<<" "<<p[i][j]<<" ";
   }
   cout<<"\n";
  }
 }

 void operator -(matrix ob)
 {
  T p[r][c];

  for(int i=0;i<r;i++)
  {
   for(int j=0;j<c;j++)
   {
    p[i][j]=m[i][j]-ob.m[i][j];
    cout<<" "<<p[i][j]<<" ";
   }
   cout<<"\n";
  }
 }

 void operator *(matrix ob)
 {
  T p[r][c];

  for(int i=0;i<r;i++)
  {
   for(int j=0;j<c;j++)
   {
    p[i][j]=0;
    for(int k=0;k<c;k++)
    {
     p[i][j]+=(m[i][k] * ob.m[k][j]);
    }
   }
  }

  for(int i=0;i<r;i++)
  {
   for(int j=0;j<c;j++)
   {
    cout<<" "<<p[i][j]<<" ";
   }
   cout<<"\n";
  }
 }



 void transpose()
 {
  T p[r][c];

  for(int i=0;i<r;i++)
  {
   for(int j=0;j<c;j++)
   {
    p[j][i]=m[i][j];
   }for(int i=0;i<r;i++)
  {
   for(int j=0;j<c;j++)
   {
    cout<<" "<<p[i][j]<<" ";
   }
   cout<<"\n";
  }
  }
 }


 void display()
 {
  for(int i=0;i<r;i++)
  {
   for(int j=0;j<c;j++)
   {
    cout<<" "<<m[i][j]<<" ";
   }
   cout<<"\n";
  }
  cout<<"\n\n";
 }

};
class squareRoot //-----------------------------------------------------------------------------------------------class for square roots
{
    public:
    float sq,n;
    public:
    void sq_root()
    {
        do{
     cout<<"Enter number: ";
     cin>>n;
     if(n<0)
     {
         cout<<"SQUARE ROOT OF NEGATIVE NUMBER IS UNDEFINED"<<endl;
         cout<<"PLEASE ENTER A POSITIVE NUMBER"<<endl;
     }
        }while(n<0);
     sq=sqrt(n);
	cout<<"Square root of "<<n<<" is "<<sq;

    }
    void file()
    {
    ofstream ifile;
    ifile.open("calculations.txt",ios::out|ios::ate);
    ifile<<"\nYour input:";
    ifile<<n;
    ifile<<"\nOutput Square Root:";
    ifile<<sq;
    ifile.close();
    }
};
class roots //------------------------------------------------------------------------------------------------------Quadratic Equations
{
	int a, b, c;
	float r1, r2;
	public:
		void getdata();
		int determinant();
		void checkdeterminant(int);
		void file();
};

void roots::getdata() {
	cout << "Enter value of coefficient of x^2: ";
	cin >> a;
	cout << "Enter value of coefficient of x: ";
	cin >> b;
	cout << "Enter value of coefficient of 1: ";
	cin >> c;
}

int roots::determinant() {
	int d = b * b;
	d -= (4 * a * c);
	return d;
}

void roots::checkdeterminant(int d) {
	if (d == 0) {
		cout << "Real and equal roots\n";
		r1 = (-1 * b);
		r1 /= (2 * a);
		r2 = r1;
		cout << "Roots : " << r1 << " and " << r2 << endl;
	}
	else if (d > 0) {
		cout << "Real and distinct roots\n";
		r1 = (-1 * b) + sqrt(d);
		r1 /= (2 * a);
		r2 = (-1 * b) - sqrt(d);
		r2 /= (2 * a);
		cout << "Roots : " << r1 << " and " << r2 << endl;
	}
	else {
		cout << "Imaginary roots" << endl << endl;
		r1 = (-b)/(2*a);
		r2 = (sqrt(-d))/(2*a);
		cout << "Roots : " << r1 << " + i" << r2 ;
		cout << " and " << r1 << " - i" << r2 << endl<<endl;
	}
}
void roots::file()
    {
    ofstream ifile;
    ifile.open("calculations.txt",ios::out|ios::ate);
    ifile<<"\nInput for Quadratic:";
    ifile<<a<<"\n";
    ifile<<b<<"\n";
    ifile<<c<<"\n";
    ifile<<"\nOutput for :";
    ifile<<r1<<"\n";
    ifile<<r2;
    ifile.close();
    }
class Fibonacci{
public:
    int a, b, c;
    void generate(int);
};

void Fibonacci::generate(int n){
    a = 0; b = 1;
    cout << a << " " <<b;
    for(int i=1; i<= n-2; i++){
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
}
class gpa// -----------------------------------------------------------------------------------------------------class for calculating GPA
{
private:
    int n=0;
    int subCount;
    int percentageSub;
    double GpaSub;
    double AggGpa;
    double sum;
public:
    void getdata()
    {
        cout<<"How many Subjects did you have this Semester? \n ->";
        cin>>subCount;
        int *ptrICA=new int [n];
        int *ptrFE=new int [n];
        for(int i=0;i<subCount;i++)
        {
            cout<<"\nEnter Internal Assessment Score for Subject"<<" "<<(i+1)<<":";
            cin>>ptrICA[i];
            cout<<"\nEnter Final Exam Scores for subject"<<" "<<(i+1)<<":";
            cin>>ptrFE[i];
        }
        for(int i=0;i<subCount;i++)
        {
           percentageSub=ptrICA[i]+ptrFE[i];
           cout<<"\nPercentage for subject"<<" "<<(i+1)<<"\t"<<percentageSub;
           GpaSub=(ptrICA[i]+ptrFE[i])*0.04;
           cout<<"\nGradePoint for subject"<<" "<<(i+1)<<"\t"<<GpaSub;

        }
        for(int i = 0; i <subCount; i++) {
        sum += (ptrICA[i]+ptrFE[i])*0.04;
    }

    AggGpa = (float)sum / subCount;
    cout << "\nGPA = " << AggGpa;


    }
    void file()
    {
    ofstream ifile;
    ifile.open("calculations.txt",ios::out|ios::ate);
    ifile<<"\nOutput GPA calculations:";
    ifile<<AggGpa;
    ifile.close();
    }

};

class cgpa
{
private:
    int sem;
    float semes[100];
    float average;
    float sum;
public:
    void getdata()
    {
        cout<<"\n------CGPA calculator--------";
        cout<<"\nHow many semesters";
        cin>>sem;
        cout<<"\nEnter Gpa of the semesters :-";
        for(int i=0;i<sem;i++)
        {

            cout<<"\nSemester "<<i+1<<":";
            cin>>semes[i];
        }
        for(int i = 0; i <sem; i++) {
        sum += semes[i];
    }

    average = (float)sum / sem;
    cout << "CGPA = " << average;
    }
    void file()
    {
    ofstream ifile;
    ifile.open("calculations.txt",ios::out|ios::ate);
    ifile<<"\nOutput CGPA calculations:";
    ifile<<average;
    ifile.close();
    }
};
struct Fra//------------------------------------------------------- ---------------------------------------use of structure for fractions
     {
        int num;
        int denom;

      };

Fra sum(Fra,Fra);
Fra sum(Fra f1, Fra f2)//----------------------------------------------------------------------------------function for sum of fractions
    {
     Fra result={(f1.num * f2.denom) + (f2.num * f1.denom), f1.denom * f2.denom};
     return result;

   }
class fraction
{
private:
    int num1,denom1,num2,denom2;

public:
    void calc()
    {
        cout<<"Enter the numerator and denominator for the first fraction:";
     cin>>num1>>denom1;

     cout<<"Enter the numerator and denominator for the second fraction:";
     cin>>num2>>denom2;

     Fra f1={num1, denom1};

     Fra f2 ={num2, denom2};

     Fra result = sum(f1, f2);

     cout<<result.num<<"/"<<result.denom;
     ofstream ifile;
    ifile.open("calculations.txt",ios::out|ios::ate|ios::app);
    ifile<<"\nOutput for basic Fractions:";
    ifile<<result.num<<"\n";
    ifile<<result.denom;
    ifile.close();


    }



};
int factorial(int factn)//---------------------------------------------------------------------------------------Function of factorial
{
    if(factn > 1)
        return factn * factorial(factn - 1);
    else
        return 1;
}
class Linear_equations_variable2//-------------------------------------------------------------------class for linear equations 2 variables
{
private:
    float x,y,a[10][10];
public:
    void equate()
 {

   cout<<"Enter coefficients of variables in matrix form: "<<endl;
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
           cin>>a[i][j];
    for(int i=0;i<2;i++)
        cout<<a[i][0]<<"x + "<<a[i][1]<<"y = "<<a[i][2]<<endl;
    for(int i=1,k=0;i>=0;i--,k++)
        for(int j=2;j>=0;j--)
            a[i][j]=a[i][j]-a[k][j]*(a[i][0]/a[k][k]);
    x=a[0][2]/a[0][0];
    y=a[1][2]/a[1][1];
    cout<<"x = "<<x;
    cout<<endl<<"y = "<<y;
 }
 void file()
 {
 ofstream ifile;
    ifile.open("calculations.txt",ios::out|ios::ate|ios::app);
    ifile<<"\nOutput for basic Linear Equations Variable 2:";
    ifile<<x<<"\n";
    ifile<<y;
    ifile.close();
 }

};

class linear_equations_3_variable//-----------------------------------------------------------------------class for 3 variable linear equations
{
    private:


    float sol[3],a[2][2];
    public:

    void equate()
    {
        cout<<"Enter coefficients of variables in matrix form: "<<endl;
    for(int i=0;i<3;i++)

       for(int j=0;j<4;j++)
           cin>>a[i][j];
           cout<<endl<<endl;
    for(int i=0;i<3;i++)
        cout<<a[i][0]<<"x + "<<a[i][1]<<"y + "<<a[i][2]<<"z = "<<a[i][3]<<"\n";
    for(int i=1;i<3;i++)
        for(int j=3;j>=0;j--)
             a[i][j]=a[i][j]-a[0][j]*(a[i][0]/a[0][0]);
    for(int i=0;i<3;i+=2)
        for(int j=3;j>=0;j--)
            a[i][j]=a[i][j]-a[1][j]*(a[i][1]/a[1][1]);
    for(int i=0;i<2;i++)
        for(int j=3;j>=0;j--)
            a[i][j]=a[i][j]-a[2][j]*(a[i][2]/a[2][2]);
    for(int i=0;i<3;i++)
    sol[i]=a[i][3]/a[i][i];
    cout<<"\n\nx = "<<sol[0];
    cout<<endl<<"y = "<<sol[1];
    cout<<endl<<"z = "<<sol[2]<<endl;

    }


};

int main()
{

 display:
     gpa g;
     trig obj6;
     HexToBin obj;
     roots r;
     fraction f;
     basic <int>i;
     basic <float>b;
     basic<double>d;
     Conversion <int> c;
     linear_equations_3_variable objlinear;
     Linear_equations_variable2 objlinear2;
     squareRoot sq;
     cgpa objcgpa;
     fstream ifile;

 int choice;
 cout<<"\n-----------------------------------------------------------------------";
 cout<<"\n|                    C A l C U L A T O R                              |";
 cout<<"\n-----------------------------------------------------------------------";
 cout<<"\n-----------------------------------------------------------------------";
 cout<<"\n|Press 1 : Addition | Press 2 :Subtraction |Press 3:Multiplication      |";
 cout<<"\n------------------------------------------------------------------------";
 cout<<"\n|Press 4 : Division | Press 5 :Matrices    |Press 6 :Exponents&Trigo    |";
 cout<<"\n------------------------------------------------------------------------";
 cout<<"\n|Press 7 : Fractions| Press 8:History Calc |Press 9:Binary to Decimal   |";
 cout<<"\n------------------------------------------------------------------------";
 cout<<"\n|Press 10 :GPA calc | Press 11:CGPA calc   |Press 12:Fibonacci Series   |";
 cout<<"\n------------------------------------------------------------------------";
 cout<<"\n|Press 13 :Square R | Press 14:Factorial   |Press 15:Decimal to Binary  |";
 cout<<"\n------------------------------------------------------------------------";
 cout<<"\n|Press 16  : Linear Equations    | Press 17:Quadratic Equations         |";
 cout<<"\n------------------------------------------------------------------------";
 cout<<"\n|               | Press 18:Hexadecimal to Binary |                      |";
 cout<<"\n------------------------------------------------------------------------";
 cout<<"\n|                     | Press 19 : Exit|                                |";
 cout<<"\n------------------------------------------------------------------------";
 choice:
 cout<<"\nEnter your Choice:";
 cin>>choice;
 if(choice>19)
 {
     cout<<"\nInvalid choice , Re-enter to proceed further";
     goto choice;
 }
 else
 {
  switch(choice)
  {
  case 1:
      int dtADD;
      cout<<"Select your choice of datatype:\n1-Integer\n2-Float(Floating Point data type is used for storing single precision floating point values or decimal values)\n3-Double(Double Floating Point data type is used for storing double precision floating point values or decimal values)\nYour choice:";
      cin>>dtADD;
      switch(dtADD)
      {
      case 1:
          i.add();
          i.file();
        break;
      case 2:
          b.add();
          b.file();
        break;
      case 3:
          d.add();
          d.file();
        break;
      }
       goto display;


    break;
    case 2:
        int dtSUB;
        cout<<"Select your choice of datatype:\n1-Integer\n2-Float(Floating Point data type is used for storing single precision floating point values or decimal values)\n3-Double(Double Floating Point data type is used for storing double precision floating point values or decimal values)\nYour choice:";
        cin>>dtSUB;
        switch(dtSUB)
        {
        case 1:
            i.subtract();
            i.file();
            break;
        case 2:
            b.subtract();
            i.file();
            break;
        case 3:
            d.subtract();
            i.file();
            break;
        }
         goto display;

    break;
    case 3:
        int dtMULTI;
        cout<<"Select your choice of datatype:\n1-Integer\n2-Float(Floating Point data type is used for storing single precision floating point values or decimal values)\n3-Double(Double Floating Point data type is used for storing double precision floating point values or decimal values)\nYour choice:";
        cin>>dtMULTI;
        switch(dtMULTI)
        {
        case 1:
            i.multiply();
            i.file();
            break;
        case 2:
            b.multiply();
            b.file();
            break;
        case 3:
            d.multiply();
            d.file();
            break;
        }
         goto display;

    break;
    case 4:
        int dtDIV;
        cout<<"Select your choice of datatype:\n1-Integer\n2-Float(Floating Point data type is used for storing single precision floating point values or decimal values)\n3-Double(Double Floating Point data type is used for storing double precision floating point values or decimal values)\nYour choice:";
        cin>>dtDIV;
        switch(dtDIV)
        {
        case 1:
            i.divide();
            i.file();
            break;
        case 2:
            b.divide();
            b.file();
            break;
        case 3:
            d.divide();
            d.file();
            break;
        }
         goto display;
        break;

    case 5:
        int ch,datatype;
 cout<<"\nWould you like to enter data in \n1:-integer \n2:-double?";
 cin>>datatype;
if(datatype==1)
{
   matrix<int> m1,m2;
   cout<<"\n Enter Elements of Matrix A\n";
 m1.get_value();
 cout<<"\n Enter Elements of Matrix B\n";
 m2.get_value();

 while(1)
 {
  system("cls");
  cout<<"\n----------MATRIX OPERATIONS-----------\n\n";
  cout<<"\n 1. Sum";
  cout<<"\n 2. Difference";
  cout<<"\n 3. Product";
  cout<<"\n 4. Transpose";
  cout<<"\n 5. Display";
  cout<<"\n 0. EXIT\n";
  cout<<"\n Enter your choice: ";
  cin>>ch;

  switch(ch)
  {
  case 1: cout<<"\n\n Matrices Sum \n\n";
    m1 + m2;
   break;
  case 2: cout<<"\n\n Matrices Subtraction \n\n";
    m1-m2;
   break;
  case 3: cout<<"\n\n Matrices Product \n\n";
    m1*m2;
   break;
  case 4:

    cout<<"\n\n MATRIX A\n";
    m1.display();
    cout<<"\n\n Transposed Matrix\n";
    m1.transpose();
    cout<<"\n\n MATRIX B\n";
    m2.display();
    cout<<"\n\n Transposed Matrix\n";
    m2.transpose();
   break;
  case 5: cout<<"\n\n MATRIX A\n";
    m1.display();
    cout<<"\n\n MATRIX B\n";
    m2.display();
   break;
  case 0: exit(0);
  default: cout<<"\n\n Invalid choice";
  system("pause");}

}}
else
{
    matrix<double> m1,m2;
 int ch;

 cout<<"\n Enter Elements of Matrix A\n";
 m1.get_value();
 cout<<"\n Enter Elements of Matrix B\n";
 m2.get_value();

 while(1)
 {
  system("cls");
  cout<<"\n----------MATRIX OPERATIONS-----------\n\n";
  cout<<"\n 1. Sum";
  cout<<"\n 2. Difference";
  cout<<"\n 3. Product";
  cout<<"\n 4. Transpose";
  cout<<"\n 5. Display";
  cout<<"\n 0. EXIT\n";
  cout<<"\n Enter your choice: ";
  cin>>ch;

  switch(ch)
  {
  case 1: cout<<"\n\n Matrices Sum \n\n";
    m1 + m2;
   break;
  case 2: cout<<"\n\n Matrices Subtraction \n\n";
    m1-m2;
   break;
  case 3: cout<<"\n\n Matrices Product \n\n";
    m1*m2;
   break;
  case 4:

    cout<<"\n\n MATRIX A\n";
    m1.display();
    cout<<"\n\n Transposed Matrix\n";
    m1.transpose();
    cout<<"\n\n MATRIX B\n";
    m2.display();
    cout<<"\n\n Transposed Matrix\n";
    m2.transpose();
   break;
  case 5: cout<<"\n\n MATRIX A\n";
    m1.display();
    cout<<"\n\n MATRIX B\n";
    m2.display();
   break;
  case 0: exit(0);
  default: cout<<"\n\n Invalid choice";
  system("pause");}

}}
 goto display;
    break;
    case 6:

        obj6.getdata();
        obj6.putdata();
         goto display;
    break;
    case 7:
        f.calc();
         goto display;

    break;
    case 8:
        ifile.open("calculations.txt",ios::in);
   if (ifile.is_open()){
      string tp;
      while(getline(ifile, tp)){
         cout << tp << "\n";
      }
      ifile.close();
   }
         goto display;
    break;
    case 9:
        c.binary_decimal();
        c.file();
         goto display;
    break;
    case 10:
        g.getdata();
        g.file();

         goto display;
    break;
    case 11:
        objcgpa.getdata();
        objcgpa.file();

         goto display;
    break;
    case 12:
        cout <<"\nFibonacci series" << endl;
    cout <<"\nEnter number of items you need in the series: ";
    int n;
    cin  >> n;
    Fibonacci fibonacci;
    fibonacci.generate(n);
     goto display;
    break;
    case 13:
        sq.sq_root();
        sq.file();
         goto display;
        break;
    case 14:
    int factn;

    cout<<"Enter a positive integer: ";
    cin>>factn;

    cout<<"Factorial of "<<factn<< " = " << factorial(factn);

         goto display;
        break;
    case 15:
        c.decimal_binary();
         goto display;
    break;

    case 16:
        int linearChoice;
        cout<<"Choose the variables of Linear Equations:\n1-2 variables \n2-3 Variables \nYour choice:";
        cin>>linearChoice;
        switch(linearChoice)
        {
        case 1:
            objlinear2.equate();
            objlinear2.file();
            break;
        case 2:
            objlinear.equate();
        }
         goto display;
        break;
   case 17:
       r.getdata();
    r.determinant();
    int abc;
    r.checkdeterminant(abc);
    r.file();
     goto display;

        break;
   case 18:
       obj.getdata();
        cout<<"\nYour converted Binary value is : ";
        obj.convert();
        obj.file();
         goto display;
    break;
   case 19:
       cout<<"\nThank You for your time"<<endl;
    break;


  }

 }
}





