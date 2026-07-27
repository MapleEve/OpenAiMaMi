// module: codexmate_lib/commands/accounts
// addr: 0x1403dfa60
// name: sub_1403DFA60
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403DFA60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+28h] [rbp-58h] BYREF
  __int128 v17; // [rsp+30h] [rbp-50h]
  _BYTE v18[40]; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v19; // [rsp+F8h] [rbp+78h]
  __int64 v20; // [rsp+100h] [rbp+80h]
  __int64 v21; // [rsp+110h] [rbp+90h]
  __int64 v22; // [rsp+118h] [rbp+98h]
  __int64 v23; // [rsp+128h] [rbp+A8h]
  __int64 v24; // [rsp+130h] [rbp+B0h]
  __int64 v25; // [rsp+140h] [rbp+C0h]
  __int64 v26; // [rsp+148h] [rbp+C8h]
  __m256i v27; // [rsp+180h] [rbp+100h]
  __int64 v28; // [rsp+1A0h] [rbp+120h]

  v28 = -2;
  v15 = a2;
  v16 = a3;
  v17 = 0;
  sub_1408A9B00(v18, &v15);
  v7 = *(_QWORD *)v18;
  if ( *(_QWORD *)v18 == -2 )
  {
    result = sub_1403491C0(v18);
    *a1 = -1;
    return result;
  }
  sub_141684120(&v16, &v18[8], 168);
  v15 = v7;
  sub_1403C9DD0(v18, &v15, a4, a5);
  if ( *(_DWORD *)v18 != 2 )
  {
    v27 = *(__m256i *)&v18[8];
    v9 = v21;
    v10 = v22;
    v11 = v23;
    v12 = v24;
    v13 = v25;
    v14 = v26;
    *(_QWORD *)&v18[16] = *(_QWORD *)&v18[32];
    *(_OWORD *)v18 = *(_OWORD *)&v27.m256i_u64[1];
    if ( v19 )
      sub_140001660(v20, v19, 1);
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v10, v9, 1);
      if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_9:
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_11:
          a1[2] = *(_QWORD *)&v18[16];
          *(_OWORD *)a1 = *(_OWORD *)v18;
          return sub_14034E960(&v15);
        }
LABEL_10:
        sub_140001660(v14, v13, 1);
        goto LABEL_11;
      }
    }
    else if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      goto LABEL_9;
    }
    sub_140001660(v12, v11, 1);
    if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_11;
    goto LABEL_10;
  }
  sub_14034ED40(&v18[8]);
  *a1 = -1;
  return sub_14034E960(&v15);
}