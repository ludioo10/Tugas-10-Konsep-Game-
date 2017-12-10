//											||SAVE ME PLEASE||
#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	cout<<"||--- Save Me Please ---||"<<endl; // Mencetak judul
	cout<<endl; 
	
	char n,m,enter; // Variable n untuk jawaban
	cout<<"Dingin malam ini terasa menusuk tulang... sementara pandanganmu masih buram tanpa alasan..."<<endl<<endl;  //Story Line
	cout<<"seketika kamu tersadar bahwa Nerota telah terikat di depanmu "<<endl<<endl;							      //Story Line
	cout<<"  Neo    : Nerota?!,Kenapa tanganmu terikat seperti itu? siapa yang mengikatmu?"<<endl;                    //Story Line
	cout<<"  Nerota : Akhirnya kau bangun juga,apakah kau lupa?! mungkin pukulan dari Darken"<<endl;                  //Story Line
	cout<<"           terlalu keras hingga membuatmu lupa akan kejadian malam ini"<<endl;							  //Story Line
	cout<<"  Neo    : Kepalaku masih terasa sakit untuk mengingat,jadi Darken adalah dalangnya"<<endl;				  //Story Line
	cout<<"  Nerota : Yap,sekarang apakah kamu siap untuk melepaskan ikatan ini? (jawab dengan Y / N)"<<endl;	      //Story Line
	cout<<"  Neo    :  ";																						   	  //Story Line
	cin>>n;  //Input User
	cout<<endl;
	cout<<"====================================================================================================="<<endl<<endl;
	
	
	if(n != 'Y') {
		cout<<"  Nerota : Ternyata kau tidak ingin menyelamatkan Dunia ini";
		return 0;
	}
	
	cout<<"  Nerota : Baiklah,kamu harus bisa menjawab pertanyaan yang akan di tanyakan oleh Darken,Kesempatanmu 3x Neo"<<endl;
	cout<<"           Gunakan kesempatan itu dengan sebaik mungkin,Apabila kamu berhasil Darken ini akan mati dan Ikatan ini akan Terlepas"<<endl<<endl;
	cout<<"							(Darken Datang)"<<endl<<endl;
	cout<<"  Darken : Wah wah wah,nampaknya Neo sudah bangun dari tidur cantiknya Ha Ha Ha Ha..."<<endl;
	cout<<"  Neo    : Darken lepaskan Nerota!"<<endl;
	cout<<"  Darken : Melepaskan Nerota? Ha Ha Ha Apakah kamu siap untuk melangkahi mayatku? (jawab dengan Ya / Tidak )"<<endl;
	cout<<"  Neo    : ";
	
	cin>>n;  //Input User
	cout<<endl;
	
	cout<<"========================================================================================================"<<endl<<endl;
	if(n != 'Y') {
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
	cout<<"Kesempatan awal : "<<hp<<endl;
	while(jumlah < 3 && hp > 0) {
		//Random index
		index = rand() % 5;
		
		//Munculkan soal
		cout<<endl;
		cout<<soal[index]<<endl<<endl;
		
		cout<<"  Neo    : ";
		cin>>input;
		cout<<endl;
		
		//compare jawaban
		if(input.compare(jawaban[index]) == 0)
			jumlah++;
		else
			cout<<"  Darken : Ha Ha Ha jawabanmu salah Sisa Kesempatanmu : "<<--hp<<endl;
			cout<<"======================================================================"<<endl;
		
		if(hp == 0){
		
		
		cout<<"  Nerota : Neo?! Aku tidak percaya aku akan mati di tangan Darken"<<endl;
		cout<<"                         (Nerota mati dengan mengenaskan)"<<endl;
		cout<<"  Neo    : Nerota!! Maafkan aku..."<<endl;
		cout<<"  Darken : Ha Ha Ha"<<endl<<endl;
		cout<<"                        (Akhirnya Neo dan Nerota gagal menyelamatkan dunia)";
		}	
	}
	
	if(jumlah == 3) {
		cout<<"==================================================================================================="<<endl<<endl;
		cout<<"  Darken : Apa?! Kau bisa menjawab semuanya!? Tidaakkkkkkkkkk"<<endl;
		cout<<"  Nerota : Kerja yang bagus Neo,mari kita lanjutkan perjalanan kita "<<endl<<endl<<endl;
		cout<<"                   (Nerota dan Neo pun melanjutkan perjalananya dan Tamat)"<<endl<<endl;
	}
}
/* ||--- Save Me PLease ---\\ */
