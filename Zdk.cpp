#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main(){
int x;
	
cout << "+====================InYourG00D+" <<endl;
cout << "+                              +" <<endl;
cout << "+           Zodiak             +" <<endl;
cout << "+                              +" <<endl;
cout << "+=========================Ragil+" <<endl;
cout << "|=========SoulTeamCyber========|" <<endl;
cout << " |==========LNX#.CREW=========|" <<endl;
cout << "  |============BUFT==========|" <<endl;
cout <<  "  |==========================|" <<endl;


cout <<"Pilih Bulan Lahirmu\n"<<endl;
cout << "1.Januari     2.Febuari" <<endl;
cout << "3.Maret       4.April"<<endl;
cout << "5.Mei         5.Juni" <<endl; 
cout << "7.Juli        8.Agustus" <<endl;
cout << "9.September   10.Oktober" <<endl;
cout << "11.November   12.Desember" <<endl;
cout << ": ";
cin >> x;
 switch (x){
case 1:
  cout << "====================================================" <<endl;
 	cout << "Zodiak Anda: Dragon" <<endl;
 	cout << "Keterangan Zodiak: Simbol naga ini berarti sebagai awal bulan di awal tahun yang membuat kamu menjadi 'trendsetter' bagi sebagian orang. Kamu menjadi pribadi yang sangat kuat dan mudah mengendalikan emosi, karena menurut kamu menjadi emosional dalam menghadapi masalah bukanlah solusi yang baik." <<endl;
 	break;
case 2:
  cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: Phoenix" <<endl;
 	cout << "Keterangan Zodiak: Phoenix adalah pribadi yang sangan kuat dan berkekuatan tinggi untuk orang sekelilingnya. Mempunyai sumber kekuatan yang positif dan bisa menguasai diri dengan baik." <<endl;
 	break;
case 3:  
  cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: Yin & Yang" <<endl;
 	cout << "Keterangan Zodiak: Mereka yang lahir di bulan maret memiliki keseimbangan yang baik dan konsisten dalam berbuat baik dan buruk untuk sebagian orang. Dan juga memiliki pendekatan positif di semua situasi, sangat baik dalam menyelesaikan masalah dan harus berhati-hati ketika berbuat baik." <<endl;
 	break;
case 4:
  cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: Lion" <<endl;
 	cout << "Keterangan Zodiak: Singa yang digambarkan sangat berkarakteristik buas ini ternyata mereka juga setia. Mereka berjiwa tinggi dalam melindungi orang yang mereka cintai, dan mau mengambil risiko dengan apa yang harus dihadapi." <<endl;
 	break;
case 5:
 cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: wolf" <<endl;
 	cout << "Keterangan Zodiak: Di bulan mei serigala menjadi simbol dan tidak begitu banyak berpikir yang kompleks. Selalu berada dan menjadi yang pertama untuk seseorang yang mereka cintai dengan perlakuan hangat." <<endl;
 	break;
case 6:
 cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: Fish" <<endl;
 	cout << "Keterangan Zodiak: Berjiwa bebas dan yang dipikirkan di dunia hanyalah sebuah kebebasan, bagaimana memiliki tanggung jawab dan sangat tidak pernah mengikuti intuisi, melainkan selalu percaya dengan kekuatan di balik kepercayaan diri." <<endl;
 	break;
case 7:
 cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: Fire" <<endl;
 	cout << "Keterangan Zodiak: Selalu mengerti ke mana arah passion dan minat dalam diri mereka, dengan simbol api yang sangat membara terkadang orang yang lahir di bulan Juli memiliki passion yang tinggi dan terlalu terobsesi." <<endl;
 	break;
case 8:
 cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: Horse" <<endl;
 	cout << "Keterangan Zodiak: Menggambarkan kuda yang bisa berlari di hamparan kawasan yang liar, mereka berjiwa petualang tinggi dan mengerti bagaimana menghargai sebuah pekerjaan, yang perlu kamu tekuni adalah percaya dengan dirimu sendiri." <<endl;
 	break;
case 9:
 cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: Flower" <<endl;
 	cout << "Keterangan Zodiak: Bunga yang menggambarkan kedamaian dan rasa tenang ini menjadi sesuatu yang sangat cantik dengan membawa aura yang bisa membuat orang lain menikmati hidup sepenuhnya jika berada di dekat mereka." <<endl;
 	break;
case 10:
 cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: Star" <<endl;
 	cout << "Keterangan Zodiak: Oktober membawa cahaya yang sangat terang dan bisa memberikan cahaya bagi kehiduoan banyak orang, dan juga bagaimana bisa menginspirasi orang lain dan memberi waktu mereka untuk semua manusia yang membutuhkan." <<endl;
 	break;
case 11:
 cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: Tree" <<endl;
 	cout << "Keterangan Zodiak: Kamu yang lahir di bulan November menjadi sistem yang sangat dibutuhkan semua orang dalam memberi dukungan, Memberi kerindangan dan menyediakan seluruh udara dan hal-hal positif baik ke orang sekitar. Tapi, jangan lupa beri air untuk akarmu, ya." <<endl;
 	break;
case 12:
 cout << "=====================================================" <<endl;
 	cout << "Zodiak Anda: Water" <<endl;
 	cout << "Keterangan Zodiak: Orang lahir di bulan Desember bisa merubah sifat mereka di tiap situasi, bisa menjadi tenang atau amarah bagai badai yang sangat mengguncang. Dan yang terpenting adalah Desember menjadi orang pertama yang mengerti apa yang ia mau." <<endl;
 	break;
 	default:
        cout << "Maaf Tidak Terdaftar" <<endl;
 }
	return 0;
}