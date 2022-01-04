#include <iostream>

using namespace std;

float zbir(float niza[], int elementi){
float z = 0;
for(int b = 0; b < elementi; b++){
        cout << "Vnesi visina (cm) na clen br." << b+1 << endl;
        cin >> niza[b];
        while(niza[b] < 150 || niza[b] > 200){
            cout << "Visinata ne e prifatena, vnesi pravilno: ";
            cin >> niza[b];
        }
        z += niza[b];
    }
    return z;
}
float prosek(float niza[], int elementi)
{
        float zbir = 0;
        for (int x = 0; x < elementi; x++)
    {
        zbir += niza[x];
    }
        return zbir/elementi;

}
void v10(float niza[],int elementi )
{
    for(int b = 0; b < elementi; b++){
        if(niza[b] >= (prosek(niza,elementi) - 10) && niza[b] <= (prosek(niza,elementi) + 10))
            cout << niza[b] << "\t";
}
}
void v15(float niza[], int elementi)
{
 for(int b = 0; b < elementi; b++){
        if(niza[b] >= 150 && niza[b] <= (150+(150*15/100)))
            cout << niza[b] << "\t";
    }
}
void v20(float niza[], int elementi)
{
    for(int b = 0; b <elementi; b++){
        if(niza[b] <=200 && niza[b] >= (200-(200*20/100)))
            cout << niza[b] << "\t";
    }
}
void n(float niza[], int elementi)
{
   for (int x = 0; x < elementi; x++)
  {
    cout << niza[x] << "\t" ;

  }
}
int main()
{
    int N;
    cout << "Vnesi broj na clenovi: ";
    cin >> N;
    float clen[N];
    zbir(clen,N);
    cout << "Prosecnata visina e: "<< prosek(clen,N) << endl;
    cout << "Visini koi variraat za +/- 10cm vo odnos na prosecnata visina se:\n";
    v10(clen,N);
    cout << "\nVrednosti koi variraat od 0 do +15% vo odnos na minimalnata visina se:\n";
    v15(clen,N);
    cout << "\nVrednosti koi variraat od 0 do 20% vo odnos na maksimalnata visina se:\n";
    v20(clen,N);
    cout<<endl;
    cout << "\n\n\n****TESTIRANJE NA REZULTATI SO ZADADENI NIZI ZA VISINA I TEZINA****\n\n\n";
    float niza1Visina[5]={186,180,159,190,195};
    float niza1Tezina[5]={90,87,63,87,98};
    cout << "-Prva niza\n" << "Zadadeni visini: ";
    n(niza1Visina, 5);
    cout << "\nZadadeni tezini: ";
    n(niza1Tezina,5);
    cout << "\nProsecna visina e: " << prosek(niza1Visina, 5) << endl;
    cout << "Prosecna tezina e: " << prosek(niza1Tezina, 5) << endl;
    cout << "Visini koi variraat za +/- 10cm vo odnos na prosecnata visina se:\n";
    v10(niza1Visina,5);
    cout << "\nTezini koi variraat za +/- 10cm vo odnos na prosecnata tezina se:\n";
    v10(niza1Tezina,5);
    cout << "\nVrednosti koi variraat od 0 do +15% vo odnos na minimalnata visina se:\n";
    v15(niza1Visina,5);
    cout << "\nVrednosti koi variraat od 0 do 20% vo odnos na maksimalnata visina se:\n";
    v20(niza1Visina,5);
    cout << endl << endl;
    float niza2Visina[5]={200,157,188,163,155};
    float niza2Tezina[5]={96,60,91,63,55};
    cout << "-Vtora niza\n" << "Zadadeni visini: ";
    n(niza2Visina, 5);
    cout << "\nZadadeni tezini: ";
    n(niza2Tezina,5);
    cout << "\nProsecna visina e: " << prosek(niza2Visina, 5) << endl;
    cout << "Prosecna tezina e: " << prosek(niza2Tezina, 5) << endl;
    cout << "Visini koi variraat za +/- 10cm vo odnos na prosecnata visina se:\n";
    v10(niza2Visina,5);
    cout << "\nTezini koi variraat za +/- 10cm vo odnos na prosecnata tezina se:\n";
    v10(niza2Tezina,5);
    cout << "\nVrednosti koi variraat od 0 do +15% vo odnos na minimalnata visina se:\n";
    v15(niza2Visina,5);
    cout << "\nVrednosti koi variraat od 0 do 20% vo odnos na maksimalnata visina se:\n";
    v20(niza2Visina,5);
    cout << endl << endl;
    float niza3Visina[5]={154,160,171,179,181};
    float niza3Tezina[5]={56,61,75,84,76};
    cout << "-Treta niza\n" << "Zadadeni visini: ";
    n(niza3Visina, 5);
    cout << "\nZadadeni tezini: ";
    n(niza3Tezina,5);
    cout << "\nProsecna visina e: " << prosek(niza3Visina, 5) << endl;
    cout << "Prosecna tezina e: " << prosek(niza3Tezina, 5) << endl;
    cout << "Visini koi variraat za +/- 10cm vo odnos na prosecnata visina se:\n";
    v10(niza3Visina,5);
    cout << "\nTezini koi variraat za +/- 10cm vo odnos na prosecnata tezina se:\n";
    v10(niza3Tezina,5);
    cout << "\nVrednosti koi variraat od 0 do +15% vo odnos na minimalnata visina se:\n";
    v15(niza3Visina,5);
    cout << "\nVrednosti koi variraat od 0 do 20% vo odnos na maksimalnata visina se:\n";
    v20(niza3Visina,5);

   return 0;
}


