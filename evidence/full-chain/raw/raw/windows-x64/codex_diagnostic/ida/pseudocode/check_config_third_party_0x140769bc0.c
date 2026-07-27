// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x140769bc0
// name: check_config_third_party
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::check_config_third_party | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall check_config_third_party(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  _WORD *v13; // rax
  __int64 v14; // rcx
  _WORD *v15; // rbx
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  _DWORD *v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // rax
  _OWORD *v31; // rax
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rsi
  _QWORD *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rsi
  _QWORD *v48; // rbx
  __int64 v49; // rdx
  __int128 v50; // [rsp+30h] [rbp-50h] BYREF
  __int64 v51; // [rsp+40h] [rbp-40h]
  __int128 v52; // [rsp+48h] [rbp-38h] BYREF
  __int64 v53; // [rsp+58h] [rbp-28h]
  __int128 v54; // [rsp+60h] [rbp-20h] BYREF
  __int64 v55; // [rsp+70h] [rbp-10h]
  _QWORD v56[3]; // [rsp+78h] [rbp-8h] BYREF
  __int64 v57; // [rsp+90h] [rbp+10h] BYREF
  __int64 v58; // [rsp+98h] [rbp+18h]
  __int64 v59; // [rsp+A0h] [rbp+20h]
  __int64 v60; // [rsp+A8h] [rbp+28h]
  __int64 v61; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v62; // [rsp+B8h] [rbp+38h]
  __int128 v63; // [rsp+C0h] [rbp+40h] BYREF
  __int128 *v64; // [rsp+D0h] [rbp+50h]
  __int64 (__fastcall *v65)(_QWORD, _QWORD); // [rsp+D8h] [rbp+58h]
  __int128 v66; // [rsp+E0h] [rbp+60h] BYREF
  __int128 *v67; // [rsp+F0h] [rbp+70h]
  __int64 v68; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v69; // [rsp+100h] [rbp+80h]
  __int64 v70; // [rsp+108h] [rbp+88h]
  __int64 v71; // [rsp+110h] [rbp+90h]
  bool v72; // [rsp+11Fh] [rbp+9Fh]
  _OWORD *v73; // [rsp+120h] [rbp+A0h]
  char v74; // [rsp+12Fh] [rbp+AFh]
  __int64 v75; // [rsp+130h] [rbp+B0h]

  v75 = -2;
  if ( !a2 )
  {
    nullsub_1(a1);
    v20 = sub_140001650(18, 1);
    if ( !v20 )
      sub_1416C2D4B(1, 18);
    v22 = v20;
    *(_OWORD *)v20 = *(_OWORD *)aConfigThirdPar;
    *(_WORD *)(v20 + 16) = 31092;
    nullsub_1(v21);
    v23 = (_DWORD *)sub_140001650(7, 1);
    if ( !v23 )
    {
      v73 = (_OWORD *)v22;
      sub_1416C2D4B(1, 7);
    }
    v25 = v23;
    *(_DWORD *)((char *)v23 + 3) = 1735289198;
    *v23 = 1852989815;
    nullsub_1(v24);
    v26 = sub_140001650(24, 1);
    if ( !v26 )
    {
      v71 = (__int64)v25;
      v73 = (_OWORD *)v22;
      sub_1416C2D4B(1, 24);
    }
    v28 = v26;
    *(_OWORD *)v26 = xmmword_14178D2DD;
    *(_QWORD *)(v26 + 16) = 0x6C6D6F742E676966LL;
    nullsub_1(v27);
    result = sub_140001650(33, 1);
    if ( !result )
    {
      v62 = v28;
      v71 = (__int64)v25;
      v73 = (_OWORD *)v22;
      sub_1416C2D4B(1, 33);
    }
    *(_OWORD *)(result + 16) = xmmword_14178D305;
    *(_OWORD *)result = xmmword_14178D2F5;
    *(_BYTE *)(result + 32) = -112;
    *(_QWORD *)a1 = 18;
    *(_QWORD *)(a1 + 8) = v22;
    *(_QWORD *)(a1 + 16) = 18;
    *(_QWORD *)(a1 + 24) = 7;
    *(_QWORD *)(a1 + 32) = v25;
    *(_QWORD *)(a1 + 40) = 7;
    *(_QWORD *)(a1 + 48) = 24;
    *(_QWORD *)(a1 + 56) = v28;
    *(_QWORD *)(a1 + 64) = 24;
    *(_QWORD *)(a1 + 72) = 33;
    *(_QWORD *)(a1 + 80) = result;
    *(_QWORD *)(a1 + 88) = 33;
    *(_BYTE *)(a1 + 96) = 0;
    return result;
  }
  sub_1407641E0((__int64)&v57, a2, a3, a4);
  v7 = sub_14076BAC0(a2, a3);
  sub_14076CD80(v56, a2, a3);
  v9 = v59;
  if ( !(v7 | (v59 != 0)) && v56[0] == -1 )
  {
    nullsub_1(v8);
    v10 = sub_140001650(18, 1);
    if ( !v10 )
      sub_1416C2D4B(1, 18);
    v12 = v10;
    *(_OWORD *)v10 = *(_OWORD *)aConfigThirdPar;
    *(_WORD *)(v10 + 16) = 31092;
    nullsub_1(v11);
    v13 = (_WORD *)sub_140001650(2, 1);
    if ( !v13 )
    {
      v73 = (_OWORD *)v12;
      sub_1416C2D4B(1, 2);
    }
    v15 = v13;
    *v13 = 27503;
    nullsub_1(v14);
    v16 = sub_140001650(24, 1);
    if ( !v16 )
    {
      v71 = (__int64)v15;
      v73 = (_OWORD *)v12;
      sub_1416C2D4B(1, 24);
    }
    *(_OWORD *)v16 = xmmword_14178D176;
    *(_QWORD *)(v16 + 16) = 0x9995E78BAEE6A585uLL;
    *(_QWORD *)a1 = 18;
    *(_QWORD *)(a1 + 8) = v12;
    *(_QWORD *)(a1 + 16) = 18;
    *(_QWORD *)(a1 + 24) = 2;
    *(_QWORD *)(a1 + 32) = v15;
    *(_QWORD *)(a1 + 40) = 2;
    *(_QWORD *)(a1 + 48) = 24;
    *(_QWORD *)(a1 + 56) = v16;
    *(_QWORD *)(a1 + 64) = 24;
    *(_QWORD *)(a1 + 72) = -1;
    *(_BYTE *)(a1 + 96) = 0;
    result = v57;
    if ( v57 )
    {
      v18 = v58;
      v19 = 24 * v57;
      return sub_140001660(v18, v19, 8);
    }
    return result;
  }
  v68 = 0;
  v69 = 8;
  v70 = 0;
  if ( v59 )
  {
    v61 = v59;
    sub_140440300((unsigned int)&v63, v58, v59, (unsigned int)&unk_141789F28, 2);
    v67 = v64;
    v66 = v63;
    *(_QWORD *)&v63 = &v61;
    *((_QWORD *)&v63 + 1) = sub_1414AC520;
    v64 = &v66;
    v65 = sub_1400015F0;
    sub_14149C0F0(&v54, &unk_14178D18E, &v63);
    if ( (_QWORD)v66 )
      sub_140001660(*((_QWORD *)&v66 + 1), v66, 1);
    v29 = v70;
    if ( v70 == v68 )
      sub_141689AB0(&v68);
    v30 = v69;
    v8 = 3 * v29;
    *(_QWORD *)(v69 + 8 * v8 + 16) = v55;
    *(_OWORD *)(v30 + 8 * v8) = v54;
    v70 = v29 + 1;
  }
  if ( v7 )
  {
    nullsub_1(v8);
    v31 = (_OWORD *)sub_140001650(16, 1);
    if ( !v31 )
      sub_1416C2D4B(1, 16);
    v73 = v31;
    *v31 = xmmword_14178D1A5;
    v32 = v70;
    if ( v70 == v68 )
      sub_141689AB0(&v68);
    v33 = v69;
    v8 = 3 * v32;
    *(_QWORD *)(v69 + 8 * v8) = 16;
    *(_QWORD *)(v33 + 8 * v8 + 8) = v73;
    *(_QWORD *)(v33 + 8 * v8 + 16) = 16;
    v70 = v32 + 1;
  }
  if ( v56[0] != -1 )
  {
    *(_QWORD *)&v66 = v56;
    *(_QWORD *)&v63 = &v66;
    *((_QWORD *)&v63 + 1) = sub_1406B5450;
    sub_14149C0F0(&v52, &unk_14178D1B5, &v63);
    v34 = v70;
    if ( v70 == v68 )
      sub_141689AB0(&v68);
    v35 = v69;
    v8 = 3 * v34;
    *(_QWORD *)(v69 + 8 * v8 + 16) = v53;
    *(_OWORD *)(v35 + 8 * v8) = v52;
    v70 = v34 + 1;
    if ( v56[0] != -1 )
    {
      nullsub_1(v8);
      v36 = 39;
      v37 = sub_140001650(39, 1);
      if ( !v37 )
        sub_1416C2D4B(1, 39);
      *(_OWORD *)(v37 + 16) = xmmword_14178D201;
      *(_OWORD *)v37 = xmmword_14178D1F1;
      v38 = 0x9995E78BAEE69190uLL;
      v71 = v37;
      *(_QWORD *)(v37 + 31) = 0x9995E78BAEE69190uLL;
      v39 = 39;
LABEL_34:
      v73 = (_OWORD *)v39;
      goto LABEL_36;
    }
  }
  if ( v7 )
  {
    nullsub_1(v8);
    v36 = 36;
    v40 = sub_140001650(36, 1);
    if ( !v40 )
      sub_1416C2D4B(1, 36);
    *(_OWORD *)(v40 + 16) = xmmword_14178D24C;
    *(_OWORD *)v40 = xmmword_14178D23C;
    v71 = v40;
    *(_DWORD *)(v40 + 32) = -1363286131;
    v39 = 36;
    goto LABEL_34;
  }
  v61 = v9;
  *(_QWORD *)&v66 = &v61;
  *((_QWORD *)&v66 + 1) = sub_1414AC520;
  sub_14149C0F0(&v63, &unk_14178D218, &v66);
  v71 = *((_QWORD *)&v63 + 1);
  v73 = (_OWORD *)v63;
  v36 = (__int64)v64;
LABEL_36:
  nullsub_1(v38);
  v41 = sub_140001650(18, 1);
  if ( !v41 )
  {
    v74 = 1;
    sub_1416C2D4B(1, 18);
  }
  *(_OWORD *)v41 = *(_OWORD *)aConfigThirdPar;
  v62 = v41;
  *(_WORD *)(v41 + 16) = 31092;
  nullsub_1(v42);
  v43 = sub_140001650(5, 1);
  v72 = v43 == 0;
  if ( !v43 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v43 + 4) = 114;
  v60 = v43;
  *(_DWORD *)v43 = 1869771365;
  sub_140440300((unsigned int)&v63, v69, v70, (unsigned int)&unk_14178CCCE, 3);
  v67 = v64;
  v66 = v63;
  *(_QWORD *)&v63 = &v66;
  *((_QWORD *)&v63 + 1) = sub_1400015F0;
  sub_14149C0F0(&v50, &unk_14178D260, &v63);
  if ( (_QWORD)v66 )
    sub_140001660(*((_QWORD *)&v66 + 1), v66, 1);
  *(_QWORD *)(a1 + 88) = v51;
  *(_OWORD *)(a1 + 72) = v50;
  *(_QWORD *)a1 = 18;
  *(_QWORD *)(a1 + 8) = v62;
  *(_QWORD *)(a1 + 16) = 18;
  *(_QWORD *)(a1 + 24) = 5;
  *(_QWORD *)(a1 + 32) = v60;
  *(_QWORD *)(a1 + 40) = 5;
  *(_QWORD *)(a1 + 48) = v73;
  *(_QWORD *)(a1 + 56) = v71;
  *(_QWORD *)(a1 + 64) = v36;
  *(_BYTE *)(a1 + 96) = 1;
  v44 = v70;
  if ( v70 )
  {
    v45 = (_QWORD *)(v69 + 8);
    do
    {
      v46 = *(v45 - 1);
      if ( v46 )
        sub_140001660(*v45, v46, 1);
      v45 += 3;
      --v44;
    }
    while ( v44 );
  }
  if ( v68 )
    sub_140001660(v69, 24 * v68, 8);
  if ( v56[0] != -1 && v56[0] )
    sub_140001660(v56[1], v56[0], 1);
  v47 = v58;
  if ( v9 )
  {
    v48 = (_QWORD *)(v58 + 8);
    do
    {
      v49 = *(v48 - 1);
      if ( v49 )
        sub_140001660(*v48, v49, 1);
      v48 += 3;
      --v9;
    }
    while ( v9 );
  }
  result = v57;
  if ( v57 )
  {
    v19 = 24 * v57;
    v18 = v47;
    return sub_140001660(v18, v19, 8);
  }
  return result;
}