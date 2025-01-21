#include <simplecpp>

main_program {
  float series = 1, denominator = 2;
  int entries;

  cout<<"Enter the items in the series: ";
  cin>>entries;

  repeat(entries) {
    series = series + (1/denominator)*pow(-1,denominator-1);
    denominator++;
  }
  
  cout<<series<<endl;
}
