#include<stdio.h>
int main()
{
	int month,WEEKDAY,count,month_days,width;
	int isWhatDay(int month);     //宣告計算的函式
	printf("Please enter a month:\n");
	scanf("%d",&month);
	WEEKDAY = isWhatDay(month);         //將函式返回值賦給WEEKDAY
	printf("Calendar 2007 - %d\n",month);
	printf("----------------------------\n");
	printf("  Su  Mo  Tu  We  Th  Fr  Sa\n");    //空白處是兩個空格
	 //下面是賦各個月份的天數
	if(month == 1||month == 3||month == 5||month == 7||month ==8||month == 10||month == 12)
		month_days = 31;
	else if(month == 2)
		month_days = 28;
	else
		month_days = 30;
	width = 4 * WEEKDAY;  
	/*此處計算width可能一開始看不懂，實際上是為了列印空格，
	空格不printf到第一天的前一位是因為下面輸出是%4d，其前三位是空格了。*/
	for(count = 1;count <= width;count++)
		printf(" ");
	for(count = 1;count <= month_days;count++)
	{
		printf("%4d",count);
		if(WEEKDAY + (count - 1) % 7 == 6)  
		//這個if是因為到星期六就換行所以我從這個出發寫出的等式
			printf("\n");
	}
	printf("\n----------------------------\n");
	return 0;
 } 
int isWhatDay(int month)
{
	int weekday,distance;
	int days = 0;
	switch(month)
	/*沒有break，是為了求出輸入月份的第一天的前一天
	距這一年第一天有多少天，以便打出相應空格*/
	{
		case 12: days += 30;   
		case 11: days += 31;
		case 10: days += 30;
		case 9: days += 31;
		case 8: days += 31;
		case 7: days += 30;
		case 6: days += 31;
		case 5: days += 30;
		case 4: days += 31;
		case 3: days += 28;
		case 2: days += 31;       //注意：沒有1月。      
	}
	distance = days % 7;
	switch(distance)    //餘0即表明上個月最後一天即星期一，餘6即星期六
	{
		case 0:	weekday = 1; break;
		case 1:	weekday = 2; break;
		case 2:	weekday = 3; break;
		case 3:	weekday = 4; break;
		case 4:	weekday = 5; break;
		case 5:	weekday = 6; break;
		case 6: weekday = 0; break;   
	}
	return weekday;     //return列印相應空格
}