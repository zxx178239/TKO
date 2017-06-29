#include "HUIMiner.h"
#include "pub_def.h"

//-Damount2.txt -Eprice2.txt -Ooutfile.txt -N8 -W6 -#5 -T2
//-Dchess.txt  -Elogn76.txt  -Osee-DDHUPF1R3.txt  -N76 -W37  -#3196  -T20
//-Dreal_data_aa.txt  -Eproduct_price.txt  -Osee-chainstore.txt  -N46087 -W170  -#1112949 -T20

int main(int argc, char *argv[])
{
	HUIMiner myAlgorithm;
	myAlgorithm.launch(argc, argv);
}