#include <iostream>
#include <fstream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
   fstream plik;  
   string texts[1000];
   int howMuch[1000];
   int i=0;
   
   plik.open("c:\\zadanie.txt", ios::in);
   
   if(plik.good()) 
            while(!plik.eof())  
                  {
                   plik>>texts[i];
                   plik>>howMuch[i];
				   
				   texts[i] = texts[i].erase(0, howMuch[i]);
                	i++;
                   }
                   
                  plik.close();
                  
                       
    plik.open("c:\\zadanie.txt"); 
	     

	for(int q=0;q<i;q++){
		plik<<texts[q]<<endl<<endl<<endl<<endl;
	}
 
    plik.close(); 
                                  
	return 0;
}
