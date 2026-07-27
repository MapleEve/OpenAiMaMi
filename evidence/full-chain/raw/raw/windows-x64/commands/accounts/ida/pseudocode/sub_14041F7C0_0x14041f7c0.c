// module: codexmate_lib/commands/accounts
// addr: 0x14041f7c0
// name: sub_14041F7C0
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14041F7C0(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // r13
  char v6; // r15
  char v7; // bl
  __m128 v8; // xmm6
  __int64 v9; // r12
  bool v10; // zf
  char v11; // bl
  __int64 v12; // rdi
  __int64 result; // rax
  _BYTE v14[336]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+180h] [rbp+100h] BYREF
  __int128 v16; // [rsp+188h] [rbp+108h]
  __int64 v17; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v18; // [rsp+238h] [rbp+1B8h]
  char v19[176]; // [rsp+390h] [rbp+310h] BYREF
  __int64 v20; // [rsp+440h] [rbp+3C0h]
  __int64 v21; // [rsp+448h] [rbp+3C8h]
  __int64 v22; // [rsp+450h] [rbp+3D0h]
  __int64 v23; // [rsp+458h] [rbp+3D8h] BYREF
  char v24; // [rsp+460h] [rbp+3E0h]
  char v25; // [rsp+461h] [rbp+3E1h]
  __int64 v26; // [rsp+468h] [rbp+3E8h]
  __int64 v27; // [rsp+470h] [rbp+3F0h]
  __int64 v28; // [rsp+478h] [rbp+3F8h]
  __int64 v29; // [rsp+480h] [rbp+400h]
  __int64 v30; // [rsp+488h] [rbp+408h]
  __int64 v31; // [rsp+490h] [rbp+410h]
  char v32; // [rsp+498h] [rbp+418h]
  __int64 v33; // [rsp+4A0h] [rbp+420h]
  __int128 v34; // [rsp+4A8h] [rbp+428h]
  char v35; // [rsp+4B8h] [rbp+438h]
  __int64 v36; // [rsp+4C0h] [rbp+440h]
  int v37; // [rsp+4C8h] [rbp+448h]
  char v38; // [rsp+4CCh] [rbp+44Ch]
  __int128 v39; // [rsp+4D0h] [rbp+450h]
  __int128 v40; // [rsp+4E0h] [rbp+460h]
  __int128 v41; // [rsp+4F0h] [rbp+470h]
  __int128 v42; // [rsp+500h] [rbp+480h]
  __int64 v43; // [rsp+518h] [rbp+498h]
  __int64 v44; // [rsp+520h] [rbp+4A0h]
  __int64 v45; // [rsp+528h] [rbp+4A8h]
  __int128 v46; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v47; // [rsp+540h] [rbp+4C0h]
  __int64 v48; // [rsp+550h] [rbp+4D0h]
  __int64 v49; // [rsp+558h] [rbp+4D8h]
  __int64 v50; // [rsp+560h] [rbp+4E0h]
  __int64 v51; // [rsp+568h] [rbp+4E8h]
  __int64 v52; // [rsp+570h] [rbp+4F0h]
  __int64 v53; // [rsp+578h] [rbp+4F8h]
  char v54; // [rsp+585h] [rbp+505h]
  char v55; // [rsp+586h] [rbp+506h]
  char v56; // [rsp+587h] [rbp+507h]
  __int64 v57; // [rsp+588h] [rbp+508h]

  v57 = -2;
  sub_1404206D0(&v15, a2 + 352);
  v4 = *(unsigned int *)(a2 + 664);
  if ( *(_QWORD *)(a2 + 568) == -1 )
  {
    v52 = -1;
    v5 = *(_QWORD *)(a2 + 656);
    if ( *(_DWORD *)a2 == 2 )
      goto LABEL_3;
  }
  else
  {
    sub_14149C500(&v17, a2 + 568);
    v52 = v17;
    v44 = *((_QWORD *)&v18 + 1);
    v49 = v18;
    v5 = *(_QWORD *)(a2 + 656);
    if ( *(_DWORD *)a2 == 2 )
    {
LABEL_3:
      *(_QWORD *)v14 = 2;
      goto LABEL_6;
    }
  }
  sub_14041FEF0(&v17);
  sub_141684120(v14, &v17, 352);
LABEL_6:
  v54 = *(_BYTE *)(a2 + 668);
  v6 = *(_BYTE *)(a2 + 560);
  v7 = *(_BYTE *)(a2 + 561);
  v8 = (__m128)*(unsigned __int64 *)(a2 + 552);
  sub_14149C500(&v17, a2 + 528);
  v51 = v17;
  v43 = *((_QWORD *)&v18 + 1);
  v48 = v18;
  v56 = *(_BYTE *)(a2 + 616);
  v9 = -1;
  v10 = *(_QWORD *)(a2 + 592) == -1;
  v55 = v7;
  if ( v10 )
  {
    v53 = -1;
    v11 = *(_BYTE *)(a2 + 648);
    if ( *(_QWORD *)(a2 + 624) == -1 )
      goto LABEL_11;
    goto LABEL_10;
  }
  sub_14149C500(&v17, a2 + 592);
  v53 = v17;
  v45 = *((_QWORD *)&v18 + 1);
  v50 = v18;
  v11 = *(_BYTE *)(a2 + 648);
  if ( *(_QWORD *)(a2 + 624) != -1 )
  {
LABEL_10:
    sub_14149C500(&v17, a2 + 624);
    v9 = v17;
    v46 = v18;
  }
LABEL_11:
  sub_141684120(v19, &v15, 176);
  v37 = v4;
  v26 = v52;
  v27 = v49;
  v28 = v44;
  v36 = v5;
  sub_141684120(&v17, v14, 352);
  v38 = v54;
  v20 = v51;
  v21 = v48;
  v22 = v43;
  _mm_storel_ps((double *)&v23, v8);
  v24 = v6;
  v25 = v55;
  v29 = v53;
  v30 = v50;
  v31 = v45;
  v32 = v56;
  v33 = v9;
  v34 = v46;
  v35 = v11;
  sub_14032DC20(&v46, a2 + 672);
  if ( *(_QWORD *)(a2 + 696) == -1 )
  {
    v12 = -1;
  }
  else
  {
    sub_14149C500(&v15, a2 + 696);
    v11 = *(_BYTE *)(a2 + 808);
    if ( *(_QWORD *)(a2 + 720) == -1 )
    {
      v4 = -1;
    }
    else
    {
      sub_14149C500(v14, a2 + 720);
      v4 = *(_QWORD *)v14;
      v39 = *(_OWORD *)&v14[8];
    }
    v8 = *(__m128 *)(a2 + 792);
    v40 = *(_OWORD *)(a2 + 744);
    v41 = *(_OWORD *)(a2 + 760);
    v42 = *(_OWORD *)(a2 + 776);
    v12 = v15;
    *(_OWORD *)v14 = v16;
  }
  sub_141684120(a1, &v17, 672);
  result = v47;
  *(_QWORD *)(a1 + 688) = v47;
  *(_OWORD *)(a1 + 672) = v46;
  *(_QWORD *)(a1 + 696) = v12;
  *(_OWORD *)(a1 + 704) = *(_OWORD *)v14;
  *(_QWORD *)(a1 + 720) = v4;
  *(_OWORD *)(a1 + 728) = v39;
  *(_OWORD *)(a1 + 744) = v40;
  *(_OWORD *)(a1 + 760) = v41;
  *(_OWORD *)(a1 + 776) = v42;
  *(__m128 *)(a1 + 792) = v8;
  *(_BYTE *)(a1 + 808) = v11;
  return result;
}