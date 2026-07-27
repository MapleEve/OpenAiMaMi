// module: codexmate_lib/core/account_io
// addr: 0x1408666c0
// name: parse_import_file
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::account_io::parse_import_file | 跨平台字符串签名匹配(名↔函数一致)
int __fastcall parse_import_file(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __m128i *v7; // rax
  void *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __m128i *v12; // rax
  HANDLE v13; // rcx
  __int64 v14; // rdx
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int128 v19; // xmm2
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r9
  __m128i v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rdx
  __m128i v32; // xmm1
  _QWORD v34[4]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v35; // [rsp+50h] [rbp-30h]
  __int128 v36; // [rsp+60h] [rbp-20h]
  __int128 v37; // [rsp+70h] [rbp-10h]
  __m128i v38; // [rsp+80h] [rbp+0h]
  __m128i v39; // [rsp+98h] [rbp+18h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+28h]
  __m128i v41; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v42; // [rsp+C0h] [rbp+40h]
  __m128i v43; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v44; // [rsp+D8h] [rbp+58h]
  __m128i v45; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v46; // [rsp+F0h] [rbp+70h]
  __m128i v47; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v48; // [rsp+108h] [rbp+88h]
  __m128i v49; // [rsp+110h] [rbp+90h] BYREF
  __int64 v50; // [rsp+120h] [rbp+A0h]
  __m128i v51; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v52; // [rsp+138h] [rbp+B8h]
  __m128i v53; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v54; // [rsp+150h] [rbp+D0h]
  __int128 v55; // [rsp+160h] [rbp+E0h]
  __int128 v56; // [rsp+170h] [rbp+F0h]
  __int128 v57; // [rsp+180h] [rbp+100h]
  __m128i v58; // [rsp+190h] [rbp+110h]
  void *v59; // [rsp+1A8h] [rbp+128h] BYREF
  _BYTE v60[24]; // [rsp+1B0h] [rbp+130h] BYREF
  _BYTE v61[88]; // [rsp+1C8h] [rbp+148h] BYREF
  __m128i v62; // [rsp+220h] [rbp+1A0h] BYREF
  __m128i v63; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v64; // [rsp+240h] [rbp+1C0h]
  __int128 v65; // [rsp+250h] [rbp+1D0h]
  __int128 v66; // [rsp+260h] [rbp+1E0h]
  __m128i v67; // [rsp+270h] [rbp+1F0h] BYREF
  __m128i v68; // [rsp+280h] [rbp+200h] BYREF
  __int64 v69; // [rsp+290h] [rbp+210h]
  __int64 v70; // [rsp+298h] [rbp+218h] BYREF
  __m128i v71; // [rsp+2A0h] [rbp+220h] BYREF
  _BYTE v72[112]; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v73; // [rsp+320h] [rbp+2A0h]
  __int64 v74; // [rsp+330h] [rbp+2B0h]
  HANDLE hObject; // [rsp+338h] [rbp+2B8h]
  char v76; // [rsp+345h] [rbp+2C5h]
  char v77; // [rsp+346h] [rbp+2C6h]
  char v78; // [rsp+347h] [rbp+2C7h]
  __int64 v79; // [rsp+348h] [rbp+2C8h]

  v79 = -2;
  sub_141486270(v72, a2, a3);
  if ( *(_DWORD *)v72 == 2 )
  {
    v7 = *(__m128i **)&v72[8];
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v7;
    *(_QWORD *)a1 = -1;
    return (int)v7;
  }
  LOBYTE(v6) = (*(_WORD *)&v72[76] & 0x400) == 0;
  if ( (v72[76] & 0x10) == 0 )
  {
    LOBYTE(v6) = ((*(_DWORD *)&v72[80] & 0x20000000) == 0) | v6;
    if ( (_BYTE)v6 )
    {
      *(_DWORD *)v72 = 0;
      *(_QWORD *)&v72[8] = 0;
      *(_DWORD *)&v72[16] = 7;
      *(_QWORD *)&v72[20] = 0x100000000LL;
      *(_QWORD *)&v72[25] = 0;
      v7 = (__m128i *)sub_141481480(v72, a2, a3);
      if ( v7 == (__m128i *)1 )
      {
        *(_QWORD *)(a1 + 8) = 2;
        *(_QWORD *)(a1 + 16) = v8;
        *(_QWORD *)a1 = -1;
        return (int)v7;
      }
      hObject = v8;
      v59 = v8;
      v77 = 1;
      sub_141474A10((__int64)v72, &v59);
      if ( *(_DWORD *)v72 == 2 )
      {
        v10 = *(_QWORD *)&v72[8];
        *(_QWORD *)(a1 + 8) = 2;
        v11 = 16;
LABEL_17:
        v13 = hObject;
        *(_QWORD *)(a1 + v11) = v10;
        *(_QWORD *)a1 = -1;
        LODWORD(v7) = CloseHandle(v13);
        return (int)v7;
      }
      LOBYTE(v9) = (*(_WORD *)&v72[76] & 0x400) == 0;
      if ( (v72[76] & 0x10) != 0 || (LOBYTE(v9) = ((*(_DWORD *)&v72[80] & 0x20000000) == 0) | v9, !(_BYTE)v9) )
      {
        nullsub_1(v9);
        v10 = 34;
        v12 = (__m128i *)sub_140001650(34, 1);
        if ( !v12 )
        {
          v77 = 1;
          sub_1416C2D4B(1, 34);
        }
        qmemcpy(&v12[1], " be a regular file", 18);
        *v12 = _mm_loadu_si128((const __m128i *)&xmmword_1417984A6);
        *(_QWORD *)(a1 + 8) = 9;
        *(_QWORD *)(a1 + 16) = 34;
        *(_QWORD *)(a1 + 24) = v12;
        v11 = 32;
        goto LABEL_17;
      }
      if ( *(_QWORD *)&v72[56] > 0xA00000u )
      {
        *(_QWORD *)v60 = *(_QWORD *)&v72[56];
        *(_QWORD *)v72 = v60;
        *(_QWORD *)&v72[8] = sub_1414AC520;
        *(_QWORD *)&v72[16] = &unk_141798450;
        *(_QWORD *)&v72[24] = sub_1414AC520;
        v77 = 1;
        sub_14149C0F0(&v51, &unk_14179847D, v72);
        *(_QWORD *)(a1 + 32) = v52;
        *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v51);
        v10 = 9;
        v11 = 8;
        goto LABEL_17;
      }
      sub_140388B60((unsigned int)v72, *(_DWORD *)&v72[56], 0, 1, 1);
      if ( v72[0] )
      {
        v77 = 1;
        sub_1416C2D4B(*(_QWORD *)&v72[8], *(_QWORD *)&v72[16]);
      }
      v70 = *(_QWORD *)&v72[8];
      v71 = (__m128i)*(unsigned __int64 *)&v72[16];
      *(_QWORD *)v72 = hObject;
      *(_QWORD *)&v72[8] = 10485761;
      *(_QWORD *)&v72[16] = 10485761;
      if ( (sub_140351CB0(v72, &v70, 0) & 1) != 0 )
      {
        *(_QWORD *)(a1 + 8) = 2;
        *(_QWORD *)(a1 + 16) = v14;
        *(_QWORD *)a1 = -1;
        LODWORD(v7) = CloseHandle(*(HANDLE *)v72);
        goto LABEL_34;
      }
      CloseHandle(*(HANDLE *)v72);
      if ( v71.m128i_i64[1] > 0xA00000uLL )
      {
        *(_QWORD *)v72 = &unk_141798450;
        *(_QWORD *)&v72[8] = sub_1414AC520;
        sub_14149C0F0(&v49, &unk_141798458, v72);
        LODWORD(v7) = v50;
        *(_QWORD *)(a1 + 32) = v50;
        *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v49);
        *(_QWORD *)(a1 + 8) = 9;
        *(_QWORD *)a1 = -1;
        goto LABEL_34;
      }
      sub_1407DE400(v72, v71.m128i_i64[0]);
      sub_140958CD0(&v68, v72, &v72[32]);
      v53 = _mm_loadu_si128(&v71);
      v54 = 0;
      v76 = 1;
      sub_1408A8F70(v72, &v53);
      if ( *(_QWORD *)v72 == -1 )
      {
        v76 = 1;
        LODWORD(v7) = _u7b__u7b_closure_u7d__u7d__15((__int64)&v53, *(_QWORD **)&v72[8]);
        v38 = v58;
        v37 = v57;
        v36 = v56;
        v62 = v53;
        v63 = v54;
        v64 = v55;
        v65 = v56;
        v66 = v57;
        v67 = v58;
        *(__m128i *)(a1 + 88) = v58;
        *(_OWORD *)(a1 + 72) = v66;
        v17 = _mm_load_si128(&v62);
        v18 = _mm_load_si128(&v63);
        v19 = v64;
        *(_OWORD *)(a1 + 56) = v65;
        *(_OWORD *)(a1 + 40) = v19;
        *(__m128i *)(a1 + 24) = v18;
        *(__m128i *)(a1 + 8) = v17;
        *(_QWORD *)a1 = -1;
LABEL_32:
        if ( v68.m128i_i64[0] )
          LODWORD(v7) = sub_140001660(v68.m128i_i64[1], v68.m128i_i64[0], 1);
        goto LABEL_34;
      }
      v38 = *(__m128i *)&v72[88];
      v37 = *(_OWORD *)&v72[72];
      v36 = *(_OWORD *)&v72[56];
      v35 = *(_OWORD *)&v72[40];
      v62 = *(__m128i *)&v72[8];
      v63 = *(__m128i *)&v72[24];
      v64 = *(_OWORD *)&v72[40];
      v65 = *(_OWORD *)&v72[56];
      v66 = *(_OWORD *)&v72[72];
      v67 = *(__m128i *)&v72[88];
      v15 = _mm_load_si128(&v63);
      *(_OWORD *)&v60[8] = *(_OWORD *)&v72[8];
      *(__m128i *)v61 = v15;
      *(_OWORD *)&v61[16] = *(_OWORD *)&v72[40];
      *(_OWORD *)&v61[32] = *(_OWORD *)&v72[56];
      *(_OWORD *)&v61[48] = *(_OWORD *)&v72[72];
      *(__m128i *)&v61[64] = _mm_load_si128(&v67);
      *(_QWORD *)v60 = *(_QWORD *)v72;
      *(_QWORD *)&v61[80] = *(_QWORD *)&v72[104];
      if ( *(_QWORD *)&v72[16] == 22
        && _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128(*(const __m128i **)&v60[8]), (__m128i)xmmword_1417921C0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)&v60[8] + 6LL)), (__m128i)xmmword_1417921B0))) == 0xFFFF )
      {
        if ( *(_DWORD *)&v72[104] == 1 )
        {
          if ( *(_QWORD *)&v61[40] <= 0x1F4u )
          {
            if ( !*(_QWORD *)&v61[40] )
            {
              nullsub_1(0);
              v23 = sub_140001650(27, 1);
              if ( !v23 )
              {
                v78 = 1;
                sub_1416C2D4B(1, 27);
              }
              *(_OWORD *)(v23 + 11) = *(__int128 *)((char *)&xmmword_141798330 + 11);
              *(__m128i *)v23 = _mm_loadu_si128((const __m128i *)&xmmword_141798330);
              *(_QWORD *)(a1 + 8) = 9;
              *(_QWORD *)(a1 + 16) = 27;
              *(_QWORD *)(a1 + 24) = v23;
              *(_QWORD *)(a1 + 32) = 27;
              goto LABEL_29;
            }
            if ( HIDWORD(*(_QWORD *)&v72[104]) == *(_QWORD *)&v61[40] )
            {
              v78 = 1;
              validate_import_display_fields(v72, v60);
              if ( *(_DWORD *)v72 == -1 )
              {
                v24 = *(_QWORD *)&v61[40];
                v78 = 1;
                v25 = sub_1407BF4A0(&off_1417964A0);
                v27 = v26;
                v78 = 1;
                LOBYTE(v28) = 1;
                sub_1405AC280(v72, 24, v24, v28);
                v29 = _mm_loadu_si128((const __m128i *)v72);
                v54 = _mm_loadu_si128((const __m128i *)&v72[16]);
                v53 = v29;
                *(_QWORD *)&v55 = v25;
                *((_QWORD *)&v55 + 1) = v27;
                v62.m128i_i64[0] = *(_QWORD *)&v61[32];
                v62.m128i_i64[1] = *(_QWORD *)&v61[32] + 416LL * *(_QWORD *)&v61[40];
                v30 = sub_140830720(&v62, &v53);
                if ( !v30 )
                {
                  *(_OWORD *)&v72[96] = *(_OWORD *)&v61[72];
                  *(_OWORD *)&v72[80] = *(_OWORD *)&v61[56];
                  *(_OWORD *)&v72[64] = *(_OWORD *)&v61[40];
                  v32 = _mm_loadu_si128((const __m128i *)&v60[16]);
                  *(_OWORD *)&v72[48] = *(_OWORD *)&v61[24];
                  *(_OWORD *)&v72[32] = *(_OWORD *)&v61[8];
                  *(__m128i *)&v72[16] = v32;
                  *(_OWORD *)v72 = *(_OWORD *)v60;
                  v73 = _mm_loadu_si128(&v68);
                  v74 = v69;
                  sub_141684120(a1, v72, 136);
                  v78 = 0;
                  LODWORD(v7) = sub_14067FFB0(&v53);
LABEL_34:
                  if ( v70 )
                    LODWORD(v7) = sub_140001660(v71.m128i_i64[0], v70, 1);
                  return (int)v7;
                }
                v34[0] = v30;
                v34[1] = v31;
                *(_QWORD *)v72 = v34;
                *(_QWORD *)&v72[8] = sub_14041F680;
                sub_14149C0F0(&v39, &unk_14179834B, v72);
                *(_QWORD *)(a1 + 32) = v40;
                *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v39);
                *(_QWORD *)(a1 + 8) = 9;
                *(_QWORD *)a1 = -1;
                v78 = 1;
                sub_14067FFB0(&v53);
                goto LABEL_30;
              }
              *(_OWORD *)(a1 + 88) = *(_OWORD *)&v72[80];
              *(_OWORD *)(a1 + 72) = *(_OWORD *)&v72[64];
              v20 = _mm_loadu_si128((const __m128i *)v72);
              v21 = _mm_loadu_si128((const __m128i *)&v72[16]);
              v22 = *(_OWORD *)&v72[32];
              *(_OWORD *)(a1 + 56) = *(_OWORD *)&v72[48];
              *(_OWORD *)(a1 + 40) = v22;
              *(__m128i *)(a1 + 24) = v21;
              *(__m128i *)(a1 + 8) = v20;
LABEL_29:
              *(_QWORD *)a1 = -1;
LABEL_30:
              v76 = 1;
              LODWORD(v7) = sub_1407D9AE0(v60);
              goto LABEL_32;
            }
            v53.m128i_i64[0] = *(_QWORD *)&v61[40];
            *(_QWORD *)v72 = &v61[84];
            *(_QWORD *)&v72[8] = sub_1414AB890;
            *(_QWORD *)&v72[16] = &v53;
            *(_QWORD *)&v72[24] = sub_1414AC520;
            v78 = 1;
            sub_14149C0F0(&v41, &unk_141798375, v72);
            *(_QWORD *)(a1 + 32) = v42;
            v16 = _mm_loadu_si128(&v41);
          }
          else
          {
            v53.m128i_i64[0] = *(_QWORD *)&v61[40];
            *(_QWORD *)v72 = &v53;
            *(_QWORD *)&v72[8] = sub_1414AC520;
            *(_QWORD *)&v72[16] = &unk_1417983B0;
            *(_QWORD *)&v72[24] = sub_1414AC520;
            v78 = 1;
            sub_14149C0F0(&v43, &unk_1417983B8, v72);
            *(_QWORD *)(a1 + 32) = v44;
            v16 = _mm_loadu_si128(&v43);
          }
        }
        else
        {
          *(_QWORD *)v72 = &v61[80];
          *(_QWORD *)&v72[8] = sub_1414AB890;
          *(_QWORD *)&v72[16] = &unk_1417983E8;
          *(_QWORD *)&v72[24] = sub_1414AB890;
          v78 = 1;
          sub_14149C0F0(&v45, &unk_1417983EC, v72);
          *(_QWORD *)(a1 + 32) = v46;
          v16 = _mm_loadu_si128(&v45);
        }
      }
      else
      {
        *(_QWORD *)v72 = v60;
        *(_QWORD *)&v72[8] = sub_1400015F0;
        *(_QWORD *)&v72[16] = &off_141798320;
        *(_QWORD *)&v72[24] = sub_14041F680;
        v78 = 1;
        sub_14149C0F0(&v47, &unk_141798429, v72);
        *(_QWORD *)(a1 + 32) = v48;
        v16 = _mm_loadu_si128(&v47);
      }
      *(__m128i *)(a1 + 16) = v16;
      *(_QWORD *)(a1 + 8) = 9;
      goto LABEL_29;
    }
  }
  nullsub_1(v6);
  v7 = (__m128i *)sub_140001650(34, 1);
  if ( !v7 )
    sub_1416C2D4B(1, 34);
  qmemcpy(&v7[1], " be a regular file", 18);
  *v7 = _mm_loadu_si128((const __m128i *)&xmmword_1417984A6);
  *(_QWORD *)(a1 + 8) = 9;
  *(_QWORD *)(a1 + 16) = 34;
  *(_QWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 32) = 34;
  *(_QWORD *)a1 = -1;
  return (int)v7;
}
