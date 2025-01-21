#include <simplecpp>

double factorial(double num) {
    double result=1;
    for (int i = 1; i <= num; i++)
    {
        result = result*i;
    }
    return result; 
}

main_program {
    double sinx, power=3;
    int x;

    cout<<"Enter an angle in degrees: ";
    cin>>x;

    double angle = double(x) * PI / 180; 
    sinx = angle;

    for (int i = 1; i <= 100; i++)
    {
        sinx = sinx + pow(angle, power)/factorial(power)*pow(-1, i);
        power = power + 2;
    }

    if (x%180 == 0)
    {
        sinx = 0;
    }

    cout<<"sin"<<x<<"="<<sinx<<endl;
    return 0;       
}