#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1[1] == '>') 
    {
        swap(s1[0], s1[2]);
        s1[1] = '<';
    }
    if (s2[1] == '>') 
    {
        swap(s2[0], s2[2]);
        s2[1] = '<';
    }
    if (s3[1] == '>') 
    {
        swap(s3[0], s3[2]);
        s3[1] = '<';
    }

    if ((s1 == "A<B" || s2 == "A<B" || s3 == "A<B") &&
        (s1 == "B<C" || s2 == "B<C" || s3 == "B<C") &&
        (s1 == "A<C" || s2 == "A<C" || s3 == "A<C")) 
    {
        cout << "ABC" << endl;
    }

    else if ((s1 == "A<C" || s2 == "A<C" || s3 == "A<C") &&
             (s1 == "C<B" || s2 == "C<B" || s3 == "C<B") &&
             (s1 == "A<B" || s2 == "A<B" || s3 == "A<B")) 
    {
        cout << "ACB" << endl;
    }

    else if ((s1 == "B<A" || s2 == "B<A" || s3 == "B<A") &&
             (s1 == "A<C" || s2 == "A<C" || s3 == "A<C") &&
             (s1 == "B<C" || s2 == "B<C" || s3 == "B<C"))
    {
        cout << "BAC" << endl;
    }

    else if ((s1 == "B<C" || s2 == "B<C" || s3 == "B<C") &&
             (s1 == "C<A" || s2 == "C<A" || s3 == "C<A") &&
             (s1 == "B<A" || s2 == "B<A" || s3 == "B<A")) {
        cout << "BCA" << endl;
    }

    else if ((s1 == "C<A" || s2 == "C<A" || s3 == "C<A") &&
             (s1 == "A<B" || s2 == "A<B" || s3 == "A<B") &&
             (s1 == "C<B" || s2 == "C<B" || s3 == "C<B")) 
    {
        cout << "CAB" << endl;
    }

    else if ((s1 == "C<B" || s2 == "C<B" || s3 == "C<B") &&
             (s1 == "B<A" || s2 == "B<A" || s3 == "B<A") &&
             (s1 == "C<A" || s2 == "C<A" || s3 == "C<A"))
    {
        cout << "CBA" << endl;
    }

    else {
        cout << "Impossible" << endl;
    }

    return 0;
}