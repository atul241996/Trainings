#include<iostream>
#include<fstream>
using namespace std;

class drug
 {
   private:
    unsigned int batchno;
    char drugCode[5];
    char category;
    char units[4];
    float qtyProduced;
public:
    void getdata( )
     { 
		cout << "\nEnter Batch Number:";
		cin >> batchno;
		cout << "\nEnter Drug Code :";
		cin >> drugCode;
		cout << "\nEnter Category :";
		cin >> category;
		cout << "\nEnter Unit of Measurement :";
		cin >> units;
		cout << "\nEnter Quantity Produced :";
		cin >> qtyProduced; 
	}

void showdata()
{ 
	  cout << "\n Displaying Data"; 
	  cout << "\n The Batch Number is " << batchno;
	  cout << "\n The Drug Code is " << drugCode;
	  cout << "\n The Category is " << category;
	  cout << "The Unit of Measurement is " << units;
	  cout << "\n The Quantity Produced is " << qtyProduced;
   } 
};

class drug_file
 {
  private:
    drug buffer;
  public:
     void diskout( void);
     void diskin( void); 
}; 
void drug_file :: diskout(void)
{
	ofstream ofile("drugs.txt", ios::app);
    char loop;
    do {
        buffer.getdata( );
        ofile.write((char *)&buffer, sizeof(buffer));
        cout << "\n any more records (y/n) ?";
        cin >> loop;
      } while (loop =='y'); 
}

void drug_file :: diskin(void)
{ 
	ifstream ifile("drugs.txt");
	ifile.read((char *)&buffer, sizeof(buffer));
	while (ifile) // EOF check
	{
		buffer.showdata();
		ifile.read((char *)&buffer, sizeof(buffer));
	}
}

void  main( )
{
	drug_file fileobj;
	fileobj.diskout();
	fileobj.diskin();
 }

