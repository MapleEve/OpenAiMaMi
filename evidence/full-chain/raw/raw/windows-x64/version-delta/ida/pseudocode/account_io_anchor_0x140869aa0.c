// win 1.2.3 delta | account_io_anchor @ 0x140869aa0 | changelog ①账号切换
// [FULL IDA decompiler 14239B]
// win 1.2.1 | module src/core/account_io.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140869AA0(__int128 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // rdi
  HANDLE *v22; // r14
  HANDLE *v23; // r14
  __int64 v24; // r13
  __int64 v25; // rdi
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdi
  HANDLE *v34; // rdi
  HANDLE *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // r13
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rdi
  _OWORD v42[6]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v43; // [rsp+90h] [rbp+10h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+20h]
  __m128i v45; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v46; // [rsp+B8h] [rbp+38h]
  __m128i v47; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v48; // [rsp+D0h] [rbp+50h]
  __m128i v49; // [rsp+D8h] [rbp+58h] BYREF
  __m128i v50; // [rsp+E8h] [rbp+68h] BYREF
  __m128i v51; // [rsp+F8h] [rbp+78h]
  __int128 v52; // [rsp+108h] [rbp+88h]
  __int128 v53; // [rsp+118h] [rbp+98h]
  __int128 v54; // [rsp+128h] [rbp+A8h]
  _QWORD v55[6]; // [rsp+138h] [rbp+B8h] BYREF
  __m128i si128; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v57; // [rsp+178h] [rbp+F8h]
  __m128i v58; // [rsp+180h] [rbp+100h] BYREF
  __int128 v59; // [rsp+190h] [rbp+110h]
  __int128 v60; // [rsp+1A0h] [rbp+120h]
  __m128i v61; // [rsp+1B0h] [rbp+130h]
  __m256i v62; // [rsp+230h] [rbp+1B0h] BYREF
  __m128i v63; // [rsp+250h] [rbp+1D0h]
  __int128 v64; // [rsp+260h] [rbp+1E0h]
  __int128 v65; // [rsp+270h] [rbp+1F0h]
  __m128i v66; // [rsp+280h] [rbp+200h] BYREF
  __int128 v67; // [rsp+290h] [rbp+210h] BYREF
  _BYTE v68[72]; // [rsp+2A0h] [rbp+220h] BYREF
  __m128i v69; // [rsp+2E8h] [rbp+268h]
  __int64 v70; // [rsp+300h] [rbp+280h]
  __int64 v71; // [rsp+308h] [rbp+288h]
  __int64 v72; // [rsp+328h] [rbp+2A8h]
  _BYTE v73[96]; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v74; // [rsp+3E0h] [rbp+360h]
  __int64 v75; // [rsp+3E8h] [rbp+368h]
  __int64 v76; // [rsp+3F0h] [rbp+370h]
  __int64 v77; // [rsp+3F8h] [rbp+378h]
  __int64 v78; // [rsp+400h] [rbp+380h]
  __int64 v79; // [rsp+408h] [rbp+388h]
  HANDLE v80; // [rsp+410h] [rbp+390h] BYREF
  HANDLE hObject; // [rsp+418h] [rbp+398h] BYREF
  HANDLE *v82; // [rsp+420h] [rbp+3A0h]
  HANDLE *v83; // [rsp+428h] [rbp+3A8h]
  __int64 v84; // [rsp+430h] [rbp+3B0h]
  char v85; // [rsp+43Fh] [rbp+3BFh]
  __int64 v86; // [rsp+440h] [rbp+3C0h]

  v86 = -2;
  result = a7;
  si128 = _mm_load_si128((const __m128i *)&a5);
  if ( !a4 )
  {
    a1[5] = *(_OWORD *)(a7 + 80);
    a1[4] = *(_OWORD *)(result + 64);
    v15 = (__int128)_mm_loadu_si128((const __m128i *)result);
    v16 = *(_OWORD *)(result + 16);
    v17 = *(_OWORD *)(result + 32);
    a1[3] = *(_OWORD *)(result + 48);
    a1[2] = v17;
    a1[1] = v16;
    *a1 = v15;
    return result;
  }
  v9 = a3;
  v78 = a4;
  v11 = a3 + 104 * a4;
  sub_140352B40(v73, a3, v11);
  v12 = *(_QWORD **)&v73[8];
  v13 = *(_QWORD *)v73;
  v14 = *(_QWORD *)&v73[16];
  if ( *(_QWORD *)v73 != -1 )
  {
    v61 = *(__m128i *)&v73[80];
    v60 = *(_OWORD *)&v73[64];
    v59 = *(_OWORD *)&v73[48];
    v58 = _mm_loadu_si128((const __m128i *)&v73[32]);
    v11 = *(_QWORD *)&v73[24];
LABEL_20:
    v9 = v14;
    a2 = v12;
LABEL_21:
    *(_QWORD *)v73 = v13;
    *(_QWORD *)&v73[8] = a2;
    *(_QWORD *)&v73[16] = v9;
    *(_QWORD *)&v73[24] = v11;
    *(__m128i *)&v73[32] = _mm_load_si128(&v58);
    *(_OWORD *)&v73[48] = v59;
    *(_OWORD *)&v73[64] = v60;
    *(__m128i *)&v73[80] = v61;
    *(_QWORD *)&v67 = &si128;
    *((_QWORD *)&v67 + 1) = sub_14041F680;
    *(_QWORD *)v68 = a7;
    *(_QWORD *)&v68[8] = sub_140B036A0;
    *(_QWORD *)&v68[16] = v73;
    *(_QWORD *)&v68[24] = sub_140B036A0;
    sub_14149C0F0(&v45, &unk_141798717, &v67);
    *((_QWORD *)a1 + 3) = v46;
    *(__m128i *)((char *)a1 + 8) = _mm_loadu_si128(&v45);
    *(_QWORD *)a1 = 10;
    sub_1407DA310(v73);
    return sub_1407DA310(a7);
  }
  v77 = *(_QWORD *)&v73[8];
  v55[3] = *(_QWORD *)&v73[8];
  v82 = *(HANDLE **)&v73[16];
  v55[4] = *(_QWORD *)&v73[16];
  v76 = *(_QWORD *)&v73[24];
  v55[5] = *(_QWORD *)&v73[24];
  v18 = a2[33];
  v19 = a2[34];
  sub_1403871C0(v73, v18, v19);
  v13 = *(_QWORD *)v73;
  if ( *(_QWORD *)v73 != -1 )
  {
    v78 = *(_QWORD *)&v73[8];
    v20 = *(_QWORD *)&v73[16];
    v79 = *(_QWORD *)&v73[24];
    v58 = *(__m128i *)&v73[32];
    v59 = *(_OWORD *)&v73[48];
    v60 = *(_OWORD *)&v73[64];
    v61 = _mm_loadu_si128((const __m128i *)&v73[80]);
    if ( !v76 )
    {
LABEL_17:
      if ( v77 )
        sub_140001660(v82, 8 * v77, 8);
      v14 = v20;
      v11 = v79;
      v12 = (_QWORD *)v78;
      goto LABEL_20;
    }
LABEL_13:
    v84 = 0;
    v22 = v82;
    do
    {
      v83 = v22;
      *(_QWORD *)v73 = sub_1412018B0(v22);
      if ( *(_QWORD *)v73 )
        sub_140018650(v73);
      v23 = v83;
      CloseHandle(*v83);
      v22 = v23 + 1;
      --v84;
    }
    while ( v84 + v76 );
    goto LABEL_17;
  }
  hObject = *(HANDLE *)&v73[8];
  sub_1403885B0(v73, v18, v19);
  v13 = *(_QWORD *)v73;
  if ( *(_QWORD *)v73 != -1 )
  {
    v78 = *(_QWORD *)&v73[8];
    v20 = *(_QWORD *)&v73[16];
    v21 = *(_QWORD *)&v73[24];
    v58 = *(__m128i *)&v73[32];
    v59 = *(_OWORD *)&v73[48];
    v60 = *(_OWORD *)&v73[64];
    v61 = _mm_loadu_si128((const __m128i *)&v73[80]);
    goto LABEL_10;
  }
  v80 = *(HANDLE *)&v73[8];
  sub_1408698E0(&v49, a2[37], a2[38]);
  if ( v49.m128i_i32[0] != -1 )
  {
    v42[5] = v54;
    v42[4] = v53;
    v42[3] = v52;
    v42[2] = v51;
    v42[1] = v50;
    v42[0] = _mm_loadu_si128(&v49);
    v24 = a2[5];
    v25 = a2[6];
    sub_1403C9010(&v58, v24, v25);
    v84 = v58.m128i_i64[0];
    if ( v58.m128i_i64[0] == -2 )
    {
      v85 = 1;
      sub_141486710(v73, v24, v25);
      if ( *(_DWORD *)v73 == 2 )
      {
        *((_QWORD *)&v67 + 1) = *(_QWORD *)&v73[8];
        *(_QWORD *)&v67 = 2;
LABEL_33:
        v85 = 1;
        sub_140018650((char *)&v67 + 8);
        *(_OWORD *)v62.m256i_i8 = -1;
LABEL_38:
        sub_1407DA310(&v58.m128i_u64[1]);
        goto LABEL_40;
      }
      v67 = *(_OWORD *)v73;
      *(_QWORD *)&v68[64] = *(_QWORD *)&v73[80];
      *(__m128i *)&v68[48] = _mm_loadu_si128((const __m128i *)&v73[64]);
      *(_OWORD *)&v68[32] = *(_OWORD *)&v73[48];
      *(_OWORD *)&v68[16] = *(_OWORD *)&v73[32];
      *(_OWORD *)v68 = *(_OWORD *)&v73[16];
      if ( *(_QWORD *)v73 == 2 )
        goto LABEL_33;
      goto LABEL_37;
    }
    v85 = 1;
    if ( (unsigned __int8)sub_1403CCAD0(&v58) )
    {
      *(_OWORD *)v62.m256i_i8 = -1;
LABEL_39:
      sub_14052D960(&v58);
      goto LABEL_40;
    }
    v85 = 1;
    if ( !(unsigned __int8)sub_1403CBE70(&v58) )
    {
LABEL_37:
      *(_QWORD *)v73 = v42;
      *(_QWORD *)&v73[8] = sub_140B036A0;
      v85 = 1;
      sub_14149C0F0(&v43, &unk_1417987C8, v73);
      *(__m128i *)&v62.m256i_u64[1] = _mm_loadu_si128(&v43);
      v62.m256i_i64[3] = v44;
      v62.m256i_i64[0] = 10;
      if ( v84 == -2 )
        goto LABEL_38;
      goto LABEL_39;
    }
    sub_141684120(v73, &v58, 176);
    sub_1403C9DD0(&v67, v73, v24, v25);
    if ( (_DWORD)v67 == 2 )
    {
      v66 = v69;
      v65 = *(_OWORD *)&v68[56];
      v27 = _mm_loadu_si128((const __m128i *)((char *)&v67 + 8));
      v64 = *(_OWORD *)&v68[40];
      v63 = *(__m128i *)&v68[24];
      *(_OWORD *)&v62.m256i_u64[2] = *(_OWORD *)&v68[8];
      *(__m128i *)v62.m256i_i8 = v27;
      goto LABEL_39;
    }
    v36 = *(_QWORD *)&v68[56];
    v37 = *(_QWORD *)&v68[48];
    v83 = (HANDLE *)v69.m128i_i64[1];
    v38 = v69.m128i_i64[0];
    v39 = v70;
    v84 = v71;
    if ( *(_QWORD *)&v68[24] )
    {
      v79 = v70;
      v40 = *(_QWORD *)&v68[56];
      sub_140001660(*(_QWORD *)&v68[32], *(_QWORD *)&v68[24], 1);
      v36 = v40;
      v39 = v79;
    }
    if ( (unsigned __int64)(v37 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v36, v37, 1);
      if ( (unsigned __int64)(v38 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_95:
        if ( (unsigned __int64)(v39 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_97;
        goto LABEL_96;
      }
    }
    else if ( (unsigned __int64)(v38 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      goto LABEL_95;
    }
    sub_140001660(v83, v38, 1);
    if ( (unsigned __int64)(v39 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_97:
      v62.m256i_i64[3] = *(_QWORD *)&v68[16];
      *(__m128i *)&v62.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v68);
      v62.m256i_i64[0] = -1;
      v41 = v58.m128i_i64[0];
      sub_14052D960(v73);
      if ( v41 == -2 )
        goto LABEL_38;
LABEL_40:
      sub_1407DA310(v42);
      v13 = v62.m256i_i64[0];
      if ( v62.m256i_i64[0] != -1 )
      {
        v78 = v62.m256i_i64[1];
        v21 = v62.m256i_i64[3];
        v20 = v62.m256i_i64[2];
        v58 = v63;
        v59 = v64;
        v60 = v65;
        v61 = _mm_load_si128(&v66);
        sub_1404220A0(&v80);
        CloseHandle(v80);
LABEL_10:
        *(_QWORD *)v73 = sub_1412018B0(&hObject);
        if ( *(_QWORD *)v73 )
          sub_140018650(v73);
        v79 = v21;
        CloseHandle(hObject);
        if ( !v76 )
          goto LABEL_17;
        goto LABEL_13;
      }
      goto LABEL_44;
    }
LABEL_96:
    sub_140001660(v84, v39, 1);
    goto LABEL_97;
  }
  if ( v49.m128i_i64[1] == -1 )
  {
    v58.m128i_i64[0] = -1;
  }
  else
  {
    *(_OWORD *)&v73[72] = v54;
    *(_OWORD *)&v73[56] = v53;
    v26 = _mm_loadu_si128(&v50);
    *(_OWORD *)&v73[40] = v52;
    *(__m128i *)&v73[24] = v51;
    *(__m128i *)&v73[8] = v26;
    v84 = v49.m128i_i64[1];
    *(_QWORD *)v73 = v49.m128i_i64[1];
    v58 = v51;
    *(_QWORD *)&v59 = v52;
    sub_140334C60(v73);
    if ( v84 )
      sub_140001660(*(_QWORD *)&v73[8], 424 * v84, 8);
  }
  sub_14086C690(&v62.m256i_u64[1], a2[5], a2[6], &v58);
LABEL_44:
  v84 = v62.m256i_i64[1];
  v83 = (HANDLE *)v62.m256i_i64[3];
  v72 = v62.m256i_i64[2];
  *(_QWORD *)&v67 = 0;
  v79 = a2[41];
  v57 = a2[42];
  v28 = 0;
  while ( v9 != v11 )
  {
    v29 = v11 - 104;
    if ( v84 == -1 || v83 != *(HANDLE **)(v11 - 88) || (unsigned int)sub_1416847B0(v72, *(_QWORD *)(v11 - 96), v83) )
    {
      a2 = *(_QWORD **)(v11 - 72);
      v30 = *(_QWORD *)(v11 - 64);
      sub_1403CE160((unsigned int)v73, (_DWORD)a2, v30, v79, v57);
      if ( *(_DWORD *)v73 != -1 )
      {
        sub_1407DA310(v73);
        goto LABEL_46;
      }
      sub_14148D3C0(v73, a2, v30);
      v74 = *(_QWORD *)v73;
      if ( *(_QWORD *)v73 == -1 )
      {
        v31 = *(_QWORD *)&v73[8];
        if ( !(unsigned __int8)((__int64 (*)(void))sub_140841290)() && *(_QWORD *)(v11 - 24) == -1 )
        {
          v58.m128i_i64[0] = v31;
          sub_140018650(&v58);
        }
        else
        {
          *(_QWORD *)&v67 = ++v28;
          sub_140018650(&v73[8]);
        }
        v11 -= 104;
      }
      else
      {
        v75 = *(_QWORD *)&v73[8];
        if ( *(_QWORD *)&v73[16] == *(_QWORD *)(v11 - 32)
          && !(unsigned int)sub_1416847B0(v75, *(_QWORD *)(v11 - 40), *(_QWORD *)&v73[16]) )
        {
          if ( *(_QWORD *)(v11 - 24) != -1 )
          {
            *(_QWORD *)v73 = sub_1408726C0(a2, v30, *(_QWORD *)(v11 - 16), *(_QWORD *)(v11 - 8));
            if ( !*(_QWORD *)v73 )
              goto LABEL_56;
LABEL_69:
            *(_QWORD *)&v67 = ++v28;
            sub_140018650(v73);
            goto LABEL_56;
          }
          v32 = sub_141485EF0(a2, v30);
          v33 = v32;
          if ( v32 )
          {
            if ( !(unsigned __int8)sub_140841290(v32) )
            {
              *(_QWORD *)v73 = v33;
              sub_140018650(v73);
              goto LABEL_56;
            }
            *(_QWORD *)v73 = v33;
            goto LABEL_69;
          }
        }
        else
        {
          *(_QWORD *)&v67 = ++v28;
        }
LABEL_56:
        v11 -= 104;
        if ( v74 )
        {
          sub_140001660(v75, v74, 1);
          v11 = v29;
        }
      }
    }
    else
    {
LABEL_46:
      *(_QWORD *)&v67 = ++v28;
      v11 -= 104;
    }
  }
  if ( v28 )
  {
    v58.m128i_i64[0] = v78;
    *(_QWORD *)v73 = &v67;
    *(_QWORD *)&v73[8] = sub_1414AC520;
    *(_QWORD *)&v73[16] = &v58;
    *(_QWORD *)&v73[24] = sub_1414AC520;
    sub_14149C0F0(v55, &unk_1417985F1, v73);
    a2 = (_QWORD *)v55[0];
    v9 = v55[1];
    v13 = 10;
    v11 = v55[2];
  }
  else
  {
    v13 = -1;
  }
  if ( (unsigned __int64)(v84 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v72, v84, 1);
  *(_QWORD *)v73 = sub_1412018B0(&v80);
  if ( *(_QWORD *)v73 )
    sub_140018650(v73);
  CloseHandle(v80);
  *(_QWORD *)v73 = sub_1412018B0(&hObject);
  if ( *(_QWORD *)v73 )
    sub_140018650(v73);
  CloseHandle(hObject);
  if ( v76 )
  {
    v84 = 0;
    v34 = v82;
    do
    {
      v83 = v34;
      *(_QWORD *)v73 = sub_1412018B0(v34);
      if ( *(_QWORD *)v73 )
        sub_140018650(v73);
      v35 = v83;
      CloseHandle(*v83);
      v34 = v35 + 1;
      --v84;
    }
    while ( v84 + v76 );
  }
  if ( v77 )
    sub_140001660(v82, 8 * v77, 8);
  if ( v28 )
    goto LABEL_21;
  if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
    *(_QWORD *)&v67 = v78;
    v58.m128i_i64[0] = (__int64)&v67;
    v58.m128i_i64[1] = (__int64)sub_1414AC520;
    *(_QWORD *)&v59 = &si128;
    *((_QWORD *)&v59 + 1) = sub_14041F680;
    *(_QWORD *)v73 = aCodexmateLibCo_31;
    *(_QWORD *)&v73[8] = 31;
    *(_QWORD *)&v73[16] = aCodexmateLibCo_31;
    *(_QWORD *)&v73[24] = 31;
    *(_QWORD *)&v73[32] = &off_1417986B8;
    sub_140985BA0(&unk_14179865D, &v58, 2, v73);
  }
  *(_QWORD *)v73 = &si128;
  *(_QWORD *)&v73[8] = sub_14041F680;
  *(_QWORD *)&v73[16] = a7;
  *(_QWORD *)&v73[24] = sub_140B036A0;
  sub_14149C0F0(&v47, &unk_1417986EF, v73);
  *((_QWORD *)a1 + 3) = v48;
  *(__m128i *)((char *)a1 + 8) = _mm_loadu_si128(&v47);
  *(_QWORD *)a1 = 10;
  return sub_1407DA310(a7);
}
