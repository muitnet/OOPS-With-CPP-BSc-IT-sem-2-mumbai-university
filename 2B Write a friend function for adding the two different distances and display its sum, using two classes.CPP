  #include<iostream.h>
  #include<conio.h>
  class fi;
  class mc
  {
  int m,cm;
  public:
  void getdata()
  {
  cout<<"\n enter the length in meter and centimeter";
  cin>>m>>cm;
  }
  friend fi add(fi,mc);
  };
  class fi
  {
  int f,i;
  public:
  void getdata()
  {
  cout<<"\n enter the length in feet and inch";
  }
  void putdata()
  {
  cout<<f<<"feet"<<i<<"inch";
  }
  friend fi add(fi,mc);
  };
  fi add(fi f1,mc m1)
  {
  fi t;
  float j;
 j=m1.m*100+m1.cm;
  j=j*0.393700787;
  t.f=j/12;
  int k=int(j);
  t.i=k%12;
  t.i=t.f+f1.f;
  t.i=t.i%12;
  return(t);
  }
  void main()
  {
  clrscr();
  mc m1;
  fi f1,f2;
  m1.getdata();
  f1.getdata();
  f2=add(f1,m1);
  cout<<"\n sum length";
  f2.putdata();
  getch();
  }
  