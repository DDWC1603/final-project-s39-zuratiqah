//question no 2

#include<iostream>
using namespace std;

int main()
{
	int makan=0, qty,mood=0;
	double totalPrice=0, price;
	string again="y";
	
	while(again=="y"|| again=="Y")
	{
		cout<<"Where to eat? \n";
		cout<<"\n How do you feel today???";
		cout<<"\n Very hard to choose where do you want to eat??? >>\n";
		cout<<"\n 1)happy";
		cout<<"\n 2)broken";
		cout<<"\n 3)sad";
		cout<<"\n 4)angry";
		cout<<"\n 5)lazy";
		cout<<endl;
		cin>>mood;
		
		if(mood==1)
		{	
			cout<<"\n Mood HAPPY!! (^o^) ";
			cout<<"\n SUKAA NYAA DIAA ";
			cout<<"\t \n \n Welcome To Sweet Candy \n";
			cout<<"\n Location >> Seksyen, 90, Jalan Cochrane, Cheras, 55100 Kuala Lumpur, Wilayah Persekutuan Kuala Lumpur /n";
			cout<<"\n Menu >>\n";
			cout<<"\n 1) Kentang";
			cout<<"\n 2) Double Cheese Burger";
			cout<<"\n 3) Sosej ";
			cout<<"\n 4) Donut";
			cout<<"\n 5) Fries \n";
			cout<<endl;
			
			cout<<"pilih makanan.. \n";
			cin>>makan;
			switch(makan)
			{
				case 1 :
					price=5.00;
					break;
				case 2 :
					price=9.90;
					break;
					
				case 3 :
					price=8.90;
					break;
				
				case 4 :
					price=6.50;
					break;
					
				case 5 :
					price=7.60;
					break;
					
				default :
				cout<<"menu habis";
					}
		
			}
			else if (mood==2)
			{
				cout<<"\n Mood BROKEN (ToT)";
				cout<<"\n ANDA BERHAK BAHAGIAA <3 ";
				cout<<"\t \n \n Welcome To Korean Urban! >>> \n";
				cout<<"\n Lokasi >> Jalan Sabah, Taman Melawati, 53100 Ampang, Selangor\n";
				cout<<"\n Menu >> ";
				cout<<"\n 1) Samyang (1x/2x/4x) (cheese/stew/curry) Spicy ";
				cout<<"\n 2) Jajangmyun ";
				cout<<"\n 3) Bulgogi ";
				cout<<"\n 4) Spicy noodle soup ";
				cout<<"\n 5) Rice Cake ";
				cout<<"\n 6) Kimchi (chicken / beef) ";
				cout<<"\n 7) Egg Roll ";
				cout<<"\n 8) Tteokbokki (cheeese/Originil Spicy) ";
				cout<<"\n 9) Bibimbap (mixed rice) ";
				cout<<endl;
			
			cout<<"pilih makanan.. \n";
			cin>>makan;
			switch(makan)
			{
				case 1 :
					price=5.00;
					break;
				case 2 :
					price=9.90;
					break;
					
				case 3 :
					price=11.90;
					break;
				
				case 4 :
					price=10.50;
					break;
					
				case 5 :
					price=4.60;
					break;
					
				case 6 :
					price=12.50;
					break;
					
				case 7 :
					price=8.90;
					break;
					
				case 8 :
					price=9.50;
					break;
				case 9:
					price=11.00;
					break;
					
				default :
				cout<<"menu habis";
			}
		}
		
		else if(mood==3)
		{
			cout<<"\n Mood SAD (T_T)"<<endl;
			cout<<"\n AlAA CIAN NYA DIA SEDIHH ";
			cout<<"Welcome To Warisan Kasih \n \n";
			cout<<"\n Lokasi >> Jalan Gurney, Kampung Datuk Keramat, 54000 Kuala Lumpur, Wilayah Persekutuan Kuala Lumpur \n";
			cout<<"\n Menu >>> \n";
			cout<<"\n 1) Nasi Putih";
			cout<<"\n 2) Ayam Masak Kicap";
			cout<<"\n 3) Ayam Berempah";
			cout<<"\n 4) Daging Black Paper";
			cout<<"\n 5) Ikan Keli Goreng";
			cout<<"\n 6) Patin Masak Lemak";
			cout<<"\n 7) Sayur Kailan";
			cout<<"\n 8) Sayur Bayam or Kangkong";
			cout<<"\n 9) Budu / Belacan / Ulam-ulaman \n";
			cout<<endl;
			
			cout<<"pilih makanan.. \n";
			cin>>makan;
			switch(makan)
			{
				case 1 :
					price=1.00;
					break;
				case 2 :
					price=6.00;
					break;
					
				case 3 :
					price=7.30;
					break;
				
				case 4 :
					price=10.50;
					break;
					
				case 5 :
					price=3.00;
					break;
					
				case 6 :
					price=8.50;
					break;
					
				case 7 :
					price=4.00;
					break;
					
				case 8 :
					price=3.50;
					break;
				case 9:
					price=3.00;
					break;
					
				default :
				cout<<"menu habis";
			}
		}
		else if(mood==4)
		{
			cout<<"\n Mood ANGRY (*w*)";
			cout<<"\n RILEKKK JANGAN MARAH MARAHH. CHHILLL";
			cout<<"\n Welcome To PUTERI TOMYAM"<<endl;
			cout<<"\n Lokasi >> Jalan Rejang 4, Setapak, Wilayah Persekutuan Kuala Lumpur \n";
			cout<<"Menu >> \n";
			cout<<"\n 1.Tomyam Seafood ";
			cout<<"\n 2.Tomyam Ayam "; 
			cout<<"\n 3.Tomyam Sayur ";
			cout<<"\n 4.Nasi Goreng Tomyam ";
			cout<<"\n 5.Bihun Tomyam Seafood "; 
			cout<<"\n 6.Bihun Tomyam Ayam ";
			cout<<"\n 7.Bihun Tomyam Sayur "; 
			cout<<"\n 8.Nasi Putih \n";
			cout<<endl;
			
			cout<<"Choose Your Menu \n";
			cin>>makan;
			switch(makan)
			{
				case 1 :
					price=6.00;
					break;
				case 2 :
					price=6.00;
					break;
					
				case 3 :
					price=5.30;
					break;
				
				case 4 :
					price=5.50;
					break;
					
				case 5 :
					price=7.00;
					break;
					
				case 6 :
					price=6.50;
					break;
					
				case 7 :
					price=6.00;
					break;
					
				case 8 :
					price=1.00;
					break;
			
				default :
				cout<<"menu habis";
			}
		}
		else if(mood==5)
		{
			cout<<"\n Mood LAZY (-_-)";
			cout<<"\n AMBOIII MALAS NYAAA :3";
			cout<<"\t \n \n Welcome To Pizzas Hot \n";
			cout<<"\n Location >> Jalan Wangsa Delima 12, Wangsa Maju, 53300 Kuala Lumpur, Wilayah Persekutuan Kuala Lumpur\n";
			cout<<"\n Menu >>\n";
			cout<<"\n 1) Hawaiian Chicken";
			cout<<"\n 2) BBQ Chicken";
			cout<<"\n 3) Vegetarian Pizza";
			cout<<"\n 4) PepperOni";
			cout<<"\n 5) Aloha Beef";
			cout<<endl;
			
			cout<<"pilih makanan.. \n";
			cin>>makan;
			switch(makan)
			{
				case 1 :
					price=15.00;
					break;
				case 2 :
					price=12.99;
					break;
					
				case 3 :
					price=10.99;
					break;
				
				case 4 :
					price=14.50;
					break;
					
				case 5 :
					price=17.98;
					break;
					
				default :
				cout<<"menu habis";
			}
		}
		else
		{
			cout<<"None in The list :3";
		}
		
		cout<<"Food qty : "<<endl;
		cin>>qty;
		
		cout<<"\n nak try lagi ? (Y/N)"<<endl;
		cin>>again;
		cout<<endl;
		
		totalPrice+=price*qty;
		cout<<"total= RM " <<totalPrice<<endl;
	}
	cout<<"Your List Order: "<<endl;
	
	cout<<"\n tamat..";
		
		
	}





