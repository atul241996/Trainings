int main () 
{
    // first way
    istream_iterator<int> start_cin(cin);
    istream_iterator<int> end_of_cin;
    vector<int> v;

    cout << "Enter sequance of integers "
        << "(character to - quit) : ";
    copy(start_cin,end_of_cin,back_inserter(v));

    for ( vector<int>::iterator It = v.begin();
            It != v.end(); It++ )
        cout << *It << " - ";
    cout << endl;
	 
    
}