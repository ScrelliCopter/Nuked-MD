#pragma once

enum {
    state_0 = 0,
    state_1,
    state_z,
    state_test
};

typedef struct {
    int val;
} busstate_t;

typedef struct {
    int o_e;
    int i_vpa;
    int i_br;
    int i_bgack;
    int o_bg;
    int i_reset;
    int i_halt;
    int o_reset;
    int o_halt;
    int i_ipl0;
    int i_ipl1;
    int i_ipl2;
    int o_ipl0;
    int o_ipl1;
    int o_ipl2;
    int o_berr;
    int o_fc0;
    int o_fc1;
    int o_fc2;
    int i_dtack;
    int o_rw;
    int i_berr;
    int i_data;
    int o_data;
    int o_data_z;
    int o_address;
    int o_address_z;
    int o_as;
    int o_lds;
    int o_uds;

    int w1;
    int l1;
    int l2;
    int w2;
    int l3;
    int l4;
    int w3;
    int w4;
    int w5;
    int w6;
    int w7;
    int w8;
    int w9;
    int w10;
    int w11;
    int w12;
    int w13;
    int w14;
    int w15;
    int w16;
    int w17;
    int w18;
    int w19;
    int w20;
    int w21;
    int w22;
    int w23;
    int w24;
    int w25;
    int w26;
    int w27;
    int w28;
    int w29;
    int w30;
    int w31;
    int w32;
    int w33;
    int w34;
    int w35;
    int w36;
    int w37;
    int w38;
    int w39;
    int w40;
    int w41;
    int w42;
    int w43;
    int w44;
    int w45;
    int w46;
    int w47;
    int w48;
    int w49;
    int w50;
    int w51;
    int w52;
    int w53;
    int w54;
    int w55;
    int w56;
    int w57;
    int w58;
    int w59;
    int w60;
    int w61;
    int w62;
    int w63;
    int w64;
    int w65;
    int w66;
    int w67;
    int w68;
    int w69;
    int w70;
    int w71;
    int w72;
    int w73;
    int w74;
    int w75;
    int w76;
    int w77;
    int w78;
    int w79;
    int w80;
    int w81;
    int w82;
    int w83;
    int w84;
    int w85;
    int w86;
    int w87;
    int w88;
    int w89;
    int w90;
    int w91;
    int w92;
    int w93;
    int w94;
    int w95;
    int l5;
    int w96;
    int w97;
    int w98;
    int w99;
    int w100;
    int l6;
    int l7;
    int l8;
    int l9;
    int l10;
    int w101;
    int w102;
    int w103;
    int w104;
    int w105;
    int w106;
    busstate_t b1[4];
    int w107;
    int w108;
    int r1[18];
    int r2;
    int w109;
    int w110;
    int w111;
    int w112;
    int w113[4];
    int w114;
    int w115[5];
    int w116[5];
    int w117[5];
    int w118;
    int w119;
    int w120;
    int w121;
    int w122;
    int r3;
    int w123;
    int w124;
    int w125;
    int w126;
    int w127;
    int w128;
    int w129;
    int w130;
    int w131;
    busstate_t b2[4];
    int w132;
    int w133;
    int w134;
    int w135[4];
    int w136[5];
    int w137[5];
    int w138[5];
    int w139[2];
    int w140;
    int w141;
    int w142;
    int w143;
    int w144;
    int w145;
    int w146;
    int w147;
    int w148;
    int l11;
    int w149;
    int w150;
    int w151;
    int w152;
    int w153;
    int w154;
    int w155;
    int w156;
    int w157;
    int r4;
    int w158;
    int w159;
    int w160;
    int w161;
    int w162;
    int w163;
    int w164;
    int w165;
    int w166;
    int w167;
    int w168;
    int w169;
    int w170;
    int w171;
    int w172;
    int w173;
    int w174;
    int w175;
    int w176;
    int w177;
    int w178;
    int w179;
    int w180;
    int w181;
    int r5;
    //int w182;
    int w183;
    int w184;
    int w185;
    int w186;
    int w187;
    int w188;
    int w189;
    int w190;
    int w191;
    int w192;
    int w193;
    int w194;
    int w195;
    int w196;
    int w197;
    int w198;
    int w199;
    int w200;
    int w201;
    int w202;
    int w203;
    int w204;
    int w205;
    int w206;
    int w207;
    int w208;
    int w209;
    int w210;
    int w211;
    int w212;
    int w213;
    int w214;
    int w215;
    int w216;
    int w217;
    int w218;
    int w219;
    int w220;
    int w221;
    int w222;
    int w223;
    int w224;
    int w225;
    int w226;
    int w227;
    int w228;
    int w229;
    int w230;
    int w231;
    int w232;
    int w233;
    int w234;
    int w235;
    int w236;
    int w237;
    int w238;
    int w239;
    int w240;
    int w241;
    int w242;
    int w243;
    int w244;
    int w245;
    int w246;
    int w247;
    int w248;
    int w249;
    int w250;
    int w251;
    int w252;
    int w253;
    int w254;
    int w255;
    int w256;
    int w257;
    int r6[10];
    busstate_t b3[4];

    int w258;
    int w259[2];
    int w260;
    int w261[2];
    int w262;
    int w263;
    int w264;
    int w265;
    int w266;
    int w267;
    int w268[3];
    int w269[3];
    int w270[2];
    //int w271[2];
    //int w272[2];
    int w273;
    int w274;
    int w275[3];
    int w276[3];
    int w277[6];
    int w278;
    int w279[2];
    int w280;
    int w281[2];
    int w282;
    int w283;
    int w284[2];
    int w285;
    int w286;
    int w287;
    int w288;
    int w289;
    int w290;
    int w291;
    int w292;
    int w293;
    int w294[2];
    int w295;
    int w296[4];
    int w297[4];
    int w298[4];
    int w299;
    int w300;
    int w301;
    int w302;
    int w303;
    int w304;
    int w305;
    int w306;
    int w307;
    int w308;
    int w309;
    int w310;
    int w311;
    int w312;
    int w313;
    int w314;
    int w315[2];
    int w316;
    int w317;
    int w318;
    int w319;
    int w320;
    int w321;
    int w322;
    int w323;
    int w324;
    int w325;
    int w326;
    int w327;
    int w328;
    int w329;
    int c1_l;
    int c1;
    int c2_l;
    int c2;
    int c3_l;
    int c3;
    int c4_l;
    int c4;
    int c5_l;
    int c5;
    int w330;
    int w331;
    int w332;
    int w333;
    int w334;
    int w335;
    int w336;
    int w337;
    int w338;
    int w339;
    int w340;
    int w341;
    int w342;
    int w343[3];
    int w344;
    int w345;
    int w346;
    int w347;
    int w348;
    int w349;
    int w350;
    int w351;
    int w352;
    int w353;
    int w354;
    int w355;
    int w356[2];
    int w357[2];
    int w358[2];
    int w359[4];
    int w360;
    int w361;
    int w362;
    int w363;
    int w364[2];
    int w365;
    int w366;
    int w367;
    int w368;
    int w369;
    int w370;
    int w371;
    int w372;
    int w373;
    int w374;
    int w375;
    int w376;
    int w377;
    int w378;
    int w379;
    int w380;
    int w381;
    int w382;
    int w383;
    int w384;
    int w385;
    int w386;
    int w387;
    int w388;
    int w389[9];
    int w390;
    int w391;
    int w392;
    int w393;
    int w394;
    int w395;
    int w396;
    int w397;
    int w398;
    int w399;
    int w400;
    int w401;
    int w402;
    int w403;
    int w404;
    int w405;
    int w406;
    int w407;
    int w408;
    int w409;
    int w410;
    int w411;
    int w412;
    int w413;
    int w414[3];
    int w415;
    int w416;
    int w417;
    int w418[2];
    int w419;
    int w420;
    int w421[2];
    int w422;
    int w423;
    int w424;
    int w425;
    int w426;
    int w427;
    int w428;
    int w429;
    int w430;
    int w431;
    int w432;
    int w433;
    int w434;
    int w435[3];
    int w436[2];
    int w437;
    int w438;
    int w439[2];
    int w440;
    int w441;
    int w442[2];
    int w443[2];
    int w444;
    int w445; // 10 bit
    int w446;
    int w447;
    int w448;
    int w449;
    int w450;
    int w451;
    int w452;
    int w453;
    int w454;
    int w455;
    int w456;
    int w457;
    int w458;
    int w459;
    int w460;
    int w461;
    int w462[11];
    int w463;
    int w464; // 10 bit
    int codebus; // 10 bit
    int w465[5];
    int w466;
    int w467;
    int w468;
    int w469;
    int w470;
    int w471;
    int codebus2;
    int w472;
    int w473;
    int w474;
    int w475;
    int w476;
    int w477;
    int w478;
    int w479;
    int w480;
    int w481;
    int w482[5];
    int w483;
    int w484;
    int w485;
    int w486;
    int w487;
    int w488;
    int w489;
    int w490;
    int w491;
    int w492;
    int w493;
    int w494;
    int w495;
    int w496;
    int w497;
    int w498;
    int w499;
    int w500;
    int w501;
    int w502;
    int w503;
    int w504;
    int w505;
    int w506;
    int w507;
    int w508;
    int w509;
    int w510;
    int w511;
    int w512;
    int w513;
    int w514;
    int w515;
    int w516;
    int w517;
    int w518;
    int w519[118];
    int w520[118];
    int w521[68];
    int w522[17];
    int w523[17];
    int w524;
    int w525;
    int w526;
    int w527;
    int w528[68];
    int w529[68];
    int w530;
    int a0_pla[171];
    int w531;//10 bit
    int w532;
    int w533;
    int a2_pla[150];
    int a2_pla_g1;
    int a2_pla_g2;
    int a2_pla_g3;
    int w534; // 10bit
    int w535; // 10bit
    int w536;
    int w537;
    int w538; //16 bit
    unsigned int irdbus; // 32 bit
    int w539;
    int w540;
    int w541;
    int w542;
    int w543;
    int w544;
    int w545;
    int w546;
    int w547;
    int w548;
    int w549;
    int w550;
    int w551;
    int w552;
    int w553;
    int w554;
    int w555;
    int w556;
    int w557;
    int w558;
    int w559;
    int w560;
    int w561;
    int w562;
    int w563;
    int w564;
    int w565;
    int w566;
    int w567;
    int w568;
    int ird_pla1[50];
    int ird_pla2[32];
    int ird_pla3[30];
    int ird_pla4[22];
    int w569; // 15 bits
    int w570;
    int w571;
    int w572;
    int w573;
    int w574;
    int w575;
    int w576;
    int w577;
    int w578;
    int w579;
    int w580;
    int w581;
    int w582;
    int w583; // grounded
    int w584;
    int w585;
    int w586;
    int w587;
    int w588;
    int w589;
    int w590;
    int w591; // 16 bits
    int w592;
    int w593;
    int w594;
    int w595;
    int w596;
    int w597[18];
    int w598;
    int w599;
    int w600;
    int w601;
    int alu_io; // 16 bits
    int w602;
    int w603;
    int w604;
    int w605;
    int w606;
    int w607;
    int w608;
    int w609;
    int w610;
    int w611;
    int w612;
    int w613;
    int w614;
    int w615;
    int w616; // 5 bits
    int w617;
    int w618;
    int w619;
    int w620; // 4 bits
    int w621; // 4 bits
    int w622;
    int w623;
    int w624;
    int w625;
    int w626;
    int w627;
    int w628;
    int w629;
    int w630;
    int w631;
    int w632;
    int w633;
    int w634;
    int w635;
    int w636;
    int w637;
    int w638;
    int w639;
    int w640;
    int w641;
    int w642;
    int w643;
    int w644;
    int w645;
    int w646;
    int c2_delay[3];
    int c6;
    int w647;
    int w648;
    int w649;
    int w650;
    int w651;
    int w652;
    int w653;
    int w654;
    int w655;
    int w656;
    int w657;
    int w658;
    int w659;
    int w660;
    int w661;
    int w662;
    int w663;
    int w664;
    int w665;
    int w666;
    int w667;
    int w668;
    int w669;
    int w670;
    int w671;
    int w672;
    int w673;
    int w674;
    int w675;
    int w676;
    int w677;
    int w678;
    int w679;
    int w680;
    int w681;
    int w682;
    int w683;
    int w684;
    int w685;
    int w686;
    int w687;
    int w688;
    int w689;
    int w690;
    int w691;
    int w692;
    int w693;
    int w694;
    int w695;
    int w696;
    int w697;
    int w698;
    int w699;
    int w700;
    int w701;
    int w702;
    int w703;
    int w704;
    int w705;
    int w706;
    int w707;
    int w708;
    int w709;
    int w710;
    int w711;
    int w712;
    int w713;
    int w714;
    int w715;
    int w716;
    int w717;
    int w718;
    int w719;
    int w720;
    int w721;
    int w722;
    int w723;
    int w724;
    int w725;
    int w726;
    int w727;
    int w728;
    int w729;
    int w730;
    int w731;
    int w732;
    int w733;
    int w734;
    int w735;
    int w736;
    int w737;
    int w738;
    int w739;
    int w740;
    int w741;
    int w742;
    int w743;
    int w744;
    int w745;
    int w746;
    int w747;
    int w748;
    int w749;
    int w750;
    int w751;
    int w752;
    int w753;
    int w754;
    int w755;
    int w756;
    int w757;
    int w758;
    int w759;
    int w760;
    int w761;
    int w762;
    int w763;
    int w764;
    int w765;
    int w766;
    int w767;
    int w768;
    int w769;
    int w770;
    int w771;
    int w772;
    int w773;
    int w774;
    int w775;
    int w776;
    int w777;
    int w778;
    int w779;
    int w780;
    int w781;
    int w782;
    int w783;
    int w784;
    int w785;
    int w786;
    int w787;
    int w788;
    int w789;
    int w790;
    int w791;
    int w792;
    int w793;
    int w794;
    int w795;
    int w796;
    int w797;
    int w798;
    int w799;
    int w800;
    int w801;
    int w802;
    int w803;
    int w804;
    int w805;
    int w806;
    int w807;
    int w808;
    int w809;
    int w810;
    int w811;
    int w812;
    int w813;
    int w814;
    int w815;
    int w816;
    int w817;
    int w818;
    int w819;
    int w820;
    int w821;
    int w822;
    int w823;
    int w824;
    int w825;
    int w826;
    int w827;
    int w828;
    int w829;
    int w830;
    int w831;
    int w832;
    int w833;
    int w834;
    int w835;
    int w836;
    int w837;
    int w838;
    int w839;
    int w840;
    int w841;
    int w842;
    int w843;
    int w844;
    int w845;
    int w846;
    int w847;
    int w848;
    int w849;
    int w850;
    int w851;
    int w852;
    int w853;
    int w854;
    int w855;
    int w856;
    int w857;
    int w858;
    int w859;
    int w860;
    int w861;
    int w862;
    int w863;
    int w864;
    int w865;
    int w866;
    int w867;
    int w868;
    int w869;
    int w870;
    int w871;
    int w872;
    int w873;
    int w874;
    int w875;
    int w876;
    int w877;
    int w878;
    int w879;
    int w880;
    int w881;
    int w882;
    int w883;
    int w884;
    int w885;
    int w886;
    int w887;
    int w888;
    int w889;
    int w890;
    int w891;
    int w892;
    int w893;
    int w894;
    int w895;
    int w896;
    int w897;
    int w898;
    int w899;
    int w900;
    int w901;
    int w902;
    int w903;
    int w904;
    int w905;
    int w906;
    int w907;
    int w908;
    int w909;
    int w910;
    int w911;
    int w912;
    int w913;
    int w914;
    int w915;
    int w916;
    int w917;
    int w918;
    int w919;
    int w920;
    int w921;
    int w922;
    int w923;
    int w924;
    int w925;
    int w926;
    int w927;
    int w928;
    int w929;
    int w930;
    int w931;
    int w932;
    int w933;
    int w934;
    int w935;
    int w936;
    int w937;
    int w938;
    int w939;
    int w940;
    int w941;
    int w942;
    int w943;
    int r7[9];
    int w944; // 5 bits
    int w945;
    int w946;
    int w947; // 16 bits
    int w948; // 16 bits
    int data_io; // 16 bits
    int w949; // 16 bits
    int w950; // 16 bits
    int w951; // 16 bits
    int w952; // 16 bits
    int w953; // 16 bits
    int w954[19];
    int w955;
    int w956;
    int w957;
    int w958;
    int w959;
    int w960;
    int w961; // 16 bits
    int w962; // 16 bits
    int r8;
    int w963; // 16 bits
    int w964; // 16 bits
    int w965;
    int w966;
    int w967;
    int w968;
    int w969;
    int w970;
    int w971;
    int w972;
    int w973;
    int w974;
    int w975;
    int w976;
    int w977;
    int w978;
    int w979;
    int w980; // 16 bits
    int w981; // 16 bits
    int w982;
    int w983;
    int w984; // 16 bits
    int w985;
    int w986;
    int w987;
    int w988;
    int w989;
    int w990;
    int w991;
    int w992;
    int data_l;
    int address_mux;
    int as_l1;
    int as_l2;
    int as_l3;
    int uds_l1;
    int uds_l2;
    int uds_l3;
    int lds_l1;
    int lds_l2;
    int lds_l3;
} m68k_t;

