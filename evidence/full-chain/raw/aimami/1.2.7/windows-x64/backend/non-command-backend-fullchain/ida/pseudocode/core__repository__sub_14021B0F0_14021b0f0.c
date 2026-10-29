// win 1.2.7 | module src/core/repository.rs | ea 0x14021b0f0 | name sub_14021B0F0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14021B0F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  int v8; // eax
  int v9; // edx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // r13
  unsigned __int128 *v20; // r12
  __int64 v21; // r14
  int v22; // r11d
  __int64 v23; // rbx
  unsigned __int128 *v24; // r15
  __int64 v25; // r12
  __int64 v26; // rbx
  int v27; // r13d
  int v28; // r11d
  __int128 v29; // xmm0
  _OWORD v31[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v32; // [rsp+40h] [rbp-40h]
  __int128 v33; // [rsp+48h] [rbp-38h]
  __int128 v34; // [rsp+58h] [rbp-28h]
  __int64 v35; // [rsp+68h] [rbp-18h]
  __int64 v36; // [rsp+70h] [rbp-10h]
  __int64 v37; // [rsp+78h] [rbp-8h]
  unsigned __int128 v38; // [rsp+80h] [rbp+0h] BYREF
  __int128 v39; // [rsp+90h] [rbp+10h]
  unsigned __int128 v40; // [rsp+A0h] [rbp+20h]
  int v41; // [rsp+BCh] [rbp+3Ch]
  unsigned __int64 v42; // [rsp+C0h] [rbp+40h]
  __int64 v43; // [rsp+C8h] [rbp+48h]
  __int64 v44; // [rsp+D0h] [rbp+50h]

  v44 = -2;
  sub_14169D1D0(&v38, a2, a3);
  v4 = *((_QWORD *)&v38 + 1);
  if ( (_QWORD)v38 == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v4;
    return a1;
  }
  v43 = v38;
  v38 = __PAIR128__(v39, *((unsigned __int64 *)&v38 + 1));
  v39 = 0;
  v42 = v4;
  v40 = __PAIR128__(*((unsigned __int64 *)&v38 + 1), v4);
  sub_14062D780(v31, &v38);
  v7 = *((_QWORD *)&v31[0] + 1);
  if ( *(_QWORD *)&v31[0] == -1 )
  {
    *(_QWORD *)a1 = 3;
    *(_QWORD *)(a1 + 8) = v7;
    v14 = v43;
    if ( !v43 )
      return a1;
    goto LABEL_25;
  }
  v35 = v32;
  v34 = v31[1];
  v33 = v31[0];
  v8 = 3;
  if ( (int)v32 >= 4 )
    v8 = v32;
  LODWORD(v35) = v8;
  LODWORD(v31[0]) = sub_141683E80(v32, v5, v6);
  DWORD1(v31[0]) = v9;
  sub_141683E30(&v38, v31, 3577643008LL, 27111902);
  v37 = a1;
  if ( (_BYTE)v38 )
  {
    v12 = 0;
    v13 = v34;
    if ( !(_QWORD)v34 )
      goto LABEL_24;
  }
  else
  {
    v12 = *((_QWORD *)&v38 + 1);
    v13 = v34;
    if ( !(_QWORD)v34 )
      goto LABEL_24;
  }
  v15 = 192 * v13;
  v36 = v15;
  v16 = v7 + 80;
  v17 = 0;
  do
  {
    v18 = *(_QWORD *)(v16 + v17 - 64);
    v19 = *(_QWORD *)(v16 + v17 - 56);
    v20 = (unsigned __int128 *)(v16 + v17 - 40);
    v21 = 2;
    if ( v18 == 2 || ((unsigned __int8)v18 & (v19 <= v12)) != 0 || *(_DWORD *)(v16 + v17 - 48) != 1 )
    {
      v23 = 2;
    }
    else
    {
      v22 = *(_DWORD *)(v16 + v17 - 44);
      v23 = 2;
      if ( (unsigned int)(v22 - 1) <= 0x167 )
      {
        v38 = *v20;
        v41 = v22;
        v10 = v19;
        v23 = v18;
      }
    }
    v24 = (unsigned __int128 *)(v16 + v17);
    *(_QWORD *)(v16 + v17 - 64) = v23;
    *(_QWORD *)(v16 + v17 - 56) = v10;
    *(_DWORD *)(v16 + v17 - 48) = 1;
    *(_DWORD *)(v16 + v17 - 44) = v41;
    *v20 = v38;
    v25 = *(_QWORD *)(v16 + v17 - 24);
    if ( v25 != 2 )
    {
      v26 = *(_QWORD *)(v16 + v17 - 16);
      v27 = *(_DWORD *)(v16 + v17 - 4);
      if ( ((v26 <= v12) & (unsigned __int8)v25) == 0 )
      {
        v28 = *(_DWORD *)(v16 + v17 - 8);
        if ( ((unsigned __int8)v28 & (v27 < 8640)) == 0 )
        {
          v38 = *v24;
          v21 = v25;
          a1 = v26;
          LODWORD(v15) = v28;
          v11 = v27;
        }
      }
    }
    *(_QWORD *)(v16 + v17 - 24) = v21;
    *(_QWORD *)(v16 + v17 - 16) = a1;
    *(_DWORD *)(v16 + v17 - 8) = v15;
    *(_DWORD *)(v16 + v17 - 4) = v11;
    *v24 = v38;
    v17 += 192;
  }
  while ( v36 != v17 );
LABEL_24:
  a1 = v37;
  *(_QWORD *)(v37 + 40) = v35;
  v29 = v33;
  *(_OWORD *)(a1 + 24) = v34;
  *(_OWORD *)(a1 + 8) = v29;
  *(_QWORD *)a1 = -1;
  v14 = v43;
  if ( v43 )
LABEL_25:
    sub_140001660(v42, v14, 1);
  return a1;
}
