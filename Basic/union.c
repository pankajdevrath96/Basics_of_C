#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
}date1,new_date;
int main()
{
    int days;
    struct date add_days(struct date,int);
    scanf("%d",&date1.day);
    scanf("%d",&date1.month);
    scanf("%d",&date1.year);
    scanf("%d",&days);
    new_date=add_days(date1,days);
    printf("%d",new_date.day);
    printf("\n%d",new_date.month);
    printf("\n%d",new_date.year);
}

struct date add_days(struct date d,int days)
{
    
    while(days>0)
        {
            if((d.month==1 || d.month==3 || d.month==5 || d.month==7 || d.month==8 || d.month==10) && days>31)
                {
                d.month++;
                days=days-31;
                
                }
            else if((d.month==1 || d.month==3 || d.month==5 || d.month==7 || d.month==8 || d.month==10) && days<31)
                {
                
                days=days-31;
                
                }
        
        
        }
    
    
    
    
    
}
