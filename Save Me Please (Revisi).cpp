//											||SAVE ME PLEASE||
#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <ctime>
#include <cstdlib>
using namespace std;

void dialog1() {
	cout<<"                                        ||--- Save Me Please ---||"<<endl; // Mencetak judul
	cout<<endl;
	
	cout<<"Dingin malam ini terasa menusuk tulang... sementara pandanganmu masih buram tanpa alasan..."<<endl<<endl;  //Story Line
}

void dialog3(){
cout<<"seketika kamu tersadar bahwa Nerota telah terikat di depanmu "<<endl<<endl;
}

void dialog2(char* n, bool type) {
	
	cout<<"  Neo    : Nerota?!,Kenapa tanganmu terikat seperti itu? siapa yang mengikatmu?"<<endl;                    //Story Line
	cout<<"  Nerota : Akhirnya kau bangun juga,apakah kau lupa?! mungkin pukulan dari Darken"<<endl;                  //Story Line
	cout<<"           terlalu keras hingga membuatmu lupa akan kejadian malam ini"<<endl;							  //Story Line
	cout<<"  Neo    : Kepalaku masih terasa sakit untuk mengingat,jadi Darken adalah dalangnya"<<endl;				  //Story Line
	cout<<"  Nerota : Yap,sekarang apakah kamu siap untuk melepaskan ikatan ini? (jawab dengan y / n)"<<endl;	      //Story Line
	cout<<"  Neo    :  ";																						   	  //Story Line
	if(type)
		cin>>n;  //Input User
	else
		cout<<n;
	cout<<endl;
	
	if(*n=='y'||*n=='Y'){
	
	cout<<"====================================================================================================="<<endl<<endl;
	
	cout<<"  Nerota : Baiklah,kamu harus bisa menjawab pertanyaan yang akan di tanyakan oleh Darken,Kesempatanmu 3x Neo"<<endl;
	cout<<"           Gunakan kesempatan itu dengan sebaik mungkin,Apabila kamu berhasil Darken ini akan mati dan Ikatan ini akan Terlepas"<<endl<<endl;
	}	
}



void dialog4(){
	cout<<"							(Darken Datang)"<<endl<<endl;
}

void dialog5(char* s, bool type){
	cout<<"  Darken : Wah wah wah,nampaknya Neo sudah bangun dari tidur cantiknya Ha Ha Ha Ha..."<<endl;
	cout<<"  Neo    : Darken lepaskan Nerota!"<<endl;
	cout<<"  Darken : Melepaskan Nerota? Ha Ha Ha Apakah kamu siap untuk melangkahi mayatku? (jawab dengan Ya / Tidak )"<<endl;
	cout<<"  Neo    : ";
	
	if(type){
	
		cin>>s;  //Input User
	
	}
	else
		cout<<s;
		cout<<endl;

}

int main()
{
	char n,m,enter; // Variable n untuk jawaban
	
	dialog1();
	
	system("pause");
	system("cls");
	
	dialog1();
	
	system("cls");
	dialog1();
	dialog3();
	
	system("pause");
	system("cls");
	
	dialog1();
	dialog3();
	dialog2(&n, true);
	
	if(n != 'Y'&&n != 'y') {
		cout<<"  Nerota : Ternyata kau tidak ingin menyelamatkan Dunia ini";
		return 0;
	}
	
	system("pause");
	system("cls");
	
	dialog1();
	dialog3();
	dialog2(&n, false);
	dialog4();
	
	system("pause");
	system("cls");
	
	char s;
	
	dialog1();
	dialog3();
	dialog2(&n, false);
	dialog4();
	dialog5(&s, true);	
	cout<<"========================================================================================================"<<endl<<endl;
	if(s != 'y' && s != 'Y') {
		cout<<" Darken   : Wah wah wah,Tampaknya kegelapan mendapatkan Ksatria Baru Ha Ha Ha"<<endl;
		cout<<" Nerota   : Tidak!!!";
		return 0;
	}
	
	
	//Soal
	string soal[5] = {"  Darken : Siapakah nama pemeran utama dalam Game GTA San Andreas (Nama singkat)", "  Darken : Nama landak biru yang berlari sangat cepat", "  Darken : Kecil dan berusaha menguasai Bikini Bottom", "  Darken : Nama kota yang di tinggali oleh Batman", "  Darken : Apakah nama Genre dari Game Vain Glory,Mobile Legend ,dan Arena of Valor"};
	string jawaban[5] = {"CJ", "Sonic", "Plankton", "Gotham", "Moba"};
	string input;
	
	int jumlah = 0;
	int hp = 3;
	int index;
	
	srand (time(NULL));
	cout<<"Kesempatan awal : "<<hp<<endl<<endl;
	while(jumlah < 3 && hp > 0) {
		//Random index
		index = rand() % 5;
		
		//Munculkan soal
		cout<<
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		soal[index]<<endl;
		
		cout<<"  Neo    : ";
		cin>>input;
		
		cout<<endl;
		
		//compare jawaban
		if(input.compare(jawaban[index]) == 0)
			jumlah++;
		else
			cout<<"  Darken : Ha Ha Ha jawabanmu salah Sisa Kesempatanmu : "<<--hp<<endl;
			cout<<"================================================================================="<<endl;
		
		if(hp == 0){
		
		
		cout<<"  Nerota : Neo?! Aku tidak percaya aku akan mati di tangan Darken"<<endl;
		cout<<"                         (Nerota mati dengan mengenaskan)"<<endl;
		cout<<"  Neo    : Nerota!! Maafkan aku..."<<endl;
		cout<<"  Darken : Ha Ha Ha"<<endl<<endl;
		cout<<"                        (Akhirnya Neo dan Nerota gagal menyelamatkan dunia)";
		}
	}
	
	if(jumlah == 3) {
		cout<<"============================================================================"<<endl<<endl;
		cout<<"  Darken : Apa?! Kau bisa menjawab semuanya!? Tidaakkkkkkkkkk"<<endl;
		cout<<"  Nerota : Kerja yang bagus Neo,mari kita lanjutkan perjalanan kita "<<endl<<endl<<endl;
		cout<<"                   (Nerota dan Neo pun melanjutkan perjalananya dan Tamat)"<<endl<<endl;
	}
}
/* ||--- Save Me PLease ---\\ */
