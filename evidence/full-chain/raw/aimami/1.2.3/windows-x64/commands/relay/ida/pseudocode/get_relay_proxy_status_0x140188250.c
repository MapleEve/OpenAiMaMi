// win 1.2.1 | tauri command handler = get_relay_proxy_status | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall get_relay_proxy_status(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // r15
  __int128 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  _BYTE v13[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+238h] [rbp+1B8h]
  _BYTE v15[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v16; // [rsp+3C0h] [rbp+340h]
  int v17; // [rsp+3C8h] [rbp+348h]
  int v18; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v19[2]; // [rsp+3D0h] [rbp+350h] BYREF
  _QWORD v20[48]; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v21; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v22; // [rsp+570h] [rbp+4F0h]
  __int64 v23; // [rsp+578h] [rbp+4F8h]
  __int64 v24; // [rsp+608h] [rbp+588h] BYREF
  __int128 v25; // [rsp+610h] [rbp+590h]
  __int128 v26; // [rsp+620h] [rbp+5A0h]
  _OWORD v27[2]; // [rsp+6A8h] [rbp+628h] BYREF
  __int64 v28; // [rsp+6C8h] [rbp+648h]
  __int128 v29; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v30; // [rsp+6E0h] [rbp+660h]
  __int64 v31; // [rsp+6E8h] [rbp+668h]
  __int64 v32; // [rsp+6F0h] [rbp+670h]
  char v33; // [rsp+6FEh] [rbp+67Eh]
  char v34; // [rsp+6FFh] [rbp+67Fh]
  __int64 v35; // [rsp+700h] [rbp+680h]

  v35 = -2; /*0x140188267*/
  sub_141684120(v13, a1, 520); /*0x140188285*/
  sub_141684120(v15, a1 + 520, 400); /*0x1401882a1*/
  v30 = *(_QWORD *)(a1 + 936); /*0x1401882ad*/
  v29 = *(_OWORD *)(a1 + 920); /*0x1401882bb*/
  v20[4] = 0; /*0x1401882c2*/
  v19[0] = aGetRelayProxyS; /*0x1401882d4*/
  v19[1] = 22; /*0x1401882db*/
  v20[0] = aManager_0; /*0x1401882ed*/
  v20[1] = 7; /*0x1401882f4*/
  v20[2] = v13; /*0x1401882ff*/
  v20[3] = &v29; /*0x14018830d*/
  v34 = 1; /*0x14018831f*/
  v2 = sub_140004B10((volatile void *)(v14 + 16)); /*0x140188326*/
  if ( v2 ) /*0x14018832f*/
  {
LABEL_2:
    v3 = *(_QWORD *)(v2 + 24); /*0x140188331*/
    v34 = 1; /*0x140188335*/
    sub_140847430(v19, v3); /*0x140188343*/
    v34 = 1; /*0x140188349*/
    sub_140ACE710(&v21, v19); /*0x14018835e*/
    sub_141684120(v19, a1 + 520, 400); /*0x140188374*/
    if ( (_QWORD)v21 != -1 ) /*0x140188381*/
    {
      sub_141684120(&v24, &v21, 160); /*0x14018839b*/
LABEL_14:
      v33 = 0; /*0x140188515*/
      sub_140437B30(v19, &v24); /*0x14018852a*/
      goto LABEL_15; /*0x14018852a*/
    }
    v5 = *((_QWORD *)&v21 + 1); /*0x14018846d*/
    v6 = v22; /*0x140188474*/
    *((_QWORD *)&v7 + 1) = v23; /*0x14018847b*/
    if ( v23 < 0 ) /*0x140188485*/
    {
      v8 = 0; /*0x140188487*/
      goto LABEL_8; /*0x140188487*/
    }
    if ( v23 ) /*0x1401884a5*/
    {
      nullsub_1(v4); /*0x1401884ab*/
      v8 = 1; /*0x1401884b0*/
      v9 = sub_140001650(*((_QWORD *)&v7 + 1), 1); /*0x1401884bd*/
      if ( !v9 ) /*0x1401884c5*/
      {
LABEL_8:
        v31 = v6; /*0x140188489*/
        v32 = v5; /*0x140188490*/
        sub_1416C2D4B(v8, *((_QWORD *)&v7 + 1)); /*0x14018849d*/
      }
      *(_QWORD *)&v7 = v9; /*0x1401884c7*/
      sub_141684120(v9, v6, *((_QWORD *)&v7 + 1)); /*0x1401884d3*/
      if ( !v5 ) /*0x1401884db*/
      {
LABEL_13:
        LOBYTE(v25) = 3; /*0x1401884ee*/
        *((_QWORD *)&v25 + 1) = *((_QWORD *)&v7 + 1); /*0x1401884f5*/
        v26 = v7; /*0x1401884fc*/
        v24 = -1; /*0x14018850a*/
        goto LABEL_14; /*0x14018850a*/
      }
    }
    else
    {
      *(_QWORD *)&v7 = 1; /*0x1401885e5*/
      if ( !*((_QWORD *)&v21 + 1) ) /*0x1401885ed*/
        goto LABEL_13; /*0x1401885ed*/
    }
    sub_140001660(v6, v5, 1); /*0x1401884e9*/
    goto LABEL_13; /*0x1401884e9*/
  }
  v34 = 1; /*0x1401883ac*/
  sub_1416850A0(v27, v19, v20); /*0x1401883c1*/
  if ( LOBYTE(v27[0]) == 0xFF ) /*0x1401883ce*/
  {
    v2 = *((_QWORD *)&v27[0] + 1); /*0x1401885d9*/
    goto LABEL_2; /*0x1401885e0*/
  }
  v26 = v27[1]; /*0x1401883e2*/
  v25 = v27[0]; /*0x1401883e9*/
  sub_141684120(v19, a1 + 520, 360); /*0x140188403*/
  v21 = *(_OWORD *)(a1 + 880); /*0x140188416*/
  v22 = *(_QWORD *)(a1 + 896); /*0x140188424*/
  v24 = 1; /*0x140188437*/
  v34 = 0; /*0x140188442*/
  sub_14047E370((unsigned int)v19, v16, (unsigned int)&v24, (unsigned int)&v21, v17, v18); /*0x140188462*/
LABEL_15:
  if ( (_QWORD)v29 != -1 ) /*0x140188538*/
  {
    v10 = *((_QWORD *)&v29 + 1); /*0x14018853e*/
    v31 = v30; /*0x14018854c*/
    v32 = 0; /*0x140188553*/
    v28 = *((_QWORD *)&v29 + 1); /*0x14018855e*/
    while ( v31 != v32 ) /*0x14018857e*/
    {
      ++v32; /*0x140188583*/
      v11 = v10 + 96; /*0x14018858a*/
      sub_1402C7520(); /*0x14018858e*/
      v10 = v11; /*0x140188594*/
    }
    if ( (_QWORD)v29 ) /*0x1401885a3*/
      sub_140001660(*((_QWORD *)&v29 + 1), 96 * v29, 8); /*0x1401885ba*/
  }
  return sub_140014270(v13); /*0x1401885c9*/
}