// module: codexmate_lib/core/relay/quota
// addr: 0x1404d2f00
// name: detect_official_provider
// win 1.2.3 | = mac codexmate_lib::core::relay::quota::detect_official_provider | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall detect_official_provider(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  void *v7; // r15
  void *v8; // r12
  __int64 v9; // r13
  char v10; // bp
  char v11; // al
  char v12; // cl

  v6 = 16;
  if ( (unsigned __int8)sub_1404E1D70(aApiDeepseekCom, 16, a2, a3) )
  {
    v7 = &unk_14175D6CE;
    v6 = 17;
    v8 = &unk_14175D6DF;
    v9 = 21;
    v10 = 0;
LABEL_20:
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 24) = v9;
    v12 = v10;
    goto LABEL_21;
  }
  v7 = &unk_14175D6AA;
  v8 = &unk_14175D6BA;
  v9 = 20;
  v10 = 1;
  if ( (unsigned __int8)sub_1404E1D70(aApiStepfunAi, 14, a2, a3) )
    goto LABEL_20;
  if ( (unsigned __int8)sub_1404E1D70(aApiStepfunCom, 15, a2, a3) )
    goto LABEL_20;
  v7 = &unk_14175D67E;
  v6 = 20;
  v8 = &unk_14175D692;
  v9 = 24;
  v10 = 2;
  if ( (unsigned __int8)sub_1404E1D70(aApiSiliconflow, 18, a2, a3) )
    goto LABEL_20;
  v10 = 3;
  if ( (unsigned __int8)sub_1404E1D70(aApiSiliconflow_0, 19, a2, a3) )
    goto LABEL_20;
  if ( (unsigned __int8)sub_1404E1D70(aOpenrouterAi, 13, a2, a3) )
  {
    v7 = &unk_14175D652;
    v8 = &unk_14175D665;
    v10 = 4;
    v9 = 25;
    v6 = 19;
    goto LABEL_20;
  }
  v6 = 13;
  if ( (unsigned __int8)sub_1404E1D70(aApiNovitaAi, 13, a2, a3) )
  {
    v7 = &unk_14175D62D;
    v6 = 15;
    v8 = &unk_14175D63C;
    v9 = 22;
    v10 = 5;
    goto LABEL_20;
  }
  v7 = &unk_14175D60F;
  v8 = &unk_14175D61C;
  v9 = 17;
  v10 = 6;
  if ( (unsigned __int8)sub_1404E1D70(aApiMoonshotCn, 15, a2, a3) )
    goto LABEL_20;
  if ( (unsigned __int8)sub_1404E1D70(aPlatformKimiCo, 17, a2, a3) )
    goto LABEL_20;
  v10 = 7;
  if ( (unsigned __int8)sub_1404E1D70(aApiMoonshotAi, 15, a2, a3)
    || (unsigned __int8)sub_1404E1D70(aPlatformKimiAi, 16, a2, a3) )
  {
    goto LABEL_20;
  }
  v6 = 19;
  if ( (unsigned __int8)sub_1404E1D70(aApiKimiComCodi, 19, a2, a3) )
  {
    v7 = &unk_14175D5E8;
    v8 = &unk_14175D5F8;
    v9 = 23;
    v10 = 8;
    v6 = 16;
    goto LABEL_20;
  }
  v7 = &unk_14175D5BC;
  v8 = &unk_14175D5CF;
  v10 = 9;
  if ( (unsigned __int8)sub_1404E1D70(aApiMinimaxiCom, 16, a2, a3) )
  {
    v9 = 25;
    goto LABEL_20;
  }
  v11 = sub_1404E1D70(aApiMinimaxIo, 14, a2, a3);
  v12 = -1;
  v10 = 10;
  v9 = 25;
  if ( v11 )
    goto LABEL_20;
LABEL_21:
  *(_BYTE *)(a1 + 32) = v12;
  return a1;
}