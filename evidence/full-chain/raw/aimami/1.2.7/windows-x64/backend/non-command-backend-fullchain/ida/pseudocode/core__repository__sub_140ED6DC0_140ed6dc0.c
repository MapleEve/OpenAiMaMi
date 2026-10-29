// win 1.2.7 | module src/core/repository.rs | ea 0x140ed6dc0 | name sub_140ED6DC0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_140ED6DC0(_OWORD *a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
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
  unsigned __int64 v28; // r14
  __int64 v29; // r12
  unsigned __int64 v30; // r15
  _OWORD *v31; // rdi
  int v32; // ebx
  int v33; // r14d
  __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rsi
  unsigned __int64 v39; // rax
  __int64 (__fastcall *v40)(unsigned __int64); // rax
  __int128 v41; // xmm0
  __int64 v42; // r12
  __int64 v43; // r13
  __int64 v44; // rdx
  char *v45; // rax
  unsigned __int8 *v46; // r13
  unsigned __int8 *v47; // r12
  int v48; // ecx
  int v49; // r8d
  int v50; // r10d
  int v51; // ecx
  unsigned __int8 v52; // r9
  int v53; // esi
  int v54; // ebx
  __int128 v55; // xmm0
  __int128 v56; // xmm0
  __int128 v57; // xmm0
  __int64 v58; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v59[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v60; // [rsp+58h] [rbp-28h]
  __int128 v61; // [rsp+68h] [rbp-18h]
  __int128 v62; // [rsp+78h] [rbp-8h]
  __int128 v63; // [rsp+88h] [rbp+8h]
  _BYTE v64[24]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v65; // [rsp+F8h] [rbp+78h]
  __int128 v66; // [rsp+108h] [rbp+88h]
  __int128 v67; // [rsp+118h] [rbp+98h]
  __int128 v68; // [rsp+128h] [rbp+A8h]
  __int128 v69; // [rsp+138h] [rbp+B8h]
  __m128i v70; // [rsp+190h] [rbp+110h] BYREF
  __int64 v71; // [rsp+1A0h] [rbp+120h]
  int v72; // [rsp+1DCh] [rbp+15Ch]
  int v73; // [rsp+1E0h] [rbp+160h]
  __int64 v74; // [rsp+240h] [rbp+1C0h] BYREF
  _OWORD *v75; // [rsp+248h] [rbp+1C8h]
  __int64 v76; // [rsp+250h] [rbp+1D0h]
  __int64 v77; // [rsp+258h] [rbp+1D8h]
  __int64 v78; // [rsp+260h] [rbp+1E0h]
  __int64 v79; // [rsp+268h] [rbp+1E8h]
  __int128 v80; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v81; // [rsp+280h] [rbp+200h]
  unsigned __int64 v82; // [rsp+290h] [rbp+210h]
  char *v83; // [rsp+298h] [rbp+218h]
  _OWORD *v84; // [rsp+2A0h] [rbp+220h]
  char v85; // [rsp+2ADh] [rbp+22Dh]
  char v86; // [rsp+2AEh] [rbp+22Eh]
  char v87; // [rsp+2AFh] [rbp+22Fh]
  __int64 v88; // [rsp+2B0h] [rbp+230h]

  v88 = -2;
  if ( a5 > 0xB4 )
  {
LABEL_18:
    sub_140ED8560((_DWORD)a1, a2, a3, (_DWORD)a4, a5);
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
  v78 = a2;
  v77 = a3;
  v84 = a1;
  v70.m128i_i64[0] = 0;
  v70.m128i_i64[1] = 1;
  v16 = 0;
  v83 = a4;
  v17 = a4;
  v18 = 0;
  v19 = 0;
LABEL_20:
  v71 = v16;
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
        if ( v21 - v18 > (unsigned __int64)(v70.m128i_i64[0] - v16) )
        {
          sub_14190D590((unsigned int)&v70, v16, v21 - v18, 1, 1);
          v16 = v71;
          if ( v21 != v18 )
LABEL_33:
            sub_1418F44E0((__m128i *)(v16 + v70.m128i_i64[1]), (const __m128i *)&v83[v18], v28);
        }
        else if ( v21 != v18 )
        {
          goto LABEL_33;
        }
        v29 = v28 + v16;
        v71 = v29;
        if ( v70.m128i_i64[0] == v29 )
        {
          sub_14190D590((unsigned int)&v70, v29, 1, 1, 1);
          v29 = v71;
        }
        *(_BYTE *)(v70.m128i_i64[1] + v29) = 95;
        v16 = v29 + 1;
        v18 = v19;
        goto LABEL_20;
      }
    }
  }
  v30 = a5 - v18;
  v31 = v84;
  if ( a5 - v18 <= v70.m128i_i64[0] - v16 )
  {
    if ( a5 == v18 )
      goto LABEL_42;
    goto LABEL_41;
  }
  sub_14190D590((unsigned int)&v70, v16, a5 - v18, 1, 1);
  v16 = v71;
  v31 = v84;
  if ( a5 != v18 )
LABEL_41:
    sub_1418F44E0((__m128i *)(v16 + v70.m128i_i64[1]), (const __m128i *)&v83[v18], v30);
LABEL_42:
  *(__m128i *)v64 = v70;
  *(_QWORD *)&v64[16] = v30 + v16;
  v70.m128i_i64[0] = (__int64)v64;
  v70.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v74, &unk_141A5A06E, &v70);
  v32 = v77;
  v33 = v78;
  if ( *(_QWORD *)v64 )
    sub_140001660(*(_QWORD *)&v64[8], *(_QWORD *)v64, 1);
  v84 = v75;
  sub_1416828D0((unsigned int)&v80, v33, v32, (_DWORD)v75, v76);
  if ( v74 )
    sub_140001660(v84, v74, 1);
  v34 = v81;
  v87 = 1;
  v84 = *((_OWORD **)&v80 + 1);
  sub_141695550(&v70, *((_QWORD *)&v80 + 1), v81);
  v37 = v70.m128i_i64[1];
  if ( v70.m128i_i64[0] == 2 )
  {
    v79 = 2;
    v38 = v70.m128i_i8[8] & 3;
    switch ( v70.m128i_i8[8] & 3 )
    {
      case 0:
        LOBYTE(v39) = *(_BYTE *)(v70.m128i_i64[1] + 16);
        break;
      case 1:
        LOBYTE(v39) = *(_BYTE *)(v70.m128i_i64[1] + 31);
        break;
      case 2:
        v82 = v70.m128i_u64[1];
        v86 = 1;
        v85 = 1;
        v40 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v36, v35) + 8);
        v86 = 1;
        v85 = 1;
        LOBYTE(v39) = v40(HIDWORD(v82));
        v37 = v82;
        break;
      case 3:
        v39 = HIDWORD(v70.m128i_i64[1]);
        break;
    }
    if ( (_BYTE)v39 )
    {
      v82 = v37;
      v41 = v80;
      v31[1] = v81;
      *v31 = v41;
      if ( (unsigned int)(v38 - 2) >= 2 && v38 )
      {
        v70.m128i_i64[1] = v82 - 1;
        v70.m128i_i8[0] = 3;
        v86 = 0;
        v85 = 0;
        sub_1416BCB00(&v70.m128i_u64[1]);
      }
      return v31;
    }
    if ( (unsigned int)(v38 - 2) >= 2 && v38 )
    {
      v70.m128i_i64[1] = v37 - 1;
      v70.m128i_i8[0] = 3;
      v87 = 1;
      sub_1416BCB00(&v70.m128i_u64[1]);
    }
    v87 = 1;
    sub_1416B2790((unsigned int)&v70, (_DWORD)v83, a5, (unsigned int)asc_141A5745D, 2);
    v87 = 1;
    sub_140F9D3E0(v64, &v70);
    if ( *(_DWORD *)v64 == 1 )
    {
      v42 = *(_QWORD *)&v64[8];
      if ( *(_QWORD *)&v64[8] )
      {
        v43 = *(_QWORD *)&v64[16];
        v87 = 1;
        if ( !(unsigned __int8)sub_140F9CFB0(asc_141A5745D, 2, v83, *(_QWORD *)&v64[8]) )
        {
          v44 = a5 - v43;
          v45 = v83;
          v46 = (unsigned __int8 *)&v83[v43];
          v47 = (unsigned __int8 *)&v83[v42];
          while ( v45 != (char *)v47 )
          {
            v48 = (unsigned __int8)*v45;
            if ( *v45 >= 0 )
            {
              ++v45;
            }
            else
            {
              v49 = v48 & 0x1F;
              v50 = v45[1] & 0x3F;
              if ( (unsigned __int8)v48 <= 0xDFu )
              {
                v45 += 2;
                v48 = v50 | (v49 << 6);
              }
              else
              {
                v51 = (v50 << 6) | v45[2] & 0x3F;
                if ( (unsigned __int8)*v45 < 0xF0u )
                {
                  v45 += 3;
                  v48 = (v49 << 12) | v51;
                }
                else
                {
                  v52 = v45[3];
                  v45 += 4;
                  v48 = ((v49 & 7) << 18) | (v51 << 6) | v52 & 0x3F;
                }
              }
            }
            if ( (unsigned int)(v48 - 47) < 0xFFFFFFFE
              && (unsigned int)(v48 - 58) < 0xFFFFFFF6
              && (v48 & 0x1FFFDFu) - 91 < 0xFFFFFFE6 )
            {
              goto LABEL_84;
            }
          }
          v87 = 1;
          if ( (unsigned __int8)sub_140EBBC80(v46, v44) )
            goto LABEL_83;
        }
      }
    }
LABEL_84:
    v87 = 1;
    sub_140ED8560((_DWORD)v31, v33, v32, (_DWORD)v83, a5);
LABEL_85:
    if ( (_QWORD)v80 )
      sub_140001660(v84, v80, 1);
    return v31;
  }
  if ( (v72 & 0x10) != 0 || (v73 & 0x20000000) != 0 && (v72 & 0x400) != 0 )
  {
LABEL_83:
    v56 = v80;
    v31[1] = v81;
    *v31 = v56;
    return v31;
  }
  v82 = v70.m128i_u64[1];
  v79 = v70.m128i_i64[0];
  v86 = 1;
  v85 = 1;
  sub_140ED4870(v64, v84, v34);
  if ( *(_QWORD *)v64 == -2 )
  {
    v63 = v69;
    v62 = v68;
    v61 = v67;
    v60 = v66;
    v59[1] = v65;
    v59[0] = *(_OWORD *)&v64[8];
    v58 = 2;
  }
  else
  {
    sub_1418F44E0(&v70, (const __m128i *)v64, 0xB0u);
    sub_140ED5630(&v58, &v70, v84, v34);
    sub_1400342E0((__int64 *)v64);
    v53 = v77;
    v54 = v78;
    if ( v58 != 2 )
    {
      if ( (_QWORD)v61 == a5 && !(unsigned int)sub_1418F4B70(*((_QWORD *)&v60 + 1), v83) )
      {
        v57 = v80;
        v31[1] = v81;
        *v31 = v57;
        sub_140034220(&v58);
        return v31;
      }
      sub_140ED8560((_DWORD)v31, v54, v53, (_DWORD)v83, a5);
      sub_140034220(&v58);
      goto LABEL_85;
    }
  }
  v55 = v80;
  v31[1] = v81;
  *v31 = v55;
  v86 = 1;
  v85 = 0;
  sub_140E97700(v59);
  return v31;
}
