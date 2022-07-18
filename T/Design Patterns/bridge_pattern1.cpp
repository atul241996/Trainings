#include<iostream>
#include<string>
#include<list>

using namespace std;

//The 'Implementor' abstract class
class DataObject
{
public:
  virtual void NextRecord()=0;
  virtual void PriorRecord()=0;
  virtual void AddRecord(string name)=0;
  virtual void DeleteRecord(string name)=0;
  virtual void ShowRecord()=0;
  virtual void ShowAllRecords()=0;
};

//The 'ConcreteImplementor' class
class CustomersData : public DataObject
{
public:
  CustomersData()
  {
    current_ = 0;
  }
  void NextRecord()
  {
    if(current_ < (int)(customers_.size() - 1))
      current_++;
  }
  void PriorRecord()
  {
    if(current_ > 0)
      current_--;
  }
  void AddRecord(string name)
  {
    customers_.push_back(name);
  }
  void DeleteRecord(string name)
  {
    list<string>::iterator it = customers_.begin();
    while(it != customers_.end())
    {
      if(*it == name)
      {
        customers_.erase(it);
        break;
      }
      ++it;
    }
  }
  void ShowRecord()
  {
    list<string>::iterator it = customers_.begin();
    for(int i = 0; i < current_; i++, ++it);
    cout<<*it<<endl;
  }
  void ShowAllRecords()
  {
    list<string>::iterator it = customers_.begin();
    while(it != customers_.end())
    {
      cout<<*it<<endl;
      ++it;
    }
  }
private:
  int current_;
  list<string> customers_;
};

//The 'Abstraction' class
class CustomersBase
{
public:
  CustomersBase(string group):group_(group){};
  void SetDataObject(DataObject* value)
  {
    dataObject_ = value;
  }
  DataObject* GetDataObject(void)
  {
    return dataObject_;
  }
  virtual void Next()
  {
    dataObject_->NextRecord();
  }
  virtual void Prior()
  {
    dataObject_->PriorRecord();
  }
  virtual void Add(string customer)
  {
    dataObject_->AddRecord(customer);
  }
  virtual void Delete(string customer)
  {
    dataObject_->DeleteRecord(customer);
  }
  virtual void Show()
  {
    dataObject_->ShowRecord();
  }
  virtual void ShowAll()
  {
    cout<<"Customer Group : "<<group_<<endl;
    dataObject_->ShowAllRecords();
  }
protected:
  string group_;
private:
  DataObject* dataObject_;
};

//The 'RefinedAbstraction' class
class Customers : public CustomersBase
{
public:
  Customers(string group) : CustomersBase(group) {};
  //overriding
  void ShowAll()
  {
    cout<<"\n------------------------------------"<<endl;
    CustomersBase::ShowAll();
    cout<<"------------------------------------"<<endl;
  }
};

//Main
int main()
{
  //Create RefinedAbstraction
  Customers*     customers     = new Customers("NSN");

  //Set ConcreteImplementor
  CustomersData* customersData = new CustomersData();
  //DataObject*    dataObject    = customersData;

  customersData->AddRecord("airtel");
  customersData->AddRecord("idea");
  customersData->AddRecord("realiance");
  customersData->AddRecord("vodafone");
  customersData->AddRecord("docomo");
  customersData->AddRecord("aircel");

  customers->SetDataObject(customersData);

  //Exercise the bridge
  customers->Show();
  customers->Next();
  customers->Show();
  customers->Next();
  customers->Show();
  customers->Add("MTS");

  customers->ShowAll();


  return 0;
}