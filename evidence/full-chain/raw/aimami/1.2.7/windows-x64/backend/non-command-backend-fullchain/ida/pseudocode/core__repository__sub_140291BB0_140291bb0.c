// win 1.2.7 | module src/core/repository.rs | ea 0x140291bb0 | name sub_140291BB0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_140291BB0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r14
  int v6; // eax
  __int64 v7; // r8
  char v8; // al
  char v9; // r9
  __int16 v10; // cx
  __int64 v11; // rcx
  char v12; // al
  char v13; // r8
  __int16 v14; // dx
  __int128 v16; // [rsp+20h] [rbp-F8h]
  _BYTE v17[23]; // [rsp+30h] [rbp-E8h]
  __int128 v18; // [rsp+50h] [rbp-C8h]
  _BYTE v19[23]; // [rsp+60h] [rbp-B8h]
  _QWORD v20[2]; // [rsp+78h] [rbp-A0h] BYREF
  char v21; // [rsp+88h] [rbp-90h]
  __int128 v22; // [rsp+89h] [rbp-8Fh]
  _BYTE v23[23]; // [rsp+99h] [rbp-7Fh]
  __int16 v24; // [rsp+B0h] [rbp-68h]
  char v25; // [rsp+B2h] [rbp-66h]
  _QWORD v26[2]; // [rsp+B8h] [rbp-60h] BYREF
  char v27; // [rsp+C8h] [rbp-50h]
  __int128 v28; // [rsp+C9h] [rbp-4Fh]
  _BYTE v29[23]; // [rsp+D9h] [rbp-3Fh]
  __int16 v30; // [rsp+F0h] [rbp-28h]
  char v31; // [rsp+F2h] [rbp-26h]

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 == v3
    && *((_BYTE *)a1 + 56) == *((_BYTE *)a2 + 56)
    && *((_BYTE *)a1 + 57) == 2
    && *((_BYTE *)a2 + 57) == 2
    && *((_BYTE *)a1 + 16) < 3u == *((_BYTE *)a2 + 16) < 3u )
  {
    v4 = a1;
    v5 = a2;
    v6 = sub_1418F4B70(*a1, *a2);
    a1 = v4;
    a2 = v5;
    if ( !v6 )
      return 1;
  }
  v7 = *a1;
  v8 = *((_BYTE *)a1 + 16);
  if ( v8 != -1 )
  {
    *(_QWORD *)&v17[15] = a1[6];
    *(_OWORD *)v17 = *(_OWORD *)((char *)a1 + 33);
    v16 = *(_OWORD *)((char *)a1 + 17);
  }
  v9 = *((_BYTE *)a1 + 58);
  v10 = *((_WORD *)a1 + 28);
  v20[0] = v7;
  v20[1] = v2;
  v21 = v8;
  v22 = v16;
  *(_OWORD *)v23 = *(_OWORD *)v17;
  *(_QWORD *)&v23[15] = *(_QWORD *)&v17[15];
  v24 = v10;
  v25 = v9;
  v11 = *a2;
  v12 = *((_BYTE *)a2 + 16);
  if ( v12 != -1 )
  {
    *(_QWORD *)&v19[15] = a2[6];
    *(_OWORD *)v19 = *(_OWORD *)((char *)a2 + 33);
    v18 = *(_OWORD *)((char *)a2 + 17);
  }
  v13 = *((_BYTE *)a2 + 58);
  v14 = *((_WORD *)a2 + 28);
  v26[0] = v11;
  v26[1] = v3;
  v27 = v12;
  v28 = v18;
  *(_OWORD *)v29 = *(_OWORD *)v19;
  *(_QWORD *)&v29[15] = *(_QWORD *)&v19[15];
  v30 = v14;
  v31 = v13;
  return sub_140D2A460(v20, v26);
}
