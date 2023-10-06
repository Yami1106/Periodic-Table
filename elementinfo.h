#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct elements{
char name[30];
char symbol[5];
int atmnum;
float atmwt;
char nature[30];
}atom[120];

void data(){
strcpy(atom[0].name,"HYDROGEN");
strcpy(atom[0].symbol,"H");
strcpy(atom[0].nature,"Non metal");
atom[0].atmnum = 1;
atom[0].atmwt = 1.008;


strcpy(atom[1].name,"HELIUM");
strcpy(atom[1].symbol,"He");
strcpy(atom[1].nature,"Non metal");
atom[1].atmnum = 2;
atom[1].atmwt = 4.00;

strcpy(atom[2].name,"LITHIUM");
strcpy(atom[2].symbol,"Li");
strcpy(atom[2].nature,"Metal");
atom[2].atmnum = 3;
atom[2].atmwt = 6.997;

strcpy(atom[3].name,"BERYLLIUM");
strcpy(atom[3].symbol,"Be");
strcpy(atom[3].nature,"Metal");
atom[3].atmnum = 4;
atom[3].atmwt = 9.01;

strcpy(atom[4].name,"BORON");
strcpy(atom[4].symbol,"B");
strcpy(atom[4].nature,"Metalloids");
atom[4].atmnum = 5;
atom[4].atmwt = 10.82;

strcpy(atom[5].name,"CARBON");
strcpy(atom[5].symbol,"C");
strcpy(atom[5].nature,"Non metal");
atom[5].atmnum = 6;
atom[5].atmwt = 12.01;

strcpy(atom[6].name,"NITROGEN");
strcpy(atom[6].symbol,"N");
strcpy(atom[6].nature,"Non metal");
atom[6].atmnum = 7;
atom[6].atmwt = 14.00;

strcpy(atom[7].name,"OXYGEN");
strcpy(atom[7].symbol,"O");
strcpy(atom[7].nature,"Non metal");
atom[7].atmnum = 8;
atom[7].atmwt = 15.99;

strcpy(atom[8].name,"FLUORINE");
strcpy(atom[8].symbol,"F");
strcpy(atom[8].nature,"Non metal");
atom[8].atmnum = 9;
atom[8].atmwt = 18.99;

strcpy(atom[9].name,"NEON");
strcpy(atom[9].symbol,"Ne");
strcpy(atom[9].nature,"Non metal");
atom[9].atmnum = 10;
atom[9].atmwt = 20.17;

strcpy(atom[10].name,"SODIUM");
strcpy(atom[10].symbol,"Na");
strcpy(atom[10].nature,"Metal");
atom[10].atmnum = 11;
atom[10].atmwt = 22.98;

strcpy(atom[11].name,"MAGNESIUM");
strcpy(atom[11].symbol,"Mg");
strcpy(atom[11].nature,"Metal");
atom[11].atmnum = 12;
atom[11].atmwt = 24.30;

strcpy(atom[12].name,"ALUMINIUM");
strcpy(atom[12].symbol,"Al");
strcpy(atom[12].nature,"Metal");
atom[12].atmnum = 13;
atom[12].atmwt = 26.98;

strcpy(atom[13].name,"SILICON");
strcpy(atom[13].symbol,"Si");
strcpy(atom[13].nature,"Metalloids");
atom[13].atmnum = 14;
atom[13].atmwt = 28.08;

strcpy(atom[14].name,"PHOSPHOROUS");
strcpy(atom[14].symbol,"P");
strcpy(atom[14].nature,"Non metal");
atom[14].atmnum = 15;
atom[14].atmwt = 30.97;

strcpy(atom[15].name,"SULPHUR");
strcpy(atom[15].symbol,"S");
strcpy(atom[15].nature,"Non metal");
atom[15].atmnum = 16;
atom[15].atmwt = 32.07;

strcpy(atom[16].name,"CHLORINE");
strcpy(atom[16].symbol,"Cl");
strcpy(atom[16].nature,"Non metal");
atom[16].atmnum = 17;
atom[16].atmwt = 35.45;

strcpy(atom[17].name,"ARGON");
strcpy(atom[17].symbol,"Ar");
strcpy(atom[17].nature,"Non metal");
atom[17].atmnum = 18;
atom[17].atmwt = 39.94;

strcpy(atom[18].name,"POTASSIUM");
strcpy(atom[18].symbol,"K");
strcpy(atom[18].nature,"Metal");
atom[18].atmnum = 19;
atom[18].atmwt = 39.09;

strcpy(atom[19].name,"CALCIUM");
strcpy(atom[19].symbol,"Ca");
strcpy(atom[19].nature,"Metal");
atom[19].atmnum = 20;
atom[19].atmwt = 40.07;

strcpy(atom[20].name,"SCANDIUM");
strcpy(atom[20].symbol,"Sc");
strcpy(atom[20].nature,"Metal");
atom[20].atmnum = 21;
atom[20].atmwt = 44.95;

strcpy(atom[21].name,"TITANIUM");
strcpy(atom[21].symbol,"Ti");
strcpy(atom[21].nature,"Metal");
atom[21].atmnum = 22;
atom[21].atmwt = 47.86;

strcpy(atom[22].name,"VANADIUM");
strcpy(atom[22].symbol,"V");
strcpy(atom[22].nature,"Metal");
atom[22].atmnum = 23;
atom[22].atmwt = 50.94;

strcpy(atom[23].name,"CHROMIUM");
strcpy(atom[23].symbol,"Cr");
strcpy(atom[23].nature,"Metal");
atom[23].atmnum = 24;
atom[23].atmwt = 51.99;

strcpy(atom[24].name,"MANGANESE");
strcpy(atom[24].symbol,"Mn");
strcpy(atom[24].nature,"Metal");
atom[24].atmnum = 25;
atom[24].atmwt = 54.93;

strcpy(atom[25].name,"IRON");
strcpy(atom[25].symbol,"Fe");
strcpy(atom[25].nature,"Metal");
atom[25].atmnum = 26;
atom[25].atmwt = 55.84;

strcpy(atom[26].name,"COBALT");
strcpy(atom[26].symbol,"Co");
strcpy(atom[26].nature,"Metal");
atom[26].atmnum = 27;
atom[26].atmwt = 58.93;

strcpy(atom[27].name,"NICKEL");
strcpy(atom[27].symbol,"Ni");
strcpy(atom[27].nature,"Metal");
atom[27].atmnum = 28;
atom[27].atmwt = 58.69;

strcpy(atom[28].name,"COPPER");
strcpy(atom[28].symbol,"Cu");
strcpy(atom[28].nature,"Metal");
atom[28].atmnum = 29;
atom[28].atmwt = 63.54;

strcpy(atom[29].name,"ZINC");
strcpy(atom[29].symbol,"Zn");
strcpy(atom[29].nature,"Metal");
atom[29].atmnum = 30;
atom[29].atmwt = 65.38;

strcpy(atom[30].name,"GALLIUM");
strcpy(atom[30].symbol,"Ga");
strcpy(atom[30].nature,"Metal");
atom[30].atmnum = 31;
atom[30].atmwt = 69.72;

strcpy(atom[31].name,"GERMANIUM");
strcpy(atom[31].symbol,"Ge");
strcpy(atom[31].nature,"Metalloids");
atom[31].atmnum = 32;
atom[31].atmwt = 72.63;

strcpy(atom[32].name,"ARSENIC");
strcpy(atom[32].symbol,"As");
strcpy(atom[32].nature,"Metalloids");
atom[32].atmnum = 33;
atom[32].atmwt = 74.92;

strcpy(atom[33].name,"SELINIUM");
strcpy(atom[33].symbol,"Se");
strcpy(atom[33].nature,"Non metal");
atom[33].atmnum = 34;
atom[33].atmwt = 78.97;

strcpy(atom[34].name,"BROMINE");
strcpy(atom[34].symbol,"Br");
strcpy(atom[34].nature,"Non metal");
atom[34].atmnum = 35;
atom[34].atmwt =  79.90;

strcpy(atom[35].name,"KRYPTON");
strcpy(atom[35].symbol,"Kr");
strcpy(atom[35].nature,"Non metal");
atom[35].atmnum = 36;
atom[35].atmwt = 83.79;

strcpy(atom[36].name,"RUBIDIUM");
strcpy(atom[36].symbol,"Rb");
strcpy(atom[36].nature,"Metal");
atom[36].atmnum = 37;
atom[36].atmwt = 85.46;

strcpy(atom[37].name,"STRONTIUM");
strcpy(atom[37].symbol,"Sr");
strcpy(atom[37].nature,"Metal");
atom[37].atmnum = 38;
atom[37].atmwt = 87.62;

strcpy(atom[38].name,"YTTRIUM");
strcpy(atom[38].symbol,"Y");
strcpy(atom[38].nature,"Metal");
atom[38].atmnum = 39;
atom[38].atmwt = 88.90;

strcpy(atom[39].name,"ZIRCONIUM");
strcpy(atom[39].symbol,"Zr");
strcpy(atom[39].nature,"Metal");
atom[39].atmnum = 40;
atom[39].atmwt = 91.22;

strcpy(atom[40].name,"NIOBIUM");
strcpy(atom[40].symbol,"Nb");
strcpy(atom[40].nature,"Metal");
atom[40].atmnum = 41;
atom[40].atmwt = 92.90;

strcpy(atom[41].name,"MOLYBDINUM");
strcpy(atom[41].symbol,"Mo");
strcpy(atom[41].nature,"Metal");
atom[41].atmnum = 42;
atom[41].atmwt = 95.95;

strcpy(atom[42].name,"TECHNITIUM");
strcpy(atom[42].symbol,"Tc");
strcpy(atom[42].nature,"Metal");
atom[42].atmnum = 43;
atom[42].atmwt = 97;

strcpy(atom[43].name,"RUTHENIUM");
strcpy(atom[43].symbol,"Ru");
strcpy(atom[43].nature,"Metal");
atom[43].atmnum = 44;
atom[43].atmwt = 101.07;

strcpy(atom[44].name,"RHODIUM");
strcpy(atom[44].symbol,"Rh");
strcpy(atom[44].nature,"Metal");
atom[44].atmnum = 45;
atom[44].atmwt = 102.90;

strcpy(atom[45].name,"PALLADIUM");
strcpy(atom[45].symbol,"Pd");
strcpy(atom[45].nature,"Metal");
atom[45].atmnum = 46;
atom[45].atmwt = 106.42;

strcpy(atom[46].name,"SILVER");
strcpy(atom[46].symbol,"Ag");
strcpy(atom[46].nature,"Metal");
atom[46].atmnum = 47;
atom[46].atmwt = 107.86;

strcpy(atom[47].name,"CADMIUM");
strcpy(atom[47].symbol,"Cd");
strcpy(atom[47].nature,"Metal");
atom[47].atmnum = 48;
atom[47].atmwt = 112.41;

strcpy(atom[48].name,"INDIUM");
strcpy(atom[48].symbol,"In");
strcpy(atom[48].nature,"Metal");
atom[48].atmnum = 49;
atom[48].atmwt = 114.81;

strcpy(atom[49].name,"TIN");
strcpy(atom[49].symbol,"Sn");
strcpy(atom[49].nature,"Metal");
atom[49].atmnum = 50;
atom[49].atmwt = 118.71;

strcpy(atom[50].name,"ANTIMONY");
strcpy(atom[50].symbol,"Sb");
strcpy(atom[50].nature,"Metalloids");
atom[50].atmnum = 51;
atom[50].atmwt = 121.76;

strcpy(atom[51].name,"TELLURIUM");
strcpy(atom[51].symbol,"Te");
strcpy(atom[51].nature,"Metalloids");
atom[51].atmnum = 52;
atom[51].atmwt = 127.60;

strcpy(atom[52].name,"IODINE");
strcpy(atom[52].symbol,"I");
strcpy(atom[52].nature,"Non metal");
atom[52].atmnum = 53;
atom[52].atmwt = 126.90;

strcpy(atom[53].name,"XENON");
strcpy(atom[53].symbol,"Xe");
strcpy(atom[53].nature,"Non metal");
atom[53].atmnum = 54;
atom[53].atmwt = 131.29;

strcpy(atom[54].name,"CESIUM");
strcpy(atom[54].symbol,"Cs");
strcpy(atom[54].nature,"Metal");
atom[54].atmnum = 55;
atom[54].atmwt = 132.90;

strcpy(atom[55].name,"BARIUM");
strcpy(atom[55].symbol,"Ba");
strcpy(atom[55].nature,"Metal");
atom[55].atmnum = 56;
atom[55].atmwt = 137.32;

strcpy(atom[56].name,"LANTHANUM");
strcpy(atom[56].symbol,"La");
strcpy(atom[56].nature,"Metal");
atom[56].atmnum = 57;
atom[56].atmwt = 138.90;

strcpy(atom[57].name,"CERIUM");
strcpy(atom[57].symbol,"Ce");
strcpy(atom[57].nature,"Metal");
atom[57].atmnum = 58;
atom[57].atmwt = 140.11;

strcpy(atom[58].name,"PRASEODYMIUM");
strcpy(atom[58].symbol,"Pr");
strcpy(atom[58].nature,"Metal");
atom[58].atmnum = 59;
atom[58].atmwt = 140.90;

strcpy(atom[59].name,"NEODYMIUM");
strcpy(atom[59].symbol,"Nd");
strcpy(atom[59].nature,"Metal");
atom[59].atmnum = 60;
atom[59].atmwt = 144.24;

strcpy(atom[60].name,"PROMITHIUM");
strcpy(atom[60].symbol,"Pr");
strcpy(atom[60].nature,"Metal");
atom[60].atmnum = 61;
atom[60].atmwt = 145;

strcpy(atom[61].name,"SAMARIUM");
strcpy(atom[61].symbol,"Sm");
strcpy(atom[61].nature,"Metal");
atom[61].atmnum = 62;
atom[61].atmwt = 150.36;

strcpy(atom[62].name,"EUROPIUM");
strcpy(atom[62].symbol,"Eu");
strcpy(atom[62].nature,"Metal");
atom[62].atmnum = 63;
atom[62].atmwt = 151.96;

strcpy(atom[63].name,"GADOLINIUM");
strcpy(atom[63].symbol,"Gd");
strcpy(atom[63].nature,"Metal");
atom[63].atmnum = 64;
atom[63].atmwt = 157.25;

strcpy(atom[64].name,"TERBIUM");
strcpy(atom[64].symbol,"Tb");
strcpy(atom[64].nature,"Metal");
atom[64].atmnum = 65;
atom[64].atmwt = 158.92;

strcpy(atom[65].name,"DYSPROSIUM");
strcpy(atom[65].symbol,"Dy");
strcpy(atom[65].nature,"Metal");
atom[65].atmnum = 66;
atom[65].atmwt = 162.50;

strcpy(atom[66].name,"HOLMIUM");
strcpy(atom[66].symbol,"Ho");
strcpy(atom[66].nature,"Metal");
atom[66].atmnum = 67;
atom[66].atmwt = 164.93;

strcpy(atom[67].name,"ERBIUM");
strcpy(atom[67].symbol,"Er");
strcpy(atom[67].nature,"Metal");
atom[67].atmnum = 68;
atom[67].atmwt = 167.25;

strcpy(atom[68].name,"THULIUM");
strcpy(atom[68].symbol,"Tm");
strcpy(atom[68].nature,"Metal");
atom[68].atmnum = 69;
atom[68].atmwt = 168.93;

strcpy(atom[69].name,"YTTERBIUM");
strcpy(atom[69].symbol,"Yb");
strcpy(atom[69].nature,"Metal");
atom[69].atmnum = 70;
atom[69].atmwt = 173.04;

strcpy(atom[70].name,"LUTETIUM");
strcpy(atom[70].symbol,"Lu");
strcpy(atom[70].nature,"Metal");
atom[70].atmnum = 71;
atom[70].atmwt = 174.96;

strcpy(atom[71].name,"HAFNIUM");
strcpy(atom[71].symbol,"Hf");
strcpy(atom[71].nature,"Metal");
atom[71].atmnum = 72;
atom[71].atmwt = 178.49;

strcpy(atom[72].name,"TANTALUM");
strcpy(atom[72].symbol,"Ta");
strcpy(atom[72].nature,"Metal");
atom[72].atmnum = 73;
atom[72].atmwt = 180.94;

strcpy(atom[73].name,"TUNGSTEN");
strcpy(atom[73].symbol,"W");
strcpy(atom[73].nature,"Metal");
atom[73].atmnum = 74;
atom[73].atmwt = 183.84;

strcpy(atom[74].name,"RHENIUM");
strcpy(atom[74].symbol,"Re");
strcpy(atom[74].nature,"Metal");
atom[74].atmnum = 75;
atom[74].atmwt = 186.20;

strcpy(atom[75].name,"OSMIUM");
strcpy(atom[75].symbol,"Os");
strcpy(atom[75].nature,"Metal");
atom[75].atmnum = 76;
atom[75].atmwt = 190.23;

strcpy(atom[76].name,"IRIDIUM");
strcpy(atom[76].symbol,"Ir");
strcpy(atom[76].nature,"Metal");
atom[76].atmnum = 77;
atom[76].atmwt = 192.21;

strcpy(atom[77].name,"PLATIUM");
strcpy(atom[77].symbol,"Pt");
strcpy(atom[77].nature,"Metal");
atom[77].atmnum = 78;
atom[77].atmwt = 195.08;

strcpy(atom[78].name,"GOLD");
strcpy(atom[78].symbol,"Au");
strcpy(atom[78].nature,"Metal");
atom[78].atmnum = 79;
atom[78].atmwt = 196.96;

strcpy(atom[79].name,"MERCURY");
strcpy(atom[79].symbol,"Hg");
strcpy(atom[79].nature,"Metal");
atom[79].atmnum = 80;
atom[79].atmwt = 200.59;

strcpy(atom[80].name,"THALLIUM");
strcpy(atom[80].symbol,"Tl");
strcpy(atom[80].nature,"Metal");
atom[80].atmnum = 81;
atom[80].atmwt = 204.38;

strcpy(atom[81].name,"LEAD");
strcpy(atom[81].symbol,"Pb");
strcpy(atom[81].nature,"Metal");
atom[81].atmnum = 82;
atom[81].atmwt = 207.2;

strcpy(atom[82].name,"BISMUTH");
strcpy(atom[82].symbol,"Bi");
strcpy(atom[82].nature,"Metal");
atom[82].atmnum = 83;
atom[82].atmwt = 208.98;

strcpy(atom[83].name,"POLONIUM");
strcpy(atom[83].symbol,"Po");
strcpy(atom[83].nature,"Metal");
atom[83].atmnum = 84;
atom[83].atmwt = 209;

strcpy(atom[84].name,"ASTATINE");
strcpy(atom[84].symbol,"At");
strcpy(atom[84].nature,"Non metal");
atom[84].atmnum = 85;
atom[84].atmwt = 210;

strcpy(atom[85].name,"RADON");
strcpy(atom[85].symbol,"Rn");
strcpy(atom[85].nature,"Non metal");
atom[85].atmnum = 86;
atom[85].atmwt = 222;

strcpy(atom[86].name,"FRANCIUM");
strcpy(atom[86].symbol,"Fr");
strcpy(atom[86].nature,"Metal");
atom[86].atmnum = 87;
atom[86].atmwt = 223;

strcpy(atom[87].name,"RADIUM");
strcpy(atom[87].symbol,"Ra");
strcpy(atom[87].symbol,"Metal");
atom[87].atmnum = 88;
atom[87].atmwt = 226;

strcpy(atom[88].name,"ACTINIUM");
strcpy(atom[88].symbol,"Ac");
strcpy(atom[88].nature,"Metal");
atom[88].atmnum = 89;
atom[88].atmwt = 227;

strcpy(atom[89].name,"THORIUM");
strcpy(atom[89].symbol,"TH");
strcpy(atom[89].nature,"Metal");
atom[89].atmnum = 90;
atom[89].atmwt = 232.03;

strcpy(atom[90].name,"PROTACTINIUM");
strcpy(atom[90].symbol,"Pa");
strcpy(atom[90].nature,"Metal");
atom[90].atmnum = 91;
atom[90].atmwt = 231.03;

strcpy(atom[91].name,"URANIUM");
strcpy(atom[91].symbol,"U");
strcpy(atom[91].nature,"Metal");
atom[91].atmnum = 92;
atom[91].atmwt = 238.02;

strcpy(atom[92].name,"NEPTUNIUM");
strcpy(atom[92].symbol,"Np");
strcpy(atom[92].nature,"Metal");
atom[92].atmnum = 93;
atom[92].atmwt = 237;

strcpy(atom[93].name,"PLUTONIUM");
strcpy(atom[93].symbol,"Pu");
strcpy(atom[93].nature,"Metal");
atom[93].atmnum = 94;
atom[93].atmwt = 244;

strcpy(atom[94].name,"AMERICIUM");
strcpy(atom[94].symbol,"Am");
strcpy(atom[94].nature,"Metal");
atom[94].atmnum = 95;
atom[94].atmwt = 243;

strcpy(atom[95].name,"CURIUM");
strcpy(atom[95].symbol,"Cm");
strcpy(atom[95].nature,"Metal");
atom[95].atmnum = 96;
atom[95].atmwt = 247;

strcpy(atom[96].name,"BERKELIUM");
strcpy(atom[96].symbol,"Bk");
strcpy(atom[96].nature,"Metal");
atom[96].atmnum = 97;
atom[96].atmwt = 247;

strcpy(atom[97].name,"CALIFORNIUM");
strcpy(atom[97].symbol,"Cf");
strcpy(atom[97].nature,"Metal");
atom[97].atmnum = 98;
atom[97].atmwt = 251;

strcpy(atom[98].name,"EINSTENIUM");
strcpy(atom[98].symbol,"Es");
strcpy(atom[98].nature,"Metal");
atom[98].atmnum = 99;
atom[98].atmwt = 252;

strcpy(atom[99].name,"FERMIUM");
strcpy(atom[99].symbol,"Fm");
strcpy(atom[99].nature,"Metal");
atom[99].atmnum = 100;
atom[99].atmwt = 257;

strcpy(atom[100].name,"MENDELIVIUM");
strcpy(atom[100].symbol,"Md");
strcpy(atom[100].nature,"Metal");
atom[100].atmnum = 101;
atom[100].atmwt = 258;

strcpy(atom[101].name,"NOBELIUM");
strcpy(atom[101].symbol,"No");
strcpy(atom[101].nature,"Metal");
atom[101].atmnum = 102;
atom[101].atmwt = 259;

strcpy(atom[102].name,"LAWRENCIUM");
strcpy(atom[102].symbol,"Lr");
strcpy(atom[102].nature,"Metal");
atom[102].atmnum = 103;
atom[102].atmwt = 262;

strcpy(atom[103].name,"RUTHERFORDIUM");
strcpy(atom[103].symbol,"Rf");
strcpy(atom[103].nature,"Metal");
atom[103].atmnum = 104;
atom[103].atmwt = 263;

strcpy(atom[104].name,"DUBNIUM");
strcpy(atom[104].symbol,"Db");
strcpy(atom[104].nature,"Metal");
atom[104].atmnum = 105;
atom[104].atmwt = 268;

strcpy(atom[105].name,"SEABORGIUM");
strcpy(atom[105].symbol,"Sg");
strcpy(atom[105].nature,"Metal");
atom[105].atmnum = 106;
atom[105].atmwt = 271;

strcpy(atom[106].name,"BHORIUM");
strcpy(atom[106].symbol,"Bh");
strcpy(atom[106].nature,"Metal");
atom[106].atmnum = 107;
atom[106].atmwt = 270;

strcpy(atom[107].name,"HASSIUM");
strcpy(atom[107].symbol,"Hs");
strcpy(atom[107].nature,"Metal");
atom[107].atmnum = 108;
atom[107].atmwt = 270;

strcpy(atom[108].name,"MEITNERIUM");
strcpy(atom[108].symbol,"Mt");
strcpy(atom[108].nature,"Metal");
atom[108].atmnum = 109;
atom[108].atmwt = 278;

strcpy(atom[109].name,"DARMSTADTIUM");
strcpy(atom[109].symbol,"Ds");
strcpy(atom[109].nature,"Metal");
atom[109].atmnum = 110;
atom[109].atmwt = 281;

strcpy(atom[110].name,"ROENTGENIUM");
strcpy(atom[110].symbol,"Rg");
strcpy(atom[110].nature,"Metal");
atom[110].atmnum = 111;
atom[110].atmwt = 281;

strcpy(atom[111].name,"COPERNICIUM");
strcpy(atom[111].symbol,"Cn");
strcpy(atom[111].nature,"Metal");
atom[111].atmnum = 112;
atom[111].atmwt = 285;

strcpy(atom[112].name,"NIHONIUM");
strcpy(atom[112].symbol,"Nh");
strcpy(atom[112].nature,"Metal");
atom[112].atmnum = 113;
atom[112].atmwt = 286;

strcpy(atom[113].name,"FLEROVIUM");
strcpy(atom[113].symbol,"Fl");
strcpy(atom[113].nature,"Metal");
atom[113].atmnum = 114;
atom[113].atmwt = 289;

strcpy(atom[114].name,"MOSCOVIUM");
strcpy(atom[114].symbol,"Mc");
strcpy(atom[114].nature,"Metal");
atom[114].atmnum = 115;
atom[114].atmwt = 289;

strcpy(atom[115].name,"LIVERMORIUM");
strcpy(atom[115].symbol,"Lv");
strcpy(atom[115].nature,"Metal");
atom[115].atmnum = 116;
atom[115].atmwt = 293;

strcpy(atom[116].name,"TENNESSINE");
strcpy(atom[116].symbol,"Ts");
strcpy(atom[116].nature,"Metal");
atom[116].atmnum = 117;
atom[116].atmwt = 294;

strcpy(atom[117].name,"OGANESSON");
strcpy(atom[117].symbol,"Og");
strcpy(atom[117].nature,"Non metal");
atom[117].atmnum = 118;
atom[117].atmwt = 294;

}

