// win 1.2.7 | module src/core/sessions/detail.rs | ea 0x140f750b0 | name sub_140F750B0
// win 1.2.7 | module src/core/sessions/detail.rs | attributed via panic-Location xref (win-native)
unsigned __int64 __fastcall sub_140F750B0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  const __m128i *v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  __m128i *v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // esi
  __int64 v25; // r13
  __int64 v26; // r12
  __m128i *v27; // rax
  __int64 v28; // rdx
  const __m128i *v29; // rdx
  __int64 v30; // r14
  unsigned __int64 v31; // r15
  __m128i *v32; // rax
  __int64 v33; // rax
  __m128i *v34; // rsi
  bool v35; // cf
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rsi
  const __m128i *v39; // rdi
  __int64 v40; // rsi
  const __m128i *v41; // rdi
  __int64 v42; // rsi
  unsigned __int64 v43; // rax
  _QWORD *v44; // rdx
  _QWORD *v45; // rcx
  __int128 v46; // xmm0
  __int128 v47; // xmm0
  __int128 v48; // xmm0
  __int128 v49; // xmm0
  __int64 v50; // r8
  unsigned __int64 result; // rax
  __int128 v52; // [rsp+30h] [rbp-50h]
  __int128 v53; // [rsp+40h] [rbp-40h]
  __int128 v54; // [rsp+50h] [rbp-30h]
  __int128 v55; // [rsp+60h] [rbp-20h]
  __int64 v56; // [rsp+78h] [rbp-8h]
  __int64 v58; // [rsp+98h] [rbp+18h]
  __m128i *v59; // [rsp+A0h] [rbp+20h]
  _QWORD v60[3]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v61; // [rsp+C0h] [rbp+40h]
  __int64 v62; // [rsp+C8h] [rbp+48h]
  __int64 v63; // [rsp+D0h] [rbp+50h]
  __int128 v64; // [rsp+D8h] [rbp+58h] BYREF
  unsigned __int64 v65; // [rsp+E8h] [rbp+68h]
  __int64 v66; // [rsp+F0h] [rbp+70h]
  const __m128i *v67; // [rsp+F8h] [rbp+78h]
  __int64 v68; // [rsp+100h] [rbp+80h]
  __int64 v69; // [rsp+108h] [rbp+88h]
  __int64 v70; // [rsp+110h] [rbp+90h]
  unsigned __int64 v71; // [rsp+118h] [rbp+98h]
  const __m128i *v72; // [rsp+120h] [rbp+A0h]
  __int64 v73; // [rsp+128h] [rbp+A8h]
  __int64 v74; // [rsp+130h] [rbp+B0h]
  char v75; // [rsp+13Eh] [rbp+BEh]
  char v76; // [rsp+13Fh] [rbp+BFh]
  __int64 v77; // [rsp+140h] [rbp+C0h]

  v77 = -2;
  v4 = a2[2];
  if ( v4 )
  {
    nullsub_1(a1);
    v5 = sub_140001650(72 * v4, 8);
    if ( !v5 )
    {
      v75 = 1;
      sub_141938D2B(8, 72 * v4);
    }
  }
  else
  {
    v5 = 8;
  }
  *(_QWORD *)&v64 = v4;
  *((_QWORD *)&v64 + 1) = v5;
  v65 = 0;
  v6 = *a2;
  v7 = a2[1];
  v8 = v7 + 72 * v4;
  v60[0] = v7;
  v60[1] = v7;
  v60[2] = v6;
  v61 = v8;
  if ( v4 )
  {
    v9 = 0x200000;
    v10 = 0;
    v11 = v7 + 72 * v4;
    while ( 1 )
    {
      v8 = v11 - 72;
      if ( *(_QWORD *)(v11 - 72) == -1 )
        goto LABEL_47;
      v68 = *(_QWORD *)(v11 - 72);
      v62 = *(_QWORD *)(v11 - 64);
      v14 = *(_QWORD *)(v11 - 48);
      v15 = *(const __m128i **)(v11 - 40);
      v16 = *(_QWORD *)(v11 - 24);
      v63 = *(_QWORD *)(v11 - 16);
      if ( !v9 )
      {
LABEL_50:
        v61 = v11 - 72;
        if ( v68 )
        {
          v39 = v15;
          v40 = v14;
          sub_140001660(v62, v68, 1);
          v14 = v40;
          v15 = v39;
        }
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          v41 = v15;
          v42 = v14;
          sub_140001660(v63, v16, 1);
          v14 = v42;
          v15 = v41;
        }
        LOBYTE(v10) = 1;
        if ( v14 )
          sub_140001660(v15, v14, 1);
        goto LABEL_56;
      }
      v56 = *(_QWORD *)(v11 - 56);
      v17 = *(_QWORD *)(v11 - 32);
      v18 = *(_QWORD *)(v11 - 8);
      v19 = 0x10000;
      if ( v9 < 0x10000 )
        v19 = v9;
      if ( v17 <= v19 )
      {
        v74 = v11 - 72;
        v72 = v15;
        if ( v17 )
        {
          v73 = v14;
          nullsub_1(v19);
          v21 = (__m128i *)sub_140001650(v17, 1);
          if ( !v21 )
          {
            v61 = v74;
            v67 = v15;
            v66 = v73;
            v76 = 1;
            sub_141938D2B(1, v17);
          }
          v69 = (__int64)v21;
          sub_1418F44E0(v21, v15, v17);
          v70 = 0;
          v22 = v17;
          v23 = v68;
          v14 = v73;
        }
        else
        {
          v69 = 1;
          v22 = 0;
          v70 = 0;
          v23 = v68;
        }
        goto LABEL_40;
      }
      v58 = *(_QWORD *)(v11 - 8);
      v20 = 0;
      if ( v19 >= 7 )
        v20 = v19 - 7;
      if ( v9 >= 8 )
        break;
LABEL_19:
      LOBYTE(a3) = 1;
      if ( v9 > 6 )
        goto LABEL_28;
      while ( v15->m128i_i8[v19] <= -65 )
      {
        if ( !--v19 )
          goto LABEL_50;
      }
      v30 = v14;
      v74 = v11 - 72;
      v31 = v19;
      nullsub_1(v19);
      v32 = (__m128i *)sub_140001650(v31, 1);
      if ( !v32 )
      {
        v61 = v74;
        v67 = v15;
        v66 = v30;
        v76 = 1;
        sub_141938D2B(1, v31);
      }
      v69 = (__int64)v32;
      v72 = v15;
      v33 = sub_1418F44E0(v32, v15, v31);
      LOBYTE(v33) = 1;
      v70 = v33;
      v23 = v68;
      v14 = v30;
      v22 = v31;
LABEL_39:
      v18 = v58;
LABEL_40:
      v35 = v9 < v22;
      v36 = v9 - v22;
      v9 = 0;
      if ( !v35 )
        v9 = v36;
      if ( v14 )
      {
        v37 = v22;
        sub_140001660(v72, v14, 1);
        v22 = v37;
      }
      *(_QWORD *)&v52 = v23;
      *((_QWORD *)&v52 + 1) = v62;
      *(_QWORD *)&v53 = v56;
      *((_QWORD *)&v53 + 1) = v22;
      *(_QWORD *)&v54 = v69;
      v71 = v22;
      *((_QWORD *)&v54 + 1) = v22;
      *(_QWORD *)&v55 = v16;
      *((_QWORD *)&v55 + 1) = v63;
      v38 = v65;
      if ( v65 == (_QWORD)v64 )
        sub_14190FB90(&v64);
      LOBYTE(v10) = v70 | v10;
      v12 = *((_QWORD *)&v64 + 1);
      v13 = 9 * v38;
      *(_QWORD *)(*((_QWORD *)&v64 + 1) + 8 * v13 + 64) = v18;
      *(_OWORD *)(v12 + 8 * v13 + 48) = v55;
      *(_OWORD *)(v12 + 8 * v13 + 32) = v54;
      *(_OWORD *)(v12 + 8 * v13 + 16) = v53;
      *(_OWORD *)(v12 + 8 * v13) = v52;
      v65 = v38 + 1;
      v8 = v74;
      v11 = v74;
      if ( v7 == v74 )
        goto LABEL_47;
    }
    while ( v15->m128i_i8[v20] <= -65 )
    {
      if ( !--v20 )
      {
        v20 = 0;
        goto LABEL_19;
      }
    }
    a3 = 0;
LABEL_28:
    if ( (__int64)(v20 + 7) < 0 )
    {
      v26 = 0;
      goto LABEL_49;
    }
    LODWORD(v70) = a3;
    v72 = v15;
    v24 = v10;
    v25 = v7;
    v73 = v14;
    v74 = v11 - 72;
    nullsub_1(v19);
    v26 = 1;
    v71 = v20 + 7;
    v27 = (__m128i *)sub_140001650(v20 + 7, 1);
    if ( !v27 )
    {
      v59 = (__m128i *)v71;
      v8 = v74;
      v14 = v73;
      v15 = v72;
LABEL_49:
      v61 = v8;
      v67 = v15;
      v66 = v14;
      v76 = 1;
      sub_141938D2B(v26, v59);
    }
    v14 = v73;
    v7 = v25;
    v10 = v24;
    v22 = v71;
    v69 = (__int64)v27;
    if ( !(_BYTE)v70 )
    {
      if ( v20 >= v17 )
      {
        v29 = v72;
        if ( v20 != v17 )
        {
LABEL_63:
          v61 = v74;
          sub_141938F40((_DWORD)v29, v17, 0, v20, (__int64)&off_141A63B60);
        }
      }
      else
      {
        v29 = v72;
        if ( v72->m128i_i8[v20] <= -65 )
          goto LABEL_63;
      }
      v34 = v27;
      sub_1418F44E0(v27, v29, v20);
      v27 = v34;
      v14 = v73;
      v22 = v71;
    }
    *(__int32 *)((char *)v27->m128i_i32 + v20 + 3) = 1563307566;
    *(__int32 *)((char *)v27->m128i_i32 + v20) = 777718282;
    LOBYTE(v28) = 1;
    v70 = v28;
    v59 = v27;
    v23 = v68;
    goto LABEL_39;
  }
  LOBYTE(v10) = 0;
LABEL_47:
  v61 = v8;
LABEL_56:
  sub_1403F95F0(v60);
  v43 = v65 >> 1;
  if ( v65 >> 1 )
  {
    v44 = (_QWORD *)(*((_QWORD *)&v64 + 1) + 72 * v65 - 8);
    v45 = (_QWORD *)(*((_QWORD *)&v64 + 1) + 64LL);
    do
    {
      v46 = *((_OWORD *)v45 - 4);
      *((_OWORD *)v45 - 4) = *((_OWORD *)v44 - 4);
      *((_OWORD *)v44 - 4) = v46;
      v47 = *((_OWORD *)v45 - 3);
      *((_OWORD *)v45 - 3) = *((_OWORD *)v44 - 3);
      *((_OWORD *)v44 - 3) = v47;
      v48 = *((_OWORD *)v45 - 2);
      *((_OWORD *)v45 - 2) = *((_OWORD *)v44 - 2);
      *((_OWORD *)v44 - 2) = v48;
      v49 = *((_OWORD *)v45 - 1);
      *((_OWORD *)v45 - 1) = *((_OWORD *)v44 - 1);
      *((_OWORD *)v44 - 1) = v49;
      v50 = *v45;
      *v45 = *v44;
      *v44 = v50;
      v45 += 9;
      v44 -= 9;
      --v43;
    }
    while ( v43 );
  }
  result = v65;
  *(_QWORD *)(a1 + 16) = v65;
  *(_OWORD *)a1 = v64;
  *(_BYTE *)(a1 + 24) = v10;
  return result;
}
