// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x14077be60
// name: fix_takeover_backup_orphan
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::fix_takeover_backup_orphan | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall fix_takeover_backup_orphan(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  _OWORD *v11; // rax
  unsigned __int128 v12; // xmm0
  __int64 result; // rax
  unsigned __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  _OWORD *v24; // rcx
  unsigned __int128 v25; // xmm0
  __int64 v26; // rcx
  unsigned __int128 v27; // kr00_16
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int128 v35; // xmm0
  __int128 v36; // [rsp+28h] [rbp-58h] BYREF
  __int64 v37; // [rsp+38h] [rbp-48h]
  unsigned __int128 v38; // [rsp+40h] [rbp-40h] BYREF
  __m256i v39; // [rsp+50h] [rbp-30h]
  __int128 v40; // [rsp+70h] [rbp-10h]
  __int128 v41; // [rsp+80h] [rbp+0h]
  __int128 v42; // [rsp+90h] [rbp+10h]
  _QWORD *v43; // [rsp+A8h] [rbp+28h]
  _BYTE v44[24]; // [rsp+B0h] [rbp+30h] BYREF
  __m256i v45; // [rsp+C8h] [rbp+48h] BYREF
  __int128 v46; // [rsp+E8h] [rbp+68h]
  __int128 v47; // [rsp+F8h] [rbp+78h]
  __int128 v48; // [rsp+108h] [rbp+88h]
  __int64 v49; // [rsp+118h] [rbp+98h]
  unsigned __int128 v50; // [rsp+120h] [rbp+A0h] BYREF
  __m256i v51; // [rsp+130h] [rbp+B0h]
  __int128 v52; // [rsp+150h] [rbp+D0h]
  __int128 v53; // [rsp+160h] [rbp+E0h]
  __int128 v54; // [rsp+170h] [rbp+F0h]
  unsigned __int128 v55; // [rsp+188h] [rbp+108h] BYREF
  __m256i v56; // [rsp+198h] [rbp+118h] BYREF
  _QWORD *v57; // [rsp+1B8h] [rbp+138h]
  __int64 v58; // [rsp+1C0h] [rbp+140h]

  v58 = -2;
  if ( (a3 & 1) != 0 )
  {
    *(_QWORD *)&v38 = 0;
    *((_QWORD *)&v38 + 1) = 8;
    v39.m256i_i64[0] = 0;
    nullsub_1(a1);
    v4 = sub_140001650(24, 8);
    if ( !v4 )
      sub_1416C2D31(8, 24);
    v6 = (_QWORD *)v4;
    nullsub_1(v5);
    v7 = sub_140001650(22, 1);
    if ( !v7 )
    {
      v57 = v6;
      sub_1416C2D4B(1, 22);
    }
    *(_OWORD *)v7 = *(_OWORD *)aTakeoverBackup;
    *(_QWORD *)(v7 + 14) = 0x6E616870726F5F70LL;
    *v6 = 22;
    v6[1] = v7;
    v6[2] = 22;
    *(_QWORD *)&v50 = 1;
    *((_QWORD *)&v50 + 1) = v6;
    v51.m256i_i64[0] = 1;
    nullsub_1(0x6E616870726F5F70LL);
    v8 = sub_140001650(24, 8);
    if ( !v8 )
      sub_1416C2D31(8, 24);
    v10 = (_QWORD *)v8;
    nullsub_1(v9);
    v11 = (_OWORD *)sub_140001650(73, 1);
    if ( !v11 )
    {
      v57 = v10;
      sub_1416C2D4B(1, 73);
    }
    *(_OWORD *)((char *)v11 + 57) = *(__int128 *)((char *)&xmmword_14178DDC8 + 9);
    v11[3] = xmmword_14178DDC8;
    v11[2] = xmmword_14178DDB8;
    v11[1] = xmmword_14178DDA8;
    *v11 = xmmword_14178DD98;
    *v10 = 73;
    v10[1] = v11;
    v10[2] = 73;
    *(_QWORD *)&v44[16] = v39.m256i_i64[0];
    v12 = v38;
    *(_OWORD *)v44 = v38;
    v45.m256i_i64[2] = v51.m256i_i64[0];
    *(_OWORD *)v45.m256i_i8 = v50;
    *(_QWORD *)(a1 + 40) = *((_QWORD *)&v50 + 1);
    *(_QWORD *)(a1 + 48) = v45.m256i_i64[2];
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v44[16];
    result = v45.m256i_i64[0];
    *(_QWORD *)(a1 + 32) = v45.m256i_i64[0];
    *(_OWORD *)(a1 + 8) = v12;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v10;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    result = sub_140418A40(v44, a2);
    v50 = *(_OWORD *)&v44[8];
    v51 = v45;
    v52 = v46;
    v53 = v47;
    v54 = v48;
    if ( v44[0] )
    {
      *(_OWORD *)(a1 + 80) = v54;
      *(_OWORD *)(a1 + 64) = v53;
      v15 = v50;
      v16 = *(_OWORD *)v51.m256i_i8;
      v17 = *(_OWORD *)&v51.m256i_u64[2];
      *(_OWORD *)(a1 + 48) = v52;
      *(_OWORD *)(a1 + 32) = v17;
      *(_OWORD *)(a1 + 16) = v16;
      *(_OWORD *)a1 = v15;
    }
    else
    {
      v42 = v54;
      v41 = v53;
      v40 = v52;
      v39 = v51;
      v38 = v50;
      check_takeover_backup_orphan(v44, a2, 0);
      if ( v45.m256i_i64[2] == 2 && *(_WORD *)v45.m256i_i64[1] == 27503 )
      {
        if ( *((_QWORD *)&v42 + 1) )
        {
          sub_140440300((unsigned int)&v50, v42, DWORD2(v42), (unsigned int)&unk_14178D4E1, 3);
          v56.m256i_i64[3] = v51.m256i_i64[0];
          *(_OWORD *)&v56.m256i_u64[1] = v50;
          *(_QWORD *)&v55 = &v56.m256i_i64[1];
          *((_QWORD *)&v55 + 1) = sub_1400015F0;
          sub_14149C0F0(&v50, &unk_14178DD52, &v55);
          if ( v56.m256i_i64[1] )
            sub_140001660(v56.m256i_i64[2], v56.m256i_i64[1], 1);
          v27 = v50;
          v28 = v51.m256i_i64[0];
        }
        else
        {
          nullsub_1(v18);
          v28 = 52;
          v29 = sub_140001650(52, 1);
          if ( !v29 )
            sub_1416C2D4B(1, 52);
          *(_OWORD *)(v29 + 32) = xmmword_14178DD3E;
          *(_OWORD *)(v29 + 16) = xmmword_14178DD2E;
          *(_OWORD *)v29 = xmmword_14178DD1E;
          *(_DWORD *)(v29 + 48) = -1229200249;
          v27 = __PAIR128__(v29, 52);
        }
        nullsub_1(v26);
        v30 = sub_140001650(24, 8);
        if ( !v30 )
        {
          v49 = v27 >> 64;
          v57 = (_QWORD *)v27;
          sub_1416C2D31(8, 24);
        }
        v32 = (_QWORD *)v30;
        nullsub_1(v31);
        v33 = sub_140001650(22, 1);
        if ( !v33 )
        {
          v43 = v32;
          v49 = v27 >> 64;
          v57 = (_QWORD *)v27;
          sub_1416C2D4B(1, 22);
        }
        *(_OWORD *)v33 = *(_OWORD *)aTakeoverBackup;
        *(_QWORD *)(v33 + 14) = 0x6E616870726F5F70LL;
        *v32 = 22;
        v32[1] = v33;
        v32[2] = 22;
        *(_QWORD *)&v55 = 1;
        *((_QWORD *)&v55 + 1) = v32;
        *(_OWORD *)v56.m256i_i8 = 1u;
        *(_OWORD *)&v56.m256i_u64[2] = 8u;
        nullsub_1(0x6E616870726F5F70LL);
        v34 = sub_140001650(24, 8);
        if ( !v34 )
        {
          v49 = v27 >> 64;
          v57 = (_QWORD *)v27;
          sub_1416C2D31(8, 24);
        }
        *(_OWORD *)v34 = v27;
        *(_QWORD *)(v34 + 16) = v28;
        v51 = v56;
        v35 = v55;
        v50 = v55;
        *(_QWORD *)(a1 + 40) = v56.m256i_i64[2];
        *(_QWORD *)(a1 + 48) = v51.m256i_i64[3];
        *(_OWORD *)(a1 + 24) = *(_OWORD *)v51.m256i_i8;
        *(_OWORD *)(a1 + 8) = v35;
        *(_QWORD *)(a1 + 56) = 1;
        *(_QWORD *)(a1 + 64) = v34;
      }
      else
      {
        *(_QWORD *)&v55 = 0;
        *((_QWORD *)&v55 + 1) = 8;
        v56.m256i_i64[0] = 0;
        nullsub_1(v18);
        v19 = sub_140001650(24, 8);
        if ( !v19 )
          sub_1416C2D31(8, 24);
        v21 = (_QWORD *)v19;
        nullsub_1(v20);
        v22 = sub_140001650(22, 1);
        if ( !v22 )
        {
          v57 = v21;
          sub_1416C2D4B(1, 22);
        }
        *(_OWORD *)v22 = *(_OWORD *)aTakeoverBackup;
        *(_QWORD *)(v22 + 14) = 0x6E616870726F5F70LL;
        *v21 = 22;
        v21[1] = v22;
        v21[2] = 22;
        v56.m256i_i64[1] = 1;
        v56.m256i_i64[2] = (__int64)v21;
        v56.m256i_i64[3] = 1;
        nullsub_1(0x6E616870726F5F70LL);
        v23 = sub_140001650(24, 8);
        if ( !v23 )
          sub_1416C2D31(8, 24);
        v57 = (_QWORD *)v23;
        *(_QWORD *)&v50 = &v45.m256i_i64[3];
        *((_QWORD *)&v50 + 1) = sub_1400015F0;
        sub_14149C0F0(&v36, &unk_14178DCFA, &v50);
        v24 = v57;
        v57[2] = v37;
        *v24 = v36;
        v25 = v55;
        v50 = v55;
        v51 = v56;
        *(_QWORD *)(a1 + 40) = v56.m256i_i64[2];
        *(_QWORD *)(a1 + 48) = v51.m256i_i64[3];
        *(_OWORD *)(a1 + 24) = *(_OWORD *)v51.m256i_i8;
        *(_OWORD *)(a1 + 8) = v25;
        *(_QWORD *)(a1 + 56) = 1;
        *(_QWORD *)(a1 + 64) = v24;
      }
      *(_QWORD *)(a1 + 72) = 1;
      *(_QWORD *)a1 = -1;
      if ( *(_QWORD *)v44 )
        sub_140001660(*(_QWORD *)&v44[8], *(_QWORD *)v44, 1);
      if ( v45.m256i_i64[0] )
        sub_140001660(v45.m256i_i64[1], v45.m256i_i64[0], 1);
      if ( v45.m256i_i64[3] )
        sub_140001660(v46, v45.m256i_i64[3], 1);
      if ( (_QWORD)v47 != -1 && (_QWORD)v47 )
        sub_140001660(*((_QWORD *)&v47 + 1), v47, 1);
      return sub_140350210(&v38);
    }
  }
  return result;
}