//包含头文件
#include<iostream>
#include<string>

//引用命名空间
using namespace std;

//产品类
class Building
{
	string _Name;
	int _BuildingTime;
public:
	void setName(string name){_Name=name;}
	void setTime(int time){_BuildingTime=time;}
	void show(){cout<<"Name: "<<_Name<<"  Spend: "<<_BuildingTime<<" days."<<endl;}
};

//建造者类
class Build
{
public:
	virtual void setBuilding(string,int)=0;
	virtual Building* getBuilding()=0;
};

//具体建造者类
class Builder:public Build
{
public:
	Builder(){BDing=new Building;}
	void setBuilding(string name,int time){BDing->setName(name);BDing->setTime(time);}
	Building* getBuilding(){return BDing;}
private:
	Building *BDing;
};

//导演类
class Director
{
public:
	Building* BuildX_bow(){
		cout<<"building......"<<endl;
		builder.setBuilding("X-bow",7);
		return builder.getBuilding();
	};
	Building* BuildArcher_Tower(){
		cout<<"building......"<<endl;
		builder.setBuilding("Archer Tower",5);
		return builder.getBuilding();};
private:
	Builder builder;
};
