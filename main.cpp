#include <iostream>
#include"capLop.h"
#include"lop.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

DS_CAPLOP ds_CapLop;



int main() {
int choice;
	char b[20]="";
	char xxx[20]="";
		bool kt_choice = true;
		system("cls");
		load_CapLopFile(ds_CapLop);
		// cout<<"dscl count = "<<ds_CapLop.count;
		// cout<<"dslop = = "<<ds_CapLop.dsCapLop[0]->ds_Lop.pHead_Lop<<endl;
		  for(int count0 =0; count0 < ds_CapLop.count; count0++)	{
		  	strcpy(b,xxx);
		  	strcat(b, ds_CapLop.dsCapLop[count0]->Ma);	
		  	strcat(b, ".txt");	
//		  	cout<<"dscl count = "<<ds_CapLop.dsCapLop[count0]->Ma<<endl;
		  	openFileLop(ds_CapLop.dsCapLop[count0]->ds_Lop, b);	
			  		
		  }

		while (kt_choice) {
			cout << endl << endl << endl;
			cout << "------ ------ ------ ------ ------ -------" << endl;
			cout << "| Nhap lua chon xu li:                   |" << endl;
			//--------------------------------------
			cout << "| 0: exit                                |" << endl;
			cout << "| 1: Them cap lop                        |" << endl;
			cout << "| 2: Xuat thong tin cap lop              |" << endl;
			cout << "| 3: Xoa thong tin cap lop               |" << endl;
			cout << "| 4: Hieu chinh thong tin cap lop        |" << endl;
			cout << "| 5: Them lop                            |" << endl;
			cout << "| 6: Xuat thong tin lop                  |" << endl;
			cout << "| 7: Xoa lop                             |" << endl;
			cout << "| 20: SAVE                               |" << endl;
			//-----------------------------------
			cout<<endl;
			cout << "| Nhap lua chon:                       ";
			
			while(!(cin >> choice)){
       		cout<<"| gia tri phai la so !"<<endl;
       		cin.clear();
       		cin.ignore(123,'\n');
			cout << "| Nhap lua chon:                      ";
		   }
			cout << endl;
			cout << "------ ------ ------ ------ ------ -------" << endl;
			cout << endl << endl << endl;
			switch (choice)
			{
			case 0:{
				kt_choice = false;
				break;
			}
			case 1:
			{
				themCapLop(ds_CapLop);
				break;
			}
			case 2:
				{
					xuatCapLop(ds_CapLop);
					break;
				}
			case 3:
				{
					xoaCapLop(ds_CapLop);
					break;
				}
			case 4:
				{
					hieuChinhCapLop(ds_CapLop);
					break;
				}
			
			case 5:
				{
					themLop(ds_CapLop);
//					save_CapLopFile(ds_CapLop);
					break;
				}		
			case 6:
				{
					xuatThongTinLop(ds_CapLop);
					break;
				}
			case 7:
				{
					xoaLop(ds_CapLop);
					break;
				}
						case 20:
				{
//					xuatThongTinLop(ds_CapLop);
					save_CapLopFile(ds_CapLop);

					for(int i =0; i< ds_CapLop.count; i++)	{
						if(ds_CapLop.dsCapLop[i]->ds_Lop.pHead_Lop != NULL)	{
							// cout<<" dsl not null "<< i <<endl;
							strcpy(b,xxx);
							strcat(b, ds_CapLop.dsCapLop[i]->Ma);	
							strcat(b, ".txt");
							saveFileLop(ds_CapLop.dsCapLop[i]->ds_Lop, b);
						}

					}
					break;
				}	
		}
	}
		
	return 0;
}