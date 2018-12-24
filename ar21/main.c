#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    int num = 0;
    double math = 0.0;
    double chinese = 0.0;
    double english = 0.0;
    double c_average = 0.0;
    double m_average = 0.0;
    double e_average = 0.0;
    double t_average = 0.0;

    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
        scanf("%lf%lf%lf",&chinese,&english,&math);
        c_average += chinese;
        m_average += math;
        e_average += english;
        t_average = t_average + chinese + math + english;
    }

    t_average /= (num*3);
    c_average /= num;
    m_average /= num;
    e_average /= num;
    t_average = (t_average * 100 + 0.5)/100.0;
    c_average = (c_average * 100 + 0.5)/100.0;
    m_average = (m_average * 100 + 0.5)/100.0;
    e_average = (e_average * 100 + 0.5)/100.0;
    printf("%.1lf %.1lf %.1lf %.1lf\n",t_average,c_average,e_average,m_average);
    return 0;
}
