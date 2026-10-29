// win 1.2.7 | module src/core/relay/codex_writer.rs | ea 0x140f0e1b0 | name sub_140F0E1B0 (via content-string anchor xref)
__int64 __fastcall sub_140F0E1B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int128 *, __int64))
{
  __int64 result; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _OWORD *v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // rdx
  __int128 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rdi
  _OWORD *v36; // rax
  __int128 v37; // xmm0
  __int128 v38; // [rsp+20h] [rbp-60h] BYREF
  __int64 v39; // [rsp+30h] [rbp-50h]
  _QWORD v40[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v41; // [rsp+48h] [rbp-38h] BYREF
  __int128 v42; // [rsp+58h] [rbp-28h]
  __int128 v43; // [rsp+68h] [rbp-18h] BYREF
  __int128 v44; // [rsp+78h] [rbp-8h]
  __int128 v45; // [rsp+88h] [rbp+8h]
  __int128 v46; // [rsp+98h] [rbp+18h] BYREF
  __int64 v47; // [rsp+B0h] [rbp+30h]
  __int128 v48; // [rsp+B8h] [rbp+38h]
  __int64 v49; // [rsp+C8h] [rbp+48h]
  _BYTE v50[24]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v51; // [rsp+E8h] [rbp+68h]
  __int64 v52; // [rsp+F8h] [rbp+78h]
  __int128 v53; // [rsp+108h] [rbp+88h] BYREF
  __int64 v54; // [rsp+118h] [rbp+98h]
  __int64 v55; // [rsp+120h] [rbp+A0h]
  char v56; // [rsp+12Dh] [rbp+ADh]
  char v57; // [rsp+12Eh] [rbp+AEh]
  char v58; // [rsp+12Fh] [rbp+AFh]
  __int64 v59; // [rsp+130h] [rbp+B0h]

  v59 = -2;
  result = a6(&v41, a5);
  if ( (_DWORD)v41 != -1 )
  {
    *(_OWORD *)(a1 + 80) = v46;
    *(_OWORD *)(a1 + 64) = v45;
    v11 = v41;
    v12 = v42;
    v13 = v43;
    *(_OWORD *)(a1 + 48) = v44;
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
    return result;
  }
  sub_14169D1D0(v50, a2, a3);
  v55 = *(_QWORD *)v50;
  if ( *(_QWORD *)v50 == -1 )
  {
    if ( (v50[8] & 3u) - 2 >= 2 && (v50[8] & 3) != 0 )
    {
      *((_QWORD *)&v53 + 1) = *(_QWORD *)&v50[8] - 1LL;
      LOBYTE(v53) = 3;
      sub_1416BCB00((char *)&v53 + 8);
    }
    v15 = 0;
  }
  else
  {
    v15 = *(_QWORD *)&v50[8];
    v14 = *(_QWORD *)&v50[16];
  }
  v47 = v15;
  sub_140F21C20(&v41, v15, v14, a4);
  if ( v55 > 0 )
    sub_140001660(v47, v55, 1);
  if ( *((_QWORD *)&v43 + 1) == 2 && (v17 = v43, *(_WORD *)v43 == 27503) )
  {
    nullsub_1(v16);
    v28 = sub_140001650(24, 8);
    if ( !v28 )
    {
      v58 = 1;
      sub_141938D11(8, 24);
    }
    v30 = (_QWORD *)v28;
    nullsub_1(v29);
    v31 = sub_140001650(20, 1);
    if ( !v31 )
    {
      v55 = (__int64)v30;
      sub_141938D2B(1, 20);
    }
    *(_OWORD *)v31 = *(_OWORD *)aRouterHttpCont;
    *(_DWORD *)(v31 + 16) = 1952670066;
    *v30 = 20;
    v30[1] = v31;
    v30[2] = 20;
    *(_QWORD *)&v48 = 1;
    *((_QWORD *)&v48 + 1) = v30;
    v49 = 1;
    *(_QWORD *)&v53 = 0;
    *((_QWORD *)&v53 + 1) = 8;
    v54 = 0;
    nullsub_1(v32);
    v33 = sub_140001650(24, 8);
    if ( !v33 )
      sub_141938D11(8, 24);
    v35 = (_QWORD *)v33;
    nullsub_1(v34);
    v36 = (_OWORD *)sub_140001650(45, 1);
    if ( !v36 )
    {
      v55 = (__int64)v35;
      sub_141938D2B(1, 45);
    }
    *(_OWORD *)((char *)v36 + 29) = *(__int128 *)((char *)&xmmword_141A5D9E7 + 13);
    v36[1] = xmmword_141A5D9E7;
    *v36 = xmmword_141A5D9D7;
    *v35 = 45;
    v35[1] = v36;
    v35[2] = 45;
    *(_QWORD *)&v50[16] = v49;
    v37 = v48;
    *(_OWORD *)v50 = v48;
    v52 = v54;
    v51 = v53;
    *(_QWORD *)(a1 + 40) = *((_QWORD *)&v53 + 1);
    *(_QWORD *)(a1 + 48) = v52;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v50[16];
    *(_QWORD *)(a1 + 32) = v51;
    *(_OWORD *)(a1 + 8) = v37;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v35;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    if ( (_QWORD)v41 )
      sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
    if ( *((_QWORD *)&v42 + 1) )
      sub_140001660(v17, *((_QWORD *)&v42 + 1), 1);
    if ( (_QWORD)v44 )
      sub_140001660(*((_QWORD *)&v44 + 1), v44, 1);
    v26 = *((_QWORD *)&v45 + 1);
    result = *((_QWORD *)&v45 + 1) - 1LL;
    if ( (unsigned __int64)(*((_QWORD *)&v45 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v27 = &v46;
      return sub_140001660(*(_QWORD *)v27, v26, 1);
    }
  }
  else
  {
    *(_QWORD *)&v48 = 0;
    *((_QWORD *)&v48 + 1) = 8;
    v49 = 0;
    nullsub_1(v16);
    v18 = sub_140001650(24, 8);
    if ( !v18 )
    {
      v57 = 1;
      sub_141938D11(8, 24);
    }
    v20 = (_QWORD *)v18;
    nullsub_1(v19);
    v21 = sub_140001650(20, 1);
    if ( !v21 )
    {
      v55 = (__int64)v20;
      sub_141938D2B(1, 20);
    }
    *(_OWORD *)v21 = *(_OWORD *)aRouterHttpCont;
    *(_DWORD *)(v21 + 16) = 1952670066;
    *v20 = 20;
    v20[1] = v21;
    v20[2] = 20;
    *(_QWORD *)&v53 = 1;
    *((_QWORD *)&v53 + 1) = v20;
    v54 = 1;
    nullsub_1(v22);
    v23 = sub_140001650(24, 8);
    if ( !v23 )
    {
      v56 = 1;
      sub_141938D11(8, 24);
    }
    v55 = v23;
    if ( *((_QWORD *)&v45 + 1) == -1 )
    {
      *(_QWORD *)&v50[16] = v45;
      *(_OWORD *)v50 = v44;
    }
    else
    {
      *(_QWORD *)v50 = *((_QWORD *)&v45 + 1);
      *(_OWORD *)&v50[8] = v46;
      if ( (_QWORD)v44 )
        sub_140001660(*((_QWORD *)&v44 + 1), v44, 1);
    }
    v40[0] = v50;
    v40[1] = sub_1400015F0;
    sub_1416ABFD0(&v38, &unk_141A5D99B, v40);
    if ( *(_QWORD *)v50 )
      sub_140001660(*(_QWORD *)&v50[8], *(_QWORD *)v50, 1);
    v24 = (_OWORD *)v55;
    *(_QWORD *)(v55 + 16) = v39;
    *v24 = v38;
    v25 = v48;
    *(_OWORD *)v50 = v48;
    *(_QWORD *)&v50[16] = v49;
    v52 = v54;
    v51 = v53;
    *(_QWORD *)(a1 + 40) = *((_QWORD *)&v53 + 1);
    *(_QWORD *)(a1 + 48) = v52;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v50[16];
    result = v51;
    *(_QWORD *)(a1 + 32) = v51;
    *(_OWORD *)(a1 + 8) = v25;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v24;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    if ( (_QWORD)v41 )
      result = sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
    v26 = *((_QWORD *)&v42 + 1);
    if ( *((_QWORD *)&v42 + 1) )
    {
      v27 = &v43;
      return sub_140001660(*(_QWORD *)v27, v26, 1);
    }
  }
  return result;
}
