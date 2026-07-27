// module: codexmate_lib/core/voice/llm
// addr: 0x14097ee10
// name: sub_14097EE10
// win 1.2.1 | module src/core/voice/llm.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14097EE10(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // of
  int v10; // r9d
  volatile signed __int64 *v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rt0
  _QWORD v16[10]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v17; // [rsp+78h] [rbp-8h]
  __int64 v18; // [rsp+88h] [rbp+8h]
  __int64 v19; // [rsp+90h] [rbp+10h]
  __int64 v20; // [rsp+98h] [rbp+18h]
  __int64 v21; // [rsp+A0h] [rbp+20h]
  __int16 v22; // [rsp+A8h] [rbp+28h]
  __int128 v23; // [rsp+B0h] [rbp+30h]
  __int128 v24; // [rsp+C0h] [rbp+40h]
  __int128 v25; // [rsp+D0h] [rbp+50h]
  __int128 v26; // [rsp+E0h] [rbp+60h]
  __int128 v27; // [rsp+F0h] [rbp+70h]
  __int64 v28; // [rsp+100h] [rbp+80h]
  unsigned __int8 v29; // [rsp+108h] [rbp+88h]
  _BYTE v30[7]; // [rsp+109h] [rbp+89h]
  __int64 v31; // [rsp+110h] [rbp+90h]
  __int64 v32; // [rsp+118h] [rbp+98h]
  __int64 v33; // [rsp+120h] [rbp+A0h]
  char v34; // [rsp+128h] [rbp+A8h]
  __int64 v35; // [rsp+130h] [rbp+B0h]
  _OWORD v36[5]; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v37; // [rsp+1A8h] [rbp+128h]
  _QWORD v38[2]; // [rsp+1B0h] [rbp+130h] BYREF
  int v39; // [rsp+1C0h] [rbp+140h]
  char *v40; // [rsp+1C8h] [rbp+148h]
  char v41; // [rsp+1D7h] [rbp+157h]
  __int64 v42; // [rsp+1D8h] [rbp+158h]

  v42 = -2;
  v40 = a3;
  v41 = 1;
  sub_141060E10(v36, a4);
  v6 = *v40;
  v7 = *((_QWORD *)v40 + 1);
  v8 = *((_QWORD *)v40 + 2);
  v9 = __OFSUB__(*(_QWORD *)&v36[0], -1);
  if ( *(_QWORD *)&v36[0] == -1 )
  {
    v16[1] = *((_QWORD *)&v36[0] + 1);
    v16[0] = 2;
    v9 = 0;
    if ( v6 >= 0xAu && v8 != 0 )
      sub_140001660(v7, v8, 1);
  }
  else
  {
    v17 = 0;
    v10 = *((_DWORD *)v40 + 1);
    *(_DWORD *)v30 = *(_DWORD *)(v40 + 1);
    *(_DWORD *)&v30[3] = v10;
    v23 = v36[0];
    v24 = v36[1];
    v25 = v36[2];
    v26 = v36[3];
    v27 = v36[4];
    v28 = v37;
    v16[0] = 0;
    v16[5] = 0;
    v16[8] = 0;
    v16[9] = 8;
    v18 = 8;
    v19 = 0;
    v20 = 2;
    v21 = 0;
    v22 = 0;
    v29 = v6;
    v31 = v7;
    v32 = v8;
    v33 = 0;
    v34 = 2;
    v35 = 2;
  }
  v11 = *(volatile signed __int64 **)a2;
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_DWORD *)(a2 + 16);
  v14 = _InterlockedIncrement64(*(volatile signed __int64 **)a2);
  if ( (v14 < 0) ^ v9 | (v14 == 0) )
    BUG();
  v38[0] = v11;
  v38[1] = v12;
  v39 = v13;
  v41 = 0;
  sub_14103CC70(a1, v38, v16);
  return a1;
}