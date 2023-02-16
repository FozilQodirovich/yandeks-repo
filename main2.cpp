//12 savol.
// #include<iostream>
// #include<cmath>

// using namespace std;

// int main(){
//     float a, b, c, p;
//     cout << "a="; cin >> a;
//     cout << "b=" ; cin >> b;
//     c = sqrt (pow(a,2)+pow(b,2));
//     cout << "gepotenuza=" << c << endl;
//     p =  a + b + c;
//     cout << "perimetr=" << p << endl;
//     system ("pause");
//     return 0;
// }
//13 savol.
// #include<iostream>
// #include<cmath>

// using namespace std;
// int main ()
// {
// float pi= 3.14, s1, s2, s3, r1, r2;
// cout << "r1=" ; cin >> r1;
// cout << "r2="; cin >> r2;
// s1 = pi* pow (r1,2);
// cout << "r1=" << r1 << endl;
// s2 = pi * pow (r2,2);
// cout << "r2=" << r2 << endl;
// s3 = pi* (r1-r2);
// cout << "s3=" << s3 << endl; 

//     system("pause");
//     return 0;
// }
// 14 savol
// #include<iostream>
// #include<cmath>

// using namespace std;
// int main ()
// {
//     float s, L, r,  pi = 3.14;
//     cout << "r = " ; cin >> r;
//     cout << "L=" << L << endl;
//     L = 2*pi* pow (r,2);
//     s = pi* pow (r,2);
//     cout << "s=" << s << endl;
//     system("pause");
//     return 0;
// }
//15 savol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main ()
// {
//     float s, d, r, pi = 3.14;
//     cout << " s= " ; cin >> s;
//     r = sqrt(s/pi);
//     cout << " r = " << r << endl;
//     d = 2*r;
//     cout << "d=" << d;
//     system("pause");
//     return 0;
// }

// #include<iostream>
// #include<cmath>

// using namespace std;

// int main(){

//     float S,R,pi=3.14;

//     cout<<"Doiraning yuzini kiriting S="; cin>>S;
//     R = sqrt(S/pi);
//     cout<<"doiraning radiusi R="<<R<<endl;
//     cout<<"doiraning diametri d="<<2*R<<endl;

//     system("pause");
//     return 0;

// }
// 16 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int x1, x2, y;
//     cout << " x1 ="; cin >> x1;
//     cout << " x2 ="; cin >> x2;
//     y=x2-x1;
//     cout << "y=" << y << endl;
//     system ("pause");
//     return 0;

// }
// 17 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main ()
// {
//     int a, b, c, x, y, z;
//     cout << "a="; cin >> a;
//     cout << "b="; cin >> b;
//     cout << "c="; cin >> c;
//     x=c-a;
//     cout << "ac nuqtalar orasidagi masofa x=" << x << endl;
//     y=c-b;
//     cout << "bc nuqtalar orasidagi masofa y=" << y << endl;
//     z=x+y;
//     cout << " kesmalar yigindisi z=" << z << endl;
//     system("pause");
//     return 0;
//}
// 18 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main ()
// {
//     int a, b, c, x, y, z;
//     cout << "a="; cin >> a;
//     cout << "b="; cin >> b;
//     cout << "c="; cin >> c;
//     if (c>a);
//     if (c<b);
//     x=c-a; 
//     cout << "ac orasidagi masofa x=" << x << endl;
//     y=b-c;
//     cout << "bc orasidagi masofa y=" << y << endl;
//     z=x*y;
//     cout << "kesmalar yigindisi z=" << z << endl;
//     system ("pause");
//     return 0;
// } 
// 20 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int x1, x2, y1, y2, a;
   
//     cout << "x1 ni kiriting x1="; cin >> x1;
//     cout << "x2 ni kiriting x2="; cin >> x2;
//     cout << "y1 ni kiriting y1="; cin >> y1;
//     cout << "y2 ni kiriting y2="; cin >> y2;
//     a = sqrt ((x1+x2)*(x2-x1)+(y1+y2)*(y2-y1));
//     cout << " natija a =" << a << endl;
//     system ("pause");
//     return 0; 

// }
// 21 misol.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int x1, x2, x3, y1, y2, y3, a, b, c, s, p;
//     cout << "x1 ni kiriting x1 ="; cin >> x1;
//     cout << "x2 ni kiritinhg x2 ="; cin >> x2;
//     cout << "x3 ni kiriting x3 ="; cin >> x3;
//     cout << "y1 ni kiriting y1 ="; cin >> y1;
//     cout << "y2 ni kiriting y2="; cin >> y2;
//     cout << "y3 ni kiriting y3="; cin >> y3;
//     a= sqrt(pow(x1,2)+pow(y1,2));
//     b= sqrt(pow(x2,2)+pow(y2,2));
//     c= sqrt(pow(x3,2)+pow(y3,2));
//     if (a<b+c);
//     if (b<a+c);
//     if (c<b+c);
//     p = (a+b+c)/2;
//     cout << "uchburchak peremetri p=" << p << endl;
//     s=sqrt(p*(p-a)*(p-b)*(p-c));
//     cout << "uchburchak yuzi s=" << s << endl;
//     system("pause");
//     return 0;

// }
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int a, b, x, y;
    
//     cout << "x ni kiriting x="; cin>> x;
//     cout << "y ni kiriting y="; cin>> y;
//     a=x;
//     b=y;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
//     a=y;
//     b=x;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
//     system("pause");
//     return 0;
// }
// 24 misol.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main ()
// {
//     int a, b, c, x, y, z;
//     cout << "x ni kiriting x="; cin>> x;
//     cout << "y ni kiriting y="; cin>> y;
//     cout << "z ni kiriting z="; cin>> z;
//     a=x;
//     b=y;
//     c=z;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
//     cout << "c=" << c << endl;
//     a=y;
//     b=z;
//     c=x; 
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
//     cout << "c=" << c << endl;
//     system("pause");
//     return 0; 



// }
// 25 misol.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main ()
// {
//     int x, y;
//     cout << "x ni kiriting x="; cin>> x;
//     y=3*pow(x,6)-6*pow(x,2)-7;
//     cout << "y=" << y << endl;
//     system("pause");
//     return 0;
// }
// 26 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int x, y;
//     cout << "x ni kiriting x="; cin>> x;
//     y=4*pow((x-3),6) - 7*pow((x-3),3) + 2;
//     cout << "y=" << y << endl;
//     system("pause");
//     return 0;

//}

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main ()
// {
//     int a, x, y;
//     cout << "x ni kiriting x="; cin>> x;
//     cout << "a ni kiriting a="; cin>> a;
//     y=pow(a,2*x);
//     cout << "y=" << y << endl;
//     system("pause");
//     return 0;
// }
// 27 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int a, x1, x2, x3;
//     cout << "a ni kiriting a="; cin>> a;
//     x1=pow(a,2);
//     cout << "x1=" << x1 << endl;
//     x2=pow(a,4);
//     cout << "x2=" << x2 << endl;
//     x3=pow(a,8);
//     cout << "x3=" << x3 << endl;
//     system("pause");
//     return 0;


// }
//28 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {

//     int a, x1, x2, x3, x4, x5;
//     cout << "a ni kiriting a="; cin>> a;
//     x1=pow(a,2);
//     cout << "x1=" << x1 << endl;
//     x2=pow(a,3);
//     cout << "x2=" << x2 << endl;
//     x3=pow(a,5);
//     cout << "x3=" << x3 << endl;
//     x4=pow(a,10);
//     cout << "x4=" << x4 << endl;
//     x5=pow(a,15);
//     cout << "x5=" << x5 << endl;
//     system("pause");
//     return 0;
// }
// 29 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// float a, ra, pi=3.14;
// if (a>0);
// if (a<360);
// cout << "a ni kiriting a="; cin>> a;
// ra=(pi*a)/180;
// cout << "ra=" << ra << endl;
// system("pause");
// return 0;
// }
// 30 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     float a, pi=3.14, ra=57, g;
//     cout << "a ni kiriting a="; cin>> a;
//     if(0<a<2*pi);
//     g= ra*pi;
//     cout << "g=" << g << endl;
//     system("pause");
//     return 0;
// }
// 31 misol.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     float Tf, Tc;
//     cout << "Tf ni kiriting Tf="; cin>> Tf;
//     Tc= (Tf-32)*5/9;
//     cout << "Tc=" << Tc << endl;
//     system("pause");
//     return 0;
// }
//32 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     float Tf, Tc;
//     cout << "Tc ni kiriting Tc="; cin>> Tc;
//     Tf=(Tc-32)*5/9;
//     cout << "Tf=" << Tf << endl;
//     system ("pause");
//     return 0;
// }
// 33 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     float x, y, a, s, b;
//     cout << "konfet ogirligini x="; cin>> x;
//     cout << "x kanfet narxini kiriting a="; cin>> a; 
//     s=a/x;
//     cout << "s=" << s << endl;
//     cout << "konfet ogirligini kiriting"; cin>> y;
//     b=s*y;
//     cout << "b=" << b << endl;
//     system("pause");
//     return 0;
// }
//34 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     float x, a, y, b, s, c, z;
//     cout << "konfet ogirligini kiriting x="; cin>> x;
//     cout << "konfent narxini kiriting a="; cin>> a;
//     cout << "sholod ogirligi kiriting y="; cin>> y;
//     cout << "shokolad narxini kiriting b="; cin>> b;
//     s = a/x;
//     cout << "konfet narxi s=" << s << endl;
//     c = b/y;
//     cout << "shokolad narxi c=" << c << endl;
//     if (c>s)
//     cout << "shokolad qimmat" << endl;
//     else
//     if (c==s)
//     cout << "konfet narxi teng" << endl;
//     else
//     cout << "konfet narxi qimmat" <<
    
//     system("pause");
//     return 0;

// } 

//22 misol.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int a, b, x, y;
    
//     cout << "x ni kiriting x="; cin>> x;
//     cout << "y ni kiriting y="; cin>> y;
//     a=x;
//     b=y;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
//     a=y;
//     b=x;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
//     system("pause");
//     return 0;
// }
// 24 misol.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main ()
// {
//     int a, b, c, x, y, z;
//     cout << "x ni kiriting x="; cin>> x;
//     cout << "y ni kiriting y="; cin>> y;
//     cout << "z ni kiriting z="; cin>> z;
//     a=x;
//     b=y;
//     c=z;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
//     cout << "c=" << c << endl;
//     a=y;
//     b=z;
//     c=x; 
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
//     cout << "c=" << c << endl;
//     system("pause");
//     return 0; 



// }
// 25 misol.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main ()
// {
//     int x, y;
//     cout << "x ni kiriting x="; cin>> x;
//     y=3*pow(x,6)-6*pow(x,2)-7;
//     cout << "y=" << y << endl;
//     system("pause");
//     return 0;
// }
// 26 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int x, y;
//     cout << "x ni kiriting x="; cin>> x;
//     y=4*pow((x-3),6) - 7*pow((x-3),3) + 2;
//     cout << "y=" << y << endl;
//     system("pause");
//     return 0;

//}

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main ()
// {
//     int a, x, y;
//     cout << "x ni kiriting x="; cin>> x;
//     cout << "a ni kiriting a="; cin>> a;
//     y=pow(a,2*x);
//     cout << "y=" << y << endl;
//     system("pause");
//     return 0;
// }
// 27 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int a, x1, x2, x3;
//     cout << "a ni kiriting a="; cin>> a;
//     x1=pow(a,2);
//     cout << "x1=" << x1 << endl;
//     x2=pow(a,4);
//     cout << "x2=" << x2 << endl;
//     x3=pow(a,8);
//     cout << "x3=" << x3 << endl;
//     system("pause");
//     return 0;


// }
//28 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {

//     int a, x1, x2, x3, x4, x5;
//     cout << "a ni kiriting a="; cin>> a;
//     x1=pow(a,2);
//     cout << "x1=" << x1 << endl;
//     x2=pow(a,3);
//     cout << "x2=" << x2 << endl;
//     x3=pow(a,5);
//     cout << "x3=" << x3 << endl;
//     x4=pow(a,10);
//     cout << "x4=" << x4 << endl;
//     x5=pow(a,15);
//     cout << "x5=" << x5 << endl;
//     system("pause");
//     return 0;
// }
// 29 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// float a, ra, pi=3.14;
// if (a>0);
// if (a<360);
// cout << "a ni kiriting a="; cin>> a;
// ra=(pi*a)/180;
// cout << "ra=" << ra << endl;
// system("pause");
// return 0;
// }
// 30 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     float a, pi=3.14, ra=57, g;
//     cout << "a ni kiriting a="; cin>> a;
//     if(0<a<2*pi);
//     g= ra*pi;
//     cout << "g=" << g << endl;
//     system("pause");
//     return 0;
// }
// 31 misol.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     float Tf, Tc;
//     cout << "Tf ni kiriting Tf="; cin>> Tf;
//     Tc= (Tf-32)*5/9;
//     cout << "Tc=" << Tc << endl;
//     system("pause");
//     return 0;
// }
//32 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     float Tf, Tc;
//     cout << "Tc ni kiriting Tc="; cin>> Tc;
//     Tf=(Tc-32)*5/9;
//     cout << "Tf=" << Tf << endl;
//     system ("pause");
//     return 0;
// }
// 33 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     float x, y, a, s, b;
//     cout << "konfet ogirligini x="; cin>> x;
//     cout << "x kanfet narxini kiriting a="; cin>> a; 
//     s=a/x;
//     cout << "s=" << s << endl;
//     cout << "konfet ogirligini kiriting"; cin>> y;
//     b=s*y;
//     cout << "b=" << b << endl;
//     system("pause");
//     return 0;
// }
//34 misol
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     float x, a, y, b, s, c, z;
//     cout << "konfet ogirligini kiriting x="; cin>> x;
//     cout << "konfent narxini kiriting a="; cin>> a;
//     cout << "sholod ogirligi kiriting y="; cin>> y;
//     cout << "shokolad narxini kiriting b="; cin>> b;
//     s = a/x;
//     cout << "konfet narxi s=" << s << endl;
//     c = b/y;
//     cout << "shokolad narxi c=" << c << endl;
//     if (c>s)
//     cout << "shokolad qimmat" << endl;
//     else
//     if (c==s)
//     cout << "konfet narxi teng" << endl;
//     else
//     cout << "konfet narxi qimmat" <<
    
//     system("pause");
//     return 0;

// } 



















