// module: codexmate_lib/core/repository
// addr: 0x1403c7270
// name: sub_1403C7270
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403C7270(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  int v9; // eax
  int v10; // edx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // r13
  unsigned __int128 *v21; // r12
  __int64 v22; // r14
  int v23; // r11d
  __int64 v24; // rbx
  unsigned __int128 *v25; // r15
  __int64 v26; // r12
  __int64 v27; // rbx
  int v28; // r13d
  int v29; // r11d
  __int128 v30; // xmm0
  _OWORD v32[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h]
  __int128 v34; // [rsp+48h] [rbp-38h]
  __int128 v35; // [rsp+58h] [rbp-28h]
  __int64 v36; // [rsp+68h] [rbp-18h]
  __int64 v37; // [rsp+70h] [rbp-10h]
  __int64 v38; // [rsp+78h] [rbp-8h]
  unsigned __int128 v39; // [rsp+80h] [rbp+0h] BYREF
  __int128 v40; // [rsp+90h] [rbp+10h]
  unsigned __int128 v41; // [rsp+A0h] [rbp+20h]
  int v42; // [rsp+BCh] [rbp+3Ch]
  unsigned __int64 v43; // [rsp+C0h] [rbp+40h]
  __int64 v44; // [rsp+C8h] [rbp+48h]
  __int64 v45; // [rsp+D0h] [rbp+50h]

  v45 = -2;
  sub_14148D130(&v39, a2, a3);
  v4 = *((_QWORD *)&v39 + 1);
  if ( (_QWORD)v39 == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v4;
    return a1;
  }
  v44 = v39;
  v39 = __PAIR128__(v40, *((unsigned __int64 *)&v39 + 1));
  v40 = 0;
  v43 = v4;
  v41 = __PAIR128__(*((unsigned __int64 *)&v39 + 1), v4);
  sub_1408A6700(v32, &v39);
  v8 = *((_QWORD *)&v32[0] + 1);
  if ( *(_QWORD *)&v32[0] == -1 )
  {
    *(_QWORD *)a1 = 3;
    *(_QWORD *)(a1 + 8) = v8;
    v15 = v44;
    if ( !v44 )
      return a1;
    goto LABEL_25;
  }
  v36 = v33;
  v35 = v32[1];
  v34 = v32[0];
  v9 = 3;
  if ( (int)v33 >= 4 )
    v9 = v33;
  LODWORD(v36) = v9;
  LODWORD(v32[0]) = sub_141475580(v33, v5, v6, v7);
  DWORD1(v32[0]) = v10;
  sub_141475530(&v39, v32, 3577643008LL, 27111902);
  v38 = a1;
  if ( (_BYTE)v39 )
  {
    v13 = 0;
    v14 = v35;
    if ( !(_QWORD)v35 )
      goto LABEL_24;
  }
  else
  {
    v13 = *((_QWORD *)&v39 + 1);
    v14 = v35;
    if ( !(_QWORD)v35 )
      goto LABEL_24;
  }
  v16 = 160 * v14;
  v37 = v16;
  v17 = v8 + 80;
  v18 = 0;
  do
  {
    v19 = *(_QWORD *)(v17 + v18 - 64);
    v20 = *(_QWORD *)(v17 + v18 - 56);
    v21 = (unsigned __int128 *)(v17 + v18 - 40);
    v22 = 2;
    if ( v19 == 2 || ((unsigned __int8)v19 & (v20 <= v13)) != 0 || *(_DWORD *)(v17 + v18 - 48) != 1 )
    {
      v24 = 2;
    }
    else
    {
      v23 = *(_DWORD *)(v17 + v18 - 44);
      v24 = 2;
      if ( (unsigned int)(v23 - 1) <= 0x167 )
      {
        v39 = *v21;
        v42 = v23;
        v11 = v20;
        v24 = v19;
      }
    }
    v25 = (unsigned __int128 *)(v17 + v18);
    *(_QWORD *)(v17 + v18 - 64) = v24;
    *(_QWORD *)(v17 + v18 - 56) = v11;
    *(_DWORD *)(v17 + v18 - 48) = 1;
    *(_DWORD *)(v17 + v18 - 44) = v42;
    *v21 = v39;
    v26 = *(_QWORD *)(v17 + v18 - 24);
    if ( v26 != 2 )
    {
      v27 = *(_QWORD *)(v17 + v18 - 16);
      v28 = *(_DWORD *)(v17 + v18 - 4);
      if ( ((v27 <= v13) & (unsigned __int8)v26) == 0 )
      {
        v29 = *(_DWORD *)(v17 + v18 - 8);
        if ( ((unsigned __int8)v29 & (v28 < 8640)) == 0 )
        {
          v39 = *v25;
          v22 = v26;
          a1 = v27;
          LODWORD(v16) = v29;
          v12 = v28;
        }
      }
    }
    *(_QWORD *)(v17 + v18 - 24) = v22;
    *(_QWORD *)(v17 + v18 - 16) = a1;
    *(_DWORD *)(v17 + v18 - 8) = v16;
    *(_DWORD *)(v17 + v18 - 4) = v12;
    *v25 = v39;
    v18 += 160;
  }
  while ( v37 != v18 );
LABEL_24:
  a1 = v38;
  *(_QWORD *)(v38 + 40) = v36;
  v30 = v34;
  *(_OWORD *)(a1 + 24) = v35;
  *(_OWORD *)(a1 + 8) = v30;
  *(_QWORD *)a1 = -1;
  v15 = v44;
  if ( v44 )
LABEL_25:
    sub_140001660(v43, v15, 1);
  return a1;
}