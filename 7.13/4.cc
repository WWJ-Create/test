#include<iostream>
#include"4.hpp"
void copy(arr)
{
  student s1("zsm",1,2001);
  student s2("sgg",2,2002);
  student s3("wwj",3,2003);
  student arr[3]={s1,s2,s3}
}


void query(student arr,std::string name)
{
  for(int i=0;i<3;i++)
  {
    if(arr[i].m_studentname==name)
    {
      std::cout<<"the studentID is:"<<arr[i].m_studentID<<"the cardnumber is:"<<arr[i].m_cardnumber<<std::endl;
    }
  }
}
