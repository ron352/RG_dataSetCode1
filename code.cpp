#include <bits/stdc++.h>
using namespace std ;

string line_parser(string str)
{
    string ret = "";
    bool nonEmpty = 0;

    for(int i = 1; i < str.size(); i++){
        if(str[i] == ' ' or str[i] == '\t' and nonEmpty){
            ret += str[i] ;
        }
        else if(str[i] == ' ' or str[i] == '\t') {
            continue;
        }
        else {
            nonEmpty = 1;
            ret += str[i] ;
        }
    }
    return ret;
}

int main()
{
    ifstream in;
    ofstream out;

    in.open("ss.txt");
    out.open("sample.txt");

    string line1,line2,line3, outstring = "";
    if(in.fail())
    {
        cout<<"your file didn't work";
    }
    else {
        while(getline(in,line1)){

            string conc = "";
            //cout << line_parser(line1) << endl;
            getline(in,line2);
              line2.erase(0,20)  ;
                        getline(in,line3);
            //if()
            line1 = line_parser(line1);
            line2 = line_parser(line2);
            line3 = line_parser(line3);
            conc = line1 +"###"+ line2 +"###" +line3;

            //cout << line1 << endl;
            if(line3 != "No Post Title"){

                out<< conc << endl;
            }

            getline(in,line3);

        }


        in.close();
        out.close();
    }

    return 0;
}
