
//This program shows use of multi-maps in a class
#include<iostream>
#include<map>
#include <string>

using namespace std;

class mapInstantiator
{
public:
  ~mapInstantiator();
  void createMultiMap(void);
  void insertElements(pair<string, int> element);
  void printer(void);
private:
  multimap<string, int> *phoneNums;
};

void mapInstantiator::createMultiMap(void)
{
  //Instantiate
  phoneNums = new multimap<string, int>;
}

void mapInstantiator::insertElements(pair<string, int> element)
{
  phoneNums->insert(element);
}

void mapInstantiator::printer(void)
{
  cout<<"\n\nMultimap printer method"<<endl;
  cout<<"Map size = "<<phoneNums->size()<<endl;
  multimap<string, int>::iterator it = phoneNums->begin();
  while(it != phoneNums->end())
  {
    cout<<"Key = "<<it->first<<"    Value = "<<it->second<<endl;
    it++;
  }
}

mapInstantiator::~mapInstantiator()
{
  //Dont forget to delete the pointer
  delete phoneNums;
}

int main()
{
  mapInstantiator aClass;
  aClass.createMultiMap();

  //Insert key, value as pairs
  aClass.insertElements(pair<string, int>("Joe",123));
  aClass.insertElements(pair<string, int>("Will",444));
  aClass.insertElements(pair<string, int>("Joe",369));
  aClass.insertElements(pair<string, int>("Joe",812));
  aClass.insertElements(pair<string, int>("Will",4556));
  aClass.insertElements(pair<string, int>("Smith",71));

  aClass.printer();

  return 0;
}