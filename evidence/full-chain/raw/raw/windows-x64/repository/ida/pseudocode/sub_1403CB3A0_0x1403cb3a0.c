// module: codexmate_lib/core/repository
// addr: 0x1403cb3a0
// name: sub_1403CB3A0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_1403CB3A0(_OWORD *a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  unsigned __int8 *v6; // rbx
  __int64 v7; // rax
  char *v8; // rcx
  unsigned int v9; // r14d
  int v10; // edi
  int v11; // r10d
  int v12; // r14d
  unsigned __int8 v13; // r10
  unsigned __int64 v14; // r10
  __int64 v16; // r12
  char *v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r15
  char *v20; // rax
  __int64 v21; // rsi
  int v22; // ecx
  int v23; // edx
  int v24; // r9d
  int v25; // ecx
  unsigned int v26; // ecx
  int v27; // eax
  __int64 v28; // r14
  __int64 v29; // r12
  __int64 v30; // r15
  char *v31; // rdi
  int v32; // ebx
  int v33; // r14d
  __int64 v34; // r12
  __int64 v35; // r15
  __int128 v36; // xmm0
  int v37; // ebx
  int v38; // r14d
  __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // rdx
  unsigned __int8 *v42; // r13
  unsigned __int8 *v43; // r12
  char *v44; // rax
  int v45; // ecx
  int v46; // r8d
  int v47; // r10d
  int v48; // ecx
  unsigned __int8 v49; // r9
  int v50; // ebx
  int v51; // r14d
  __int128 v52; // xmm0
  __int128 v53; // xmm0
  __int128 v54; // xmm0
  __int64 v55; // [rsp+28h] [rbp-58h] BYREF
  __int128 v56; // [rsp+30h] [rbp-50h] BYREF
  __int128 v57; // [rsp+40h] [rbp-40h]
  __int128 v58; // [rsp+50h] [rbp-30h]
  __int128 v59; // [rsp+60h] [rbp-20h]
  __int128 v60; // [rsp+70h] [rbp-10h]
  __int128 v61; // [rsp+80h] [rbp+0h]
  _BYTE v62[24]; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v63; // [rsp+D8h] [rbp+58h]
  __int128 v64; // [rsp+E8h] [rbp+68h]
  __int128 v65; // [rsp+F8h] [rbp+78h]
  __int128 v66; // [rsp+108h] [rbp+88h]
  __int128 v67; // [rsp+118h] [rbp+98h]
  _OWORD v68[4]; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v69; // [rsp+1B0h] [rbp+130h]
  __int64 v70; // [rsp+1C0h] [rbp+140h]
  __int128 v71; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v72; // [rsp+1E0h] [rbp+160h]
  __int128 v73; // [rsp+1F0h] [rbp+170h]
  __int128 v74; // [rsp+200h] [rbp+180h]
  __int128 v75; // [rsp+210h] [rbp+190h]
  __int64 v76; // [rsp+220h] [rbp+1A0h]
  __int64 v77; // [rsp+280h] [rbp+200h] BYREF
  char *v78; // [rsp+288h] [rbp+208h]
  __int64 v79; // [rsp+290h] [rbp+210h]
  _OWORD *v80; // [rsp+298h] [rbp+218h]
  __int128 v81; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v82; // [rsp+2B0h] [rbp+230h]
  __int64 v83; // [rsp+2C0h] [rbp+240h]
  __int64 v84; // [rsp+2C8h] [rbp+248h]
  char *v85; // [rsp+2D0h] [rbp+250h]
  char v86; // [rsp+2DFh] [rbp+25Fh]
  __int64 v87; // [rsp+2E0h] [rbp+260h]

  v87 = -2;
  if ( a5 > 0xB4 )
  {
LABEL_18:
    hashed_account_snapshot_path((_DWORD)a1, a2, a3, (_DWORD)a4, a5);
    return a1;
  }
  v6 = (unsigned __int8 *)&a4[a5];
  v7 = 0x400000034002101LL;
  v8 = a4;
  while ( v8 != (char *)v6 )
  {
    v9 = (unsigned __int8)*v8;
    if ( *v8 < 0 )
    {
      v10 = v9 & 0x1F;
      v11 = v8[1] & 0x3F;
      if ( (unsigned __int8)v9 <= 0xDFu )
      {
        v8 += 2;
        v9 = v11 | (v10 << 6);
        if ( v9 < 0x20 )
          goto LABEL_18;
      }
      else
      {
        v12 = (v11 << 6) | v8[2] & 0x3F;
        if ( (unsigned __int8)*v8 < 0xF0u )
        {
          v8 += 3;
          v9 = (v10 << 12) | v12;
          if ( v9 < 0x20 )
            goto LABEL_18;
        }
        else
        {
          v13 = v8[3];
          v8 += 4;
          v9 = ((v10 & 7) << 18) | (v12 << 6) | v13 & 0x3F;
          if ( v9 < 0x20 )
            goto LABEL_18;
        }
      }
    }
    else
    {
      ++v8;
      if ( v9 < 0x20 )
        goto LABEL_18;
    }
    if ( v9 - 127 < 0x21 )
      goto LABEL_18;
    v14 = v9 - 34;
    if ( (unsigned int)v14 <= 0x3A )
    {
      if ( _bittest64(&v7, v14) )
        goto LABEL_18;
    }
    if ( v9 == 124 )
      goto LABEL_18;
  }
  v84 = a2;
  v83 = a3;
  v80 = a1;
  *(_QWORD *)&v71 = 0;
  *((_QWORD *)&v71 + 1) = 1;
  v16 = 0;
  v85 = a4;
  v17 = a4;
  v18 = 0;
  v19 = 0;
LABEL_21:
  *(_QWORD *)&v72 = v16;
  while ( v17 != (char *)v6 )
  {
    v20 = v17;
    v21 = v19;
    v22 = (unsigned __int8)*v17;
    if ( *v17 < 0 )
    {
      v23 = v22 & 0x1F;
      v24 = v17[1] & 0x3F;
      if ( (unsigned __int8)v22 <= 0xDFu )
      {
        v17 += 2;
        v22 = v24 | (v23 << 6);
      }
      else
      {
        v25 = (v24 << 6) | v17[2] & 0x3F;
        if ( (unsigned __int8)*v17 < 0xF0u )
        {
          v17 += 3;
          v22 = (v23 << 12) | v25;
        }
        else
        {
          v17 += 4;
          v22 = ((v23 & 7) << 18) | (v25 << 6) | v20[3] & 0x3F;
        }
      }
    }
    else
    {
      ++v17;
    }
    v19 += v17 - v20;
    v26 = v22 - 47;
    if ( v26 <= 0x11 )
    {
      v27 = 133121;
      if ( _bittest(&v27, v26) )
      {
        v28 = v21 - v18;
        if ( v21 - v18 > (unsigned __int64)(v71 - v16) )
        {
          sub_141688D30((unsigned int)&v71, v16, v21 - v18, 1, 1);
          v16 = v72;
          if ( v21 != v18 )
LABEL_34:
            sub_141684120(v16 + *((_QWORD *)&v71 + 1), &v85[v18], v28);
        }
        else if ( v21 != v18 )
        {
          goto LABEL_34;
        }
        v29 = v28 + v16;
        *(_QWORD *)&v72 = v29;
        if ( (_QWORD)v71 == v29 )
        {
          sub_141688D30((unsigned int)&v71, v29, 1, 1, 1);
          v29 = v72;
        }
        *(_BYTE *)(*((_QWORD *)&v71 + 1) + v29) = 95;
        v16 = v29 + 1;
        v18 = v19;
        goto LABEL_21;
      }
    }
  }
  v30 = a5 - v18;
  a1 = v80;
  v31 = v85;
  if ( a5 - v18 <= (__int64)v71 - v16 )
  {
    if ( a5 == v18 )
      goto LABEL_43;
    goto LABEL_42;
  }
  sub_141688D30((unsigned int)&v71, v16, a5 - v18, 1, 1);
  v16 = v72;
  a1 = v80;
  v31 = v85;
  if ( a5 != v18 )
LABEL_42:
    sub_141684120(v16 + *((_QWORD *)&v71 + 1), &v31[v18], v30);
LABEL_43:
  *(_OWORD *)v62 = v71;
  *(_QWORD *)&v62[16] = v30 + v16;
  *(_QWORD *)&v71 = v62;
  *((_QWORD *)&v71 + 1) = sub_1400015F0;
  sub_14149C0F0(&v77, &unk_141751003, &v71);
  v32 = v83;
  v33 = v84;
  if ( *(_QWORD *)v62 )
    sub_140001660(*(_QWORD *)&v62[8], *(_QWORD *)v62, 1);
  v85 = v78;
  sub_141473FA0((unsigned int)&v81, v33, v32, (_DWORD)v78, v79);
  if ( v77 )
    sub_140001660(v85, v77, 1);
  v34 = v82;
  v86 = 1;
  v85 = *((char **)&v81 + 1);
  sub_141486270(&v71, *((_QWORD *)&v81 + 1), v82);
  if ( (_DWORD)v71 == 2 )
  {
    v35 = *((_QWORD *)&v71 + 1);
    *((_QWORD *)&v68[0] + 1) = *((_QWORD *)&v71 + 1);
    *(_QWORD *)&v68[0] = 2;
    if ( (unsigned __int8)sub_1403887F0(*((_QWORD *)&v71 + 1)) )
    {
LABEL_49:
      *(_QWORD *)&v71 = v35;
      v36 = v81;
      a1[1] = v82;
      *a1 = v36;
      v86 = 0;
      sub_140018650(&v71);
      return a1;
    }
    goto LABEL_52;
  }
  v68[0] = v71;
  v70 = v76;
  v69 = v75;
  v68[3] = v74;
  v68[2] = v73;
  v68[1] = v72;
  if ( (_QWORD)v71 == 2 )
  {
    v35 = *((_QWORD *)&v68[0] + 1);
    if ( (unsigned __int8)sub_1403887F0(*((_QWORD *)&v68[0] + 1)) )
      goto LABEL_49;
LABEL_52:
    v86 = 1;
    sub_140018650((char *)v68 + 8);
    v37 = v83;
    v38 = v84;
    v86 = 1;
    sub_1414A2990((unsigned int)&v71, (_DWORD)v31, a5, (unsigned int)asc_14174D41A, 2);
    v86 = 1;
    sub_140424780(v62, &v71);
    if ( *(_DWORD *)v62 == 1 )
    {
      v39 = *(_QWORD *)&v62[8];
      if ( *(_QWORD *)&v62[8] )
      {
        v40 = *(_QWORD *)&v62[16];
        v86 = 1;
        if ( !(unsigned __int8)sub_1404242F0(asc_14174D41A, 2, v31, *(_QWORD *)&v62[8]) )
        {
          v41 = a5 - v40;
          v42 = (unsigned __int8 *)&v31[v40];
          v43 = (unsigned __int8 *)&v31[v39];
          v44 = v31;
          while ( v44 != (char *)v43 )
          {
            v45 = (unsigned __int8)*v44;
            if ( *v44 >= 0 )
            {
              ++v44;
            }
            else
            {
              v46 = v45 & 0x1F;
              v47 = v44[1] & 0x3F;
              if ( (unsigned __int8)v45 <= 0xDFu )
              {
                v44 += 2;
                v45 = v47 | (v46 << 6);
              }
              else
              {
                v48 = (v47 << 6) | v44[2] & 0x3F;
                if ( (unsigned __int8)*v44 < 0xF0u )
                {
                  v44 += 3;
                  v45 = (v46 << 12) | v48;
                }
                else
                {
                  v49 = v44[3];
                  v44 += 4;
                  v45 = ((v46 & 7) << 18) | (v48 << 6) | v49 & 0x3F;
                }
              }
            }
            if ( (unsigned int)(v45 - 47) < 0xFFFFFFFE
              && (unsigned int)(v45 - 58) < 0xFFFFFFF6
              && (v45 & 0x1FFFDFu) - 91 < 0xFFFFFFE6 )
            {
              goto LABEL_77;
            }
          }
          v86 = 1;
          if ( (unsigned __int8)sub_14037BBD0(v42, v41) )
            goto LABEL_76;
        }
      }
    }
LABEL_77:
    v86 = 1;
    hashed_account_snapshot_path((_DWORD)a1, v38, v37, (_DWORD)v31, a5);
    goto LABEL_78;
  }
  if ( (BYTE12(v69) & 0x10) != 0 || (v70 & 0x20000000) != 0 && (WORD6(v69) & 0x400) != 0 )
  {
LABEL_76:
    v53 = v81;
    a1[1] = v82;
    *a1 = v53;
    return a1;
  }
  v86 = 1;
  sub_1403C9010(v62, v85, v34);
  if ( *(_QWORD *)v62 == -2 )
  {
    v61 = v67;
    v60 = v66;
    v59 = v65;
    v58 = v64;
    v57 = v63;
    v56 = *(_OWORD *)&v62[8];
    v55 = 2;
LABEL_71:
    v52 = v81;
    a1[1] = v82;
    *a1 = v52;
    v86 = 0;
    sub_14034ED40(&v56);
    return a1;
  }
  sub_141684120(&v71, v62, 176);
  sub_1403C9DD0(&v55, &v71, v85, v34);
  sub_14034E960(v62);
  v50 = v83;
  v51 = v84;
  if ( v55 == 2 )
    goto LABEL_71;
  if ( *((_QWORD *)&v57 + 1) == a5 && !(unsigned int)sub_1416847B0(v57, v31, a5) )
  {
    v54 = v81;
    a1[1] = v82;
    *a1 = v54;
    sub_14034E8D0(&v55);
    return a1;
  }
  hashed_account_snapshot_path((_DWORD)a1, v51, v50, (_DWORD)v31, a5);
  sub_14034E8D0(&v55);
LABEL_78:
  if ( (_QWORD)v81 )
    sub_140001660(v85, v81, 1);
  return a1;
}