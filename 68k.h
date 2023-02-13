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
    int w182;
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


    int jj;
    // temp wires
    int tm_w1;
    int tm_w2;
    int tm_w3;
    int tm_w4;
    int tm_w5;
    int tm_w6;
    int tm_w7;
    int tm_w8;
    int tm_w9;
    int tm_w10;
    int tm_w11;
    int tm_w12;
} m68k_t;

