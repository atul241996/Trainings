//Program tested on Microsoft Visual Studio 2008 - Zahid Ghadialy
//Factory Method is part of Creational Patterns 
//Creational Patterns deal with initializing and configuring classes and objects
//Factory Method creates an instance of several derived classes 

//We will take an example of creating Pages for Document.
//There are 2 types of Document: Resume and Report
//Different Document can instantiate different Pages based on their requirements

#include <iostream>
#include <string>
#include <list>

using namespace std;

//Create the abstract 'Product' class
class Page
{
public:
  virtual string GetPageName(void) = 0;
};

//'ConcreteProduct'#1 class
class SkillsPage : public Page
{
public:
  string GetPageName(void)
  {
    return "SkillsPage";
  }
};

//'ConcreteProduct'#2 class
class EducationPage : public Page
{
public:
  string GetPageName(void)
  {
    return "EducationPage";
  }
};

//'ConcreteProduct'#3 class
class ExperiencePage : public Page
{
public:
  string GetPageName(void)
  {
    return "ExperiencePage";
  }
};

//'ConcreteProduct'#4 class
class IntroductionPage : public Page
{
public:
  string GetPageName(void)
  {
    return "IntroductionPage";
  }
};

//'ConcreteProduct'#5 class
class ResultsPage : public Page
{
public:
  string GetPageName(void)
  {
    return "ResultsPage";
  }
};

//'ConcreteProduct'#6 class
class ConclusionPage : public Page
{
public:
  string GetPageName(void)
  {
    return "ConclusionPage";
  }
};

//'ConcreteProduct'#7 class
class SummaryPage : public Page
{
public:
  string GetPageName(void)
  {
    return "SummaryPage";
  }
};

//'ConcreteProduct'#8 class
class BibliographyPage : public Page
{
public:
  string GetPageName(void)
  {
    return "BibliographyPage";
  }
};

//Create the abstract 'Creator' class
class Document
{
public:
  //constructor
  Document()
  {
    //CreatePages(); - Cannot be called directly in constructor because its virtual
    //Should be called in the Derived class
  }
  void AddPages(Page* page)
  {
    pages_.push_back(page);
  }
  const list<Page*>& GetPages(void)
  {
    return pages_;
  }
  //Factory Method
  virtual void CreatePages(void) = 0;
private:
  list<Page*> pages_;
};

//Create the 'ConcreteCreator' # 1 class
class Resume : public Document
{
public:
  Resume()
  {
    CreatePages();
  }
  void CreatePages(void)
  {
    AddPages(new SkillsPage());
    AddPages(new EducationPage());
    AddPages(new ExperiencePage());
  }
};

//Create the 'ConcreteCreator' # 2 class
class Report : public Document
{
public:
  Report()
  {
    CreatePages();
  }
  void CreatePages(void)
  {
    AddPages(new SummaryPage());
    AddPages(new IntroductionPage());
    AddPages(new ResultsPage());
    AddPages(new ConclusionPage());
    AddPages(new BibliographyPage());
  }
};


//The Main method
int main()
{
  //Create two types of documents - constructors call Factory method
  Document* doc1 = new Resume();
  Document* doc2 = new Report();

  //Get and print the pages of the first document
  list<Page*>& doc1Pages = const_cast<list<Page*>&> (doc1->GetPages());
  cout << "\nResume Pages -------------" << endl;
  for(list<Page*>::iterator it = doc1Pages.begin(); it != doc1Pages.end(); it++)
  {
    cout << "\t" << (*it)->GetPageName() << endl;
  }

  //Get and print the pages of the second document
  list<Page*>& doc2Pages = const_cast<list<Page*>&> (doc2->GetPages());
  cout << "\nReport Pages -------------" << endl;
  for(list<Page*>::iterator it = doc2Pages.begin(); it != doc2Pages.end(); it++)
  {
    cout << "\t" << (*it)->GetPageName() << endl;
  }

  return 0;
