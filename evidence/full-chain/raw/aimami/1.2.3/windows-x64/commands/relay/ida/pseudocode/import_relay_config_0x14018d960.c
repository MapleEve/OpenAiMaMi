// win 1.2.1 | tauri command handler = import_relay_config | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall import_relay_config(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r14
  __int128 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[512]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+230h] [rbp+1B0h]
  _BYTE v14[384]; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v15; // [rsp+3B8h] [rbp+338h]
  int v16; // [rsp+3C0h] [rbp+340h]
  int v17; // [rsp+3C4h] [rbp+344h]
  _BYTE v18[152]; // [rsp+3C8h] [rbp+348h] BYREF
  const char *v19; // [rsp+460h] [rbp+3E0h] BYREF
  __int64 v20; // [rsp+468h] [rbp+3E8h]
  const char *v21; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v22; // [rsp+478h] [rbp+3F8h]
  _BYTE *v23; // [rsp+480h] [rbp+400h]
  __int128 *v24; // [rsp+488h] [rbp+408h]
  __int64 v25; // [rsp+490h] [rbp+410h]
  _BYTE v26[48]; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v27; // [rsp+620h] [rbp+5A0h]
  __int128 v28; // [rsp+630h] [rbp+5B0h]
  __int128 v29; // [rsp+640h] [rbp+5C0h]
  __int128 v30; // [rsp+650h] [rbp+5D0h]
  __int128 v31; // [rsp+690h] [rbp+610h] BYREF
  __int64 v32; // [rsp+6A0h] [rbp+620h]
  _OWORD v33[2]; // [rsp+6A8h] [rbp+628h] BYREF
  _BYTE v34[48]; // [rsp+6C8h] [rbp+648h] BYREF
  __int128 v35; // [rsp+6F8h] [rbp+678h]
  __int128 v36; // [rsp+708h] [rbp+688h]
  __int128 v37; // [rsp+718h] [rbp+698h]
  __int128 v38; // [rsp+728h] [rbp+6A8h]
  __int64 v39; // [rsp+738h] [rbp+6B8h]
  __int128 v40; // [rsp+740h] [rbp+6C0h] BYREF
  __int128 v41; // [rsp+750h] [rbp+6D0h]
  __int128 v42; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v43; // [rsp+770h] [rbp+6F0h]
  __int64 v44; // [rsp+780h] [rbp+700h]
  __int64 v45; // [rsp+788h] [rbp+708h]
  char v46; // [rsp+795h] [rbp+715h]
  char v47; // [rsp+796h] [rbp+716h]
  char v48; // [rsp+797h] [rbp+717h]
  __int64 v49; // [rsp+798h] [rbp+718h]

  v49 = -2; /*0x14018d979*/
  sub_141684120(v12, a1, 520); /*0x14018d997*/
  sub_141684120(v14, a1 + 520, 400); /*0x14018d9b3*/
  v43 = *(_QWORD *)(a1 + 936); /*0x14018d9bf*/
  v42 = *(_OWORD *)(a1 + 920); /*0x14018d9cd*/
  v25 = 0; /*0x14018d9d4*/
  v19 = aImportRelayCon; /*0x14018d9e6*/
  v20 = 19; /*0x14018d9ed*/
  v21 = aApp; /*0x14018d9ff*/
  v22 = 3; /*0x14018da06*/
  v23 = v12; /*0x14018da11*/
  v24 = &v42; /*0x14018da1f*/
  v48 = 1; /*0x14018da26*/
  sub_1401C3650(v26, &v19); /*0x14018da3b*/
  if ( *(_DWORD *)v26 == -1 ) /*0x14018da48*/
  {
    *(_OWORD *)&v34[24] = *(_OWORD *)&v26[24]; /*0x14018dbf0*/
    *(_OWORD *)&v34[8] = *(_OWORD *)&v26[8]; /*0x14018dbf7*/
    sub_141684120(&v19, a1 + 520, 360); /*0x14018dc11*/
    v40 = *(_OWORD *)(a1 + 880); /*0x14018dc24*/
    *(_QWORD *)&v41 = *(_QWORD *)(a1 + 896); /*0x14018dc32*/
    *(_QWORD *)v34 = 1; /*0x14018dc45*/
    v48 = 0; /*0x14018dc50*/
    sub_14047E370((unsigned int)&v19, v15, (unsigned int)v34, (unsigned int)&v40, v16, v17); /*0x14018dc70*/
    goto LABEL_22; /*0x14018dc76*/
  }
  sub_141684120(v18, v26, 152); /*0x14018da62*/
  v25 = 0; /*0x14018da67*/
  v19 = aImportRelayCon; /*0x14018da72*/
  v20 = 19; /*0x14018da79*/
  v21 = aManager_0; /*0x14018da8b*/
  v22 = 7; /*0x14018da92*/
  v23 = v12; /*0x14018da9d*/
  v24 = &v42; /*0x14018daa4*/
  v2 = sub_140004B10((volatile void *)(v13 + 16)); /*0x14018dabc*/
  if ( !v2 ) /*0x14018dac2*/
  {
    sub_1416850A0(v33, &v19, &v21); /*0x14018dc90*/
    if ( LOBYTE(v33[0]) != 0xFF ) /*0x14018dc9d*/
    {
      *(_OWORD *)&v34[24] = v33[1]; /*0x14018dcb1*/
      *(_OWORD *)&v34[8] = v33[0]; /*0x14018dcb8*/
      sub_141684120(&v19, a1 + 520, 360); /*0x14018dcd2*/
      v40 = *(_OWORD *)(a1 + 880); /*0x14018dce5*/
      *(_QWORD *)&v41 = *(_QWORD *)(a1 + 896); /*0x14018dcf3*/
      *(_QWORD *)v34 = 1; /*0x14018dd06*/
      v47 = 0; /*0x14018dd11*/
      sub_14047E370((unsigned int)&v19, v15, (unsigned int)v34, (unsigned int)&v40, v16, v17); /*0x14018dd31*/
      v48 = 0; /*0x14018dd37*/
      sub_140014150(v18); /*0x14018dd45*/
      goto LABEL_22; /*0x14018dd4b*/
    }
    v2 = *((_QWORD *)&v33[0] + 1); /*0x14018ddf4*/
  }
  v25 = 0; /*0x14018dac8*/
  v19 = aImportRelayCon; /*0x14018dad3*/
  v20 = 19; /*0x14018dada*/
  v21 = aFilepath; /*0x14018daec*/
  v22 = 8; /*0x14018daf3*/
  v23 = v12; /*0x14018dafe*/
  v24 = &v42; /*0x14018db05*/
  v47 = 1; /*0x14018db0c*/
  sub_1409757B0(&v40, &v19); /*0x14018db21*/
  LOBYTE(v45) = v40; /*0x14018db2e*/
  if ( (_BYTE)v40 == 0xFF ) /*0x14018db36*/
  {
    sub_1404850A0(v34, v18, v2, (char *)&v40 + 8); /*0x14018dd68*/
    sub_141684120(&v19, a1 + 520, 400); /*0x14018dd7e*/
    if ( *(_QWORD *)v34 != -1 ) /*0x14018dd8b*/
    {
      v30 = v38; /*0x14018dd94*/
      v29 = v37; /*0x14018dda2*/
      v28 = v36; /*0x14018ddb0*/
      v27 = v35; /*0x14018ddd3*/
      *(_OWORD *)&v26[32] = *(_OWORD *)&v34[32]; /*0x14018ddda*/
      *(_OWORD *)&v26[16] = *(_OWORD *)&v34[16]; /*0x14018dde1*/
      *(_OWORD *)v26 = *(_OWORD *)v34; /*0x14018dde8*/
LABEL_21:
      v46 = 0; /*0x14018deab*/
      sub_140436DF0(&v19, v26); /*0x14018dec0*/
      goto LABEL_22; /*0x14018dec0*/
    }
    v4 = *(_QWORD *)&v34[8]; /*0x14018de00*/
    *((_QWORD *)&v5 + 1) = *(_QWORD *)&v34[24]; /*0x14018de0e*/
    v6 = *(_QWORD *)&v34[16]; /*0x14018de0e*/
    if ( *(__int64 *)&v34[24] < 0 ) /*0x14018de18*/
    {
      v7 = 0; /*0x14018de1a*/
      goto LABEL_13; /*0x14018de1a*/
    }
    if ( *(_QWORD *)&v34[24] ) /*0x14018de38*/
    {
      nullsub_1(v3); /*0x14018de3a*/
      v7 = 1; /*0x14018de3f*/
      v8 = sub_140001650(*((_QWORD *)&v5 + 1), 1); /*0x14018de4c*/
      if ( !v8 ) /*0x14018de54*/
      {
LABEL_13:
        v44 = v6; /*0x14018de1c*/
        v45 = v4; /*0x14018de23*/
        sub_1416C2D4B(v7, *((_QWORD *)&v5 + 1)); /*0x14018de30*/
      }
      *(_QWORD *)&v5 = v8; /*0x14018de56*/
      sub_141684120(v8, v6, *((_QWORD *)&v5 + 1)); /*0x14018de62*/
    }
    else
    {
      *(_QWORD *)&v5 = 1; /*0x14018de69*/
    }
    if ( v4 ) /*0x14018de71*/
      sub_140001660(v6, v4, 1); /*0x14018de7f*/
    v26[8] = 3; /*0x14018de84*/
    *(_QWORD *)&v26[16] = *((_QWORD *)&v5 + 1); /*0x14018de8b*/
    *(_OWORD *)&v26[24] = v5; /*0x14018de92*/
    *(_QWORD *)v26 = -1; /*0x14018dea0*/
    goto LABEL_21; /*0x14018dea0*/
  }
  *(_OWORD *)&v34[24] = v41; /*0x14018db4a*/
  *(_OWORD *)&v34[8] = v40; /*0x14018db51*/
  sub_141684120(&v19, a1 + 520, 360); /*0x14018db6b*/
  v31 = *(_OWORD *)(a1 + 880); /*0x14018db7e*/
  v32 = *(_QWORD *)(a1 + 896); /*0x14018db8c*/
  *(_QWORD *)v34 = 1; /*0x14018db9f*/
  sub_14047E370((unsigned int)&v19, v15, (unsigned int)v34, (unsigned int)&v31, v16, v17); /*0x14018dbc3*/
  v48 = 0; /*0x14018dbc9*/
  sub_140014150(v18); /*0x14018dbd7*/
LABEL_22:
  if ( (_QWORD)v42 != -1 ) /*0x14018dece*/
  {
    v9 = *((_QWORD *)&v42 + 1); /*0x14018ded0*/
    v44 = v43; /*0x14018dede*/
    v45 = 0; /*0x14018dee5*/
    v39 = *((_QWORD *)&v42 + 1); /*0x14018def0*/
    while ( v44 != v45 ) /*0x14018df0e*/
    {
      ++v45; /*0x14018df13*/
      v10 = v9 + 96; /*0x14018df1a*/
      sub_1402C7520(); /*0x14018df1e*/
      v9 = v10; /*0x14018df24*/
    }
    if ( (_QWORD)v42 ) /*0x14018df33*/
      sub_140001660(*((_QWORD *)&v42 + 1), 96 * v42, 8); /*0x14018df4a*/
  }
  return sub_140014270(v12); /*0x14018df59*/
}