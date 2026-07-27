// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
unsigned __int64 __fastcall sub_14040F7E0(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  char v11; // si
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  char *v14; // rdx
  unsigned __int64 v15; // rcx
  char v16; // dl
  char v17; // r9
  int v18; // r9d
  unsigned int v19; // edx
  unsigned __int64 result; // rax
  __int64 v21; // r14
  unsigned __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  _BYTE *v30; // rax
  __int64 v31; // rdx
  _BYTE *v32; // r12
  __int64 v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rsi
  unsigned __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  int v43; // edx
  bool v44; // cf
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  int v47; // eax
  unsigned __int64 v48; // r12
  __m128i v49; // xmm0
  __m128i v50; // xmm7
  unsigned __int64 v51; // r12
  __m128i v53; // xmm8
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // [rsp+30h] [rbp-50h]
  unsigned __int64 v58; // [rsp+40h] [rbp-40h]
  unsigned __int64 v59; // [rsp+48h] [rbp-38h]
  __int64 v60; // [rsp+50h] [rbp-30h]
  _QWORD v61[5]; // [rsp+58h] [rbp-28h] BYREF
  char v62; // [rsp+80h] [rbp+0h]
  __int16 v63; // [rsp+88h] [rbp+8h]
  __int64 v64; // [rsp+90h] [rbp+10h]
  __int64 v65; // [rsp+98h] [rbp+18h]
  __int64 i; // [rsp+A0h] [rbp+20h]
  __int64 v67; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v68; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v69; // [rsp+B8h] [rbp+38h]
  __int64 v70; // [rsp+C0h] [rbp+40h]
  __int64 v71; // [rsp+C8h] [rbp+48h]
  __int64 v72; // [rsp+D0h] [rbp+50h]
  __int128 v73; // [rsp+D8h] [rbp+58h] BYREF
  unsigned __int64 v74; // [rsp+E8h] [rbp+68h]
  char v75; // [rsp+F7h] [rbp+77h]
  __int64 v76; // [rsp+F8h] [rbp+78h]

  v76 = -2; /*0x14040f814*/
  if ( a3 < 0 ) /*0x14040f822*/
  {
    v6 = 0; /*0x14040f824*/
    goto LABEL_3; /*0x14040f824*/
  }
  v75 = a4; /*0x14040f833*/
  v64 = a1; /*0x14040f837*/
  if ( a3 ) /*0x14040f83b*/
  {
    v7 = a2; /*0x14040f83d*/
    nullsub_1(a1); /*0x14040f840*/
    v6 = 1; /*0x14040f845*/
    v8 = sub_140001650(a3, 1); /*0x14040f852*/
    if ( !v8 ) /*0x14040f85a*/
LABEL_3:
      sub_1416C2D4B(v6, a3); /*0x14040f826*/
    v9 = v8; /*0x14040f85c*/
    a2 = v7; /*0x14040f85f*/
  }
  else
  {
    v9 = 1; /*0x14040f864*/
  }
  *(_QWORD *)&v73 = a3; /*0x14040f871*/
  *((_QWORD *)&v73 + 1) = v9; /*0x14040f875*/
  v74 = 0; /*0x14040f879*/
  v59 = 0; /*0x14040f881*/
  v60 = a3; /*0x14040f889*/
  v61[0] = a2; /*0x14040f88d*/
  v61[1] = a3; /*0x14040f891*/
  v61[2] = 0; /*0x14040f895*/
  v61[3] = a3; /*0x14040f89d*/
  v61[4] = 0xA0000000ALL; /*0x14040f8ab*/
  v62 = 1; /*0x14040f8af*/
  v63 = 0; /*0x14040f8b3*/
  v57 = a5[3]; /*0x14040f8bd*/
  v70 = *a5; /*0x14040f8cc*/
  v65 = a5[1]; /*0x14040f8d4*/
  v72 = v9; /*0x14040f8dc*/
  v10 = 0; /*0x14040f8e0*/
  v11 = 0; /*0x14040f8e4*/
  do /*0x14040fe74*/
  {
    while ( 1 ) /*0x14040fa8f*/
    {
      v23 = v61[0]; /*0x14040fa8f*/
      sub_140421EE0(&v67, v61); /*0x14040fa9b*/
      if ( (_DWORD)v67 == 1 ) /*0x14040faa5*/
      {
        v24 = v59; /*0x14040faab*/
        v59 = v69; /*0x14040faaf*/
        v25 = v69 - v24; /*0x14040fab3*/
        v26 = v24 + v23; /*0x14040fab6*/
        v27 = v69 - v24; /*0x14040fab9*/
        v44 = v27 == 0; /*0x14040fabc*/
        v28 = v27 - 1; /*0x14040fabc*/
        if ( v44 ) /*0x14040fac0*/
          goto LABEL_51; /*0x14040fac0*/
LABEL_42:
        if ( *(_BYTE *)(v26 + v28) == 10 ) /*0x14040fb08*/
        {
          v25 -= 2LL; /*0x14040fb0a*/
          if ( v28 ) /*0x14040fb11*/
          {
            v29 = v26; /*0x14040fb18*/
            if ( *(_BYTE *)(v26 + v25) != 13 ) /*0x14040fb20*/
              v29 = 0; /*0x14040fb20*/
          }
          else
          {
            v29 = 0; /*0x14040fb26*/
          }
          if ( v29 ) /*0x14040fb2b*/
            v26 = v29; /*0x14040fb2f*/
          else
            v25 = v28; /*0x14040fb2b*/
        }
        goto LABEL_51; /*0x14040fb2f*/
      }
      if ( HIBYTE(v63) ) /*0x14040fad4*/
        goto LABEL_9; /*0x14040fad4*/
      HIBYTE(v63) = 1; /*0x14040fada*/
      v25 = v60 - v59; /*0x14040fae6*/
      if ( ((unsigned __int8)v63 | (v60 != v59)) != 1 ) /*0x14040faf1*/
        goto LABEL_9; /*0x14040faf1*/
      v26 = v61[0] + v59; /*0x14040faf7*/
      v28 = v25 - 1; /*0x14040fafe*/
      if ( v25 ) /*0x14040fb02*/
        goto LABEL_42; /*0x14040fb02*/
LABEL_51:
      v30 = (_BYTE *)sub_14033BC10(v26, v25); /*0x14040fb39*/
      v32 = v30; /*0x14040fb3e*/
      v33 = v31; /*0x14040fb41*/
      if ( !v31 || *v30 != 91 || v30[v31 - 1] != 93 ) /*0x14040fb56*/
        break; /*0x14040fb56*/
      if ( v31 == 1 || (char)v30[1] <= -65 ) /*0x14040fb68*/
        sub_1416C2F60((_DWORD)v30, v31, 1, v31 - 1, (__int64)&off_141782B88); /*0x14040ff6a*/
      v21 = v73; /*0x14040fb6e*/
      if ( v25 > (unsigned __int64)v73 - v10 ) /*0x14040fb7b*/
      {
        sub_141688D30((unsigned int)&v73, v10, v25, 1, 1); /*0x14040fa38*/
        v10 = v74; /*0x14040fa3e*/
        v9 = *((_QWORD *)&v73 + 1); /*0x14040fa46*/
        v72 = *((_QWORD *)&v73 + 1); /*0x14040fa4a*/
        v21 = v73; /*0x14040fa4a*/
LABEL_32:
        sub_141684120(v10 + v72, v26, v25); /*0x14040fa4e*/
        goto LABEL_33; /*0x14040fa5b*/
      }
      if ( v25 ) /*0x14040fb84*/
        goto LABEL_32; /*0x14040fb84*/
LABEL_33:
      v22 = v25 + v10; /*0x14040fa60*/
      v74 = v22; /*0x14040fa63*/
      if ( v21 == v22 ) /*0x14040fa6a*/
      {
        sub_141688D30((unsigned int)&v73, v21, 1, 1, 1); /*0x14040ff41*/
LABEL_65:
        v9 = *((_QWORD *)&v73 + 1); /*0x14040fbd0*/
      }
      *(_BYTE *)(v9 + v22) = 10; /*0x14040fa70*/
      v10 = v22 + 1; /*0x14040fa75*/
      v74 = v10; /*0x14040fa78*/
      v11 = 1; /*0x14040fa7c*/
LABEL_35:
      v72 = v9; /*0x14040fa7f*/
      if ( (v63 & 0x100) != 0 ) /*0x14040fa89*/
        goto LABEL_9; /*0x14040fa89*/
    }
    if ( (v11 & 1) != 0 ) /*0x14040fb94*/
    {
      v34 = v73; /*0x14040fb96*/
      if ( v25 > (unsigned __int64)v73 - v10 ) /*0x14040fba3*/
      {
        sub_141688D30((unsigned int)&v73, v10, v25, 1, 1); /*0x14040fe98*/
        v34 = v73; /*0x14040fe9e*/
        v10 = v74; /*0x14040fea2*/
      }
      else if ( !v25 ) /*0x14040fbac*/
      {
        goto LABEL_63; /*0x14040fbac*/
      }
      sub_141684120(v10 + *((_QWORD *)&v73 + 1), v26, v25); /*0x14040fbbb*/
LABEL_63:
      v22 = v25 + v10; /*0x14040fbc0*/
      v74 = v22; /*0x14040fbc3*/
      if ( v34 == v22 ) /*0x14040fbca*/
        sub_141688D30((unsigned int)&v73, v34, 1, 1, 1); /*0x14040fec7*/
      goto LABEL_65; /*0x14040fec7*/
    }
    sub_14040C750(&v67, v30, v31); /*0x14040fbea*/
    v35 = v67; /*0x14040fbf0*/
    if ( v67 == -1 || v69 != 5 ) /*0x14040fbff*/
    {
      if ( v67 > 0 ) /*0x14040fc33*/
      {
        v36 = v68; /*0x14040fc35*/
        goto LABEL_73; /*0x14040fc35*/
      }
LABEL_74:
      v37 = v73; /*0x14040fc44*/
      if ( v25 > (unsigned __int64)v73 - v10 ) /*0x14040fc51*/
      {
        sub_141688D30((unsigned int)&v73, v10, v25, 1, 1); /*0x14040feeb*/
        v37 = v73; /*0x14040fef1*/
        v10 = v74; /*0x14040fef5*/
LABEL_76:
        sub_141684120(v10 + *((_QWORD *)&v73 + 1), v26, v25); /*0x14040fc5c*/
      }
      else if ( v25 ) /*0x14040fc5a*/
      {
        goto LABEL_76; /*0x14040fc5a*/
      }
      v38 = v25 + v10; /*0x14040fc6e*/
      v74 = v38; /*0x14040fc71*/
      if ( v37 == v38 ) /*0x14040fc78*/
        sub_141688D30((unsigned int)&v73, v37, 1, 1, 1); /*0x14040ff1a*/
      v9 = *((_QWORD *)&v73 + 1); /*0x14040fc7e*/
      *(_BYTE *)(*((_QWORD *)&v73 + 1) + v38) = 10; /*0x14040fc82*/
      v10 = v38 + 1; /*0x14040fc87*/
      v74 = v10; /*0x14040fc8a*/
      v11 = 0; /*0x14040fc8e*/
      goto LABEL_35; /*0x14040fc90*/
    }
    v36 = v68; /*0x14040fc01*/
    if ( *(_DWORD *)v68 ^ 0x65646F6D | *(unsigned __int8 *)(v68 + 4) ^ 0x6C ) /*0x14040fc19*/
    {
      if ( v67 ) /*0x14040fc21*/
        goto LABEL_73; /*0x14040fc21*/
      goto LABEL_74; /*0x14040fc21*/
    }
    if ( v67 ) /*0x14040fc98*/
      sub_140001660(v68, v67, 1); /*0x14040fca0*/
    sub_14040C9F0(&v67, v32, v33); /*0x14040fcb0*/
    v39 = v67; /*0x14040fcb6*/
    if ( v67 == -1 ) /*0x14040fcbe*/
      goto LABEL_74; /*0x14040fcbe*/
    v40 = v68; /*0x14040fcc0*/
    if ( v69 == 12 ) /*0x14040fccc*/
    {
      v41 = _byteswap_uint64(*(_QWORD *)v68); /*0x14040fcd1*/
      v42 = 0x61696D616D695F72LL; /*0x14040fcde*/
      if ( v41 == 0x61696D616D695F72LL ) /*0x14040fce4*/
      {
        v41 = _byteswap_ulong(*(_DWORD *)(v68 + 8)); /*0x14040fcea*/
        if ( (_DWORD)v41 == 1701601657 ) /*0x14040fcf1*/
          goto LABEL_91; /*0x14040fcf1*/
        v42 = 1701601657; /*0x14040fcf3*/
      }
      v43 = 0; /*0x14040fcf8*/
      v44 = v41 < v42; /*0x14040fcfa*/
    }
    else
    {
      if ( v69 <= 0xC ) /*0x14040fcff*/
        goto LABEL_105; /*0x14040fcff*/
      v45 = _byteswap_uint64(*(_QWORD *)v68); /*0x14040fd08*/
      v46 = 0x61696D616D695F72LL; /*0x14040fd15*/
      if ( v45 == 0x61696D616D695F72LL ) /*0x14040fd1b*/
      {
        v45 = _byteswap_uint64(*(_QWORD *)(v68 + 5)); /*0x14040fd21*/
        v46 = 0x695F72656C61795FLL; /*0x14040fd2e*/
        if ( v45 == 0x695F72656C61795FLL ) /*0x14040fd34*/
        {
LABEL_91:
          v47 = 0; /*0x14040fd36*/
          if ( !v75 ) /*0x14040fd3c*/
            goto LABEL_104; /*0x14040fd3c*/
          goto LABEL_95; /*0x14040fd3c*/
        }
      }
      v43 = 0; /*0x14040fd43*/
      v44 = v46 < v45; /*0x14040fd45*/
    }
    LOBYTE(v43) = !v44; /*0x14040fd48*/
    v47 = 2 * v43 - 1; /*0x14040fd4b*/
    if ( !v75 ) /*0x14040fd56*/
      goto LABEL_104; /*0x14040fd56*/
LABEL_95:
    if ( v47 ) /*0x14040fd5e*/
    {
LABEL_104:
      if ( v47 ) /*0x14040fe3a*/
        goto LABEL_105; /*0x14040fe3a*/
      goto LABEL_107; /*0x14040fe3a*/
    }
    if ( v57 ) /*0x14040fd69*/
    {
      v71 = v68; /*0x14040fd73*/
      v58 = v69; /*0x14040fd7a*/
      v48 = sub_1403795A0(a5 + 4, v68, v69); /*0x14040fd83*/
      v49 = _mm_cvtsi32_si128(v48 >> 57); /*0x14040fd8a*/
      v50 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v49, v49), 0), 68); /*0x14040fd97*/
      for ( i = 0; ; i += 16 ) /*0x14040fd9c*/
      {
        v51 = v65 & v48; /*0x14040fda4*/
        HIDWORD(_RAX) = HIDWORD(v70); /*0x14040fda8*/
        v53 = _mm_loadu_si128((const __m128i *)(v70 + v51)); /*0x14040fdac*/
        _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v53, v50)); /*0x14040fdbb*/
        if ( _ESI ) /*0x14040fdc1*/
          break; /*0x14040fdc1*/
LABEL_102:
        v40 = v71; /*0x14040fe0e*/
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v53, (__m128i)-1LL)) ) /*0x14040fe13*/
          goto LABEL_107; /*0x14040fe1e*/
        v48 = i + v51 + 16; /*0x14040fe27*/
      }
      while ( 1 ) /*0x14040fdc3*/
      {
        __asm { tzcnt eax, esi } /*0x14040fdc3*/
        v55 = -3LL * (v65 & (v51 + _RAX)); /*0x14040fdd1*/
        if ( v58 == *(_QWORD *)(v70 + 8 * v55 - 8) ) /*0x14040fde6*/
        {
          v56 = sub_1416847B0(v71, *(_QWORD *)(v70 + 8 * v55 - 16), v58); /*0x14040fdf7*/
          v40 = v71; /*0x14040fdfc*/
          if ( !v56 ) /*0x14040fe02*/
            break; /*0x14040fe02*/
        }
        _RAX = (unsigned int)(_ESI - 1); /*0x14040fe04*/
        LOWORD(_RAX) = _ESI & (_ESI - 1); /*0x14040fe07*/
        _ESI = _RAX; /*0x14040fe0a*/
        if ( !(_WORD)_RAX ) /*0x14040fe0c*/
          goto LABEL_102; /*0x14040fe0c*/
      }
LABEL_105:
      if ( v39 ) /*0x14040fe3f*/
      {
        v36 = v40; /*0x14040fe4b*/
        v35 = v39; /*0x14040fe4e*/
LABEL_73:
        sub_140001660(v36, v35, 1); /*0x14040fc3f*/
      }
      goto LABEL_74; /*0x14040fc3f*/
    }
LABEL_107:
    if ( v39 ) /*0x14040fe59*/
      sub_140001660(v40, v39, 1); /*0x14040fe67*/
    v11 = 0; /*0x14040fe6c*/
  }
  while ( (v63 & 0x100) == 0 ); /*0x14040fe74*/
LABEL_9:
  if ( v10 < 2 ) /*0x14040f8f6*/
  {
    v12 = v64; /*0x14040f8f8*/
    if ( v10 ) /*0x14040f8ff*/
      goto LABEL_11; /*0x14040f8ff*/
    goto LABEL_28; /*0x14040f8ff*/
  }
  v12 = v64; /*0x14040f91c*/
  if ( *(_WORD *)(*((_QWORD *)&v73 + 1) + v10 - 2) != 2570 ) /*0x14040f920*/
  {
LABEL_27:
    v74 = v10; /*0x14040f9d2*/
    goto LABEL_28; /*0x14040f9d2*/
  }
  v13 = *((_QWORD *)&v73 + 1) + v10; /*0x14040f926*/
  v14 = (char *)(*((_QWORD *)&v73 + 1) + v10 - 2); /*0x14040f92e*/
  while ( 2 ) /*0x14040f940*/
  {
    v15 = -1; /*0x14040f940*/
    if ( *(char *)(v13 - 1) < 0 ) /*0x14040f94c*/
    {
      v16 = *v14; /*0x14040f94e*/
      if ( v16 > -65 ) /*0x14040f954*/
      {
        v19 = v16 & 0x1F; /*0x14040f977*/
        if ( v19 >= 2 ) /*0x14040f97d*/
          goto LABEL_23; /*0x14040f97d*/
      }
      else
      {
        v17 = *(_BYTE *)(v13 - 3); /*0x14040f956*/
        if ( v17 > -65 ) /*0x14040f95f*/
          v18 = v17 & 0xF; /*0x14040f981*/
        else
          v18 = ((*(_BYTE *)(v13 - 4) & 7) << 6) | v17 & 0x3F; /*0x14040f972*/
        v19 = (v18 << 6) | v16 & 0x3F; /*0x14040f98c*/
        if ( v19 >= 2 ) /*0x14040f992*/
        {
LABEL_23:
          v15 = -2; /*0x14040f994*/
          if ( v19 >= 0x20 ) /*0x14040f99e*/
            v15 = (v19 < 0x400) | 0xFFFFFFFFFFFFFFFCuLL; /*0x14040f9ab*/
        }
      }
    }
    v10 += v15; /*0x14040f9b0*/
    if ( v10 >= 2 ) /*0x14040f9b7*/
    {
      v13 = *((_QWORD *)&v73 + 1) + v10; /*0x14040f9b9*/
      v14 = (char *)(*((_QWORD *)&v73 + 1) + v10 - 2); /*0x14040f9c1*/
      if ( *(_WORD *)v14 != 2570 ) /*0x14040f9cc*/
        goto LABEL_27; /*0x14040f9cc*/
      continue; /*0x14040f9cc*/
    }
    break;
  }
  v74 = v10; /*0x14040fa10*/
  if ( !v10 ) /*0x14040fa17*/
    goto LABEL_28; /*0x14040fa17*/
LABEL_11:
  if ( **((_BYTE **)&v73 + 1) == 10 ) /*0x14040f908*/
  {
    v10 = 0; /*0x14040f90e*/
    goto LABEL_27; /*0x14040f910*/
  }
LABEL_28:
  result = v74; /*0x14040f9d6*/
  *(_QWORD *)(v12 + 16) = v74; /*0x14040f9da*/
  *(_OWORD *)v12 = v73; /*0x14040f9e2*/
  return result; /*0x14040f9e6*/
}