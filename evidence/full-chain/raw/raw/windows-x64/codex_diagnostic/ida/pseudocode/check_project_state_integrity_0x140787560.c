// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x140787560
// name: check_project_state_integrity
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::check_project_state_integrity | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall check_project_state_integrity(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  _DWORD *v5; // rax
  __int64 v6; // rcx
  _OWORD *v7; // rax
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  bool v20; // zf
  void *v21; // rcx
  _QWORD v23[5]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h]
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+78h] [rbp-8h]
  __int128 v27; // [rsp+80h] [rbp+0h]
  __int64 v28; // [rsp+B0h] [rbp+30h]
  void *v29; // [rsp+B8h] [rbp+38h]
  __int64 v30; // [rsp+C0h] [rbp+40h]
  char v31; // [rsp+C8h] [rbp+48h] BYREF
  char v32; // [rsp+D8h] [rbp+58h] BYREF
  char v33; // [rsp+E8h] [rbp+68h] BYREF
  char v34; // [rsp+F0h] [rbp+70h] BYREF
  char v35; // [rsp+F8h] [rbp+78h] BYREF
  char v36; // [rsp+100h] [rbp+80h] BYREF
  _BYTE v37[16]; // [rsp+108h] [rbp+88h] BYREF
  __int128 v38; // [rsp+118h] [rbp+98h] BYREF
  __int64 v39; // [rsp+128h] [rbp+A8h]
  __int128 v40; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v41; // [rsp+140h] [rbp+C0h]
  __int128 v42; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v43; // [rsp+158h] [rbp+D8h]
  __int128 v44; // [rsp+160h] [rbp+E0h] BYREF
  char *v45; // [rsp+170h] [rbp+F0h]
  __int64 (__fastcall *v46)(); // [rsp+178h] [rbp+F8h]
  char *v47; // [rsp+180h] [rbp+100h]
  __int64 (__fastcall *v48)(); // [rsp+188h] [rbp+108h]
  char *v49; // [rsp+190h] [rbp+110h]
  __int64 (__fastcall *v50)(); // [rsp+198h] [rbp+118h]
  char *v51; // [rsp+1A0h] [rbp+120h]
  __int64 (__fastcall *v52)(); // [rsp+1A8h] [rbp+128h]
  char *v53; // [rsp+1B0h] [rbp+130h]
  __int64 (__fastcall *v54)(); // [rsp+1B8h] [rbp+138h]
  char *v55; // [rsp+1C0h] [rbp+140h]
  __int64 (__fastcall *v56)(); // [rsp+1C8h] [rbp+148h]
  _BYTE *v57; // [rsp+1D0h] [rbp+150h]
  __int64 (__fastcall *v58)(); // [rsp+1D8h] [rbp+158h]
  __int128 v59; // [rsp+1E0h] [rbp+160h] BYREF
  char *v60; // [rsp+1F0h] [rbp+170h]
  __int64 v61; // [rsp+1F8h] [rbp+178h]
  _DWORD *v62; // [rsp+200h] [rbp+180h]
  _OWORD *v63; // [rsp+208h] [rbp+188h]
  __int64 v64; // [rsp+210h] [rbp+190h]

  v64 = -2;
  sub_1404A1A50(v23, a2);
  if ( v26 == -1 )
  {
    v8 = v25;
    if ( v25 )
    {
      nullsub_1(v3);
      v9 = sub_140001650(23, 1);
      if ( !v9 )
        sub_1416C2D4B(1, 23);
      v11 = v9;
      *(_OWORD *)v9 = *(_OWORD *)aProjectStateIn;
      *(_QWORD *)(v9 + 15) = 0x797469726765746ELL;
      nullsub_1(v10);
      v12 = (_DWORD *)sub_140001650(7, 1);
      v61 = v11;
      if ( !v12 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v12 + 3) = 1735289198;
      v62 = v12;
      *v12 = 1852989815;
      nullsub_1(v13);
      v14 = sub_140001650(39, 1);
      if ( !v14 )
        sub_1416C2D4B(1, 39);
      *(_OWORD *)(v14 + 16) = xmmword_14178E9F4;
      *(_OWORD *)v14 = xmmword_14178E9E4;
      v63 = (_OWORD *)v14;
      *(_QWORD *)(v14 + 31) = 0x93BAE58BA8E7BFBAuLL;
      sub_140440300((unsigned int)&v44, v24, v8, (unsigned int)&unk_1417876F9, 3);
      v60 = v45;
      v59 = v44;
      *(_QWORD *)&v44 = &v59;
      *((_QWORD *)&v44 + 1) = sub_1400015F0;
      sub_14149C0F0(&v40, &unk_14178EA0B, &v44);
      if ( (_QWORD)v59 )
        sub_140001660(*((_QWORD *)&v59 + 1), v59, 1);
      *(_QWORD *)(a1 + 88) = v41;
      *(_OWORD *)(a1 + 72) = v40;
      *(_QWORD *)a1 = 23;
      *(_QWORD *)(a1 + 8) = v61;
      *(_QWORD *)(a1 + 16) = 23;
      *(_QWORD *)(a1 + 24) = 7;
      *(_QWORD *)(a1 + 32) = v62;
      *(_QWORD *)(a1 + 40) = 7;
      *(_QWORD *)(a1 + 48) = 39;
      *(_QWORD *)(a1 + 56) = v63;
      *(_QWORD *)(a1 + 64) = 39;
      *(_BYTE *)(a1 + 96) = 0;
    }
    else if ( v37[10] )
    {
      nullsub_1(v3);
      v15 = sub_140001650(23, 1);
      if ( !v15 )
        sub_1416C2D4B(1, 23);
      *(_OWORD *)v15 = *(_OWORD *)aProjectStateIn;
      v61 = v15;
      *(_QWORD *)(v15 + 15) = 0x797469726765746ELL;
      nullsub_1(0x797469726765746ELL);
      v16 = sub_140001650(5, 1);
      if ( !v16 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v16 + 4) = 114;
      v62 = (_DWORD *)v16;
      *(_DWORD *)v16 = 1869771365;
      nullsub_1(v17);
      v18 = 24;
      v19 = sub_140001650(24, 1);
      if ( !v19 )
        sub_1416C2D4B(1, 24);
      *(_OWORD *)v19 = xmmword_14178E945;
      v20 = v28 == -1;
      v21 = &unk_14178E95D;
      if ( v28 != -1 )
        v21 = v29;
      v63 = (_OWORD *)v19;
      *(_QWORD *)(v19 + 16) = 0xB8B8E582BCE595BCuLL;
      if ( !v20 )
        v18 = v30;
      *(_QWORD *)&v59 = v21;
      *((_QWORD *)&v59 + 1) = v18;
      *(_QWORD *)&v44 = &v59;
      *((_QWORD *)&v44 + 1) = sub_14041F680;
      v45 = &v31;
      v46 = sub_1414AC520;
      v47 = &v32;
      v48 = sub_1414AC520;
      v49 = &v33;
      v50 = sub_1414AC520;
      v51 = &v35;
      v52 = sub_1414AC520;
      v53 = &v36;
      v54 = sub_1414AC520;
      v55 = &v34;
      v56 = sub_1414AC520;
      v57 = v37;
      v58 = sub_1414AC520;
      sub_14149C0F0(&v38, &unk_14178E975, &v44);
      *(_QWORD *)(a1 + 88) = v39;
      *(_OWORD *)(a1 + 72) = v38;
      *(_QWORD *)a1 = 23;
      *(_QWORD *)(a1 + 8) = v61;
      *(_QWORD *)(a1 + 16) = 23;
      *(_QWORD *)(a1 + 24) = 5;
      *(_QWORD *)(a1 + 32) = v62;
      *(_QWORD *)(a1 + 40) = 5;
      *(_QWORD *)(a1 + 48) = 24;
      *(_QWORD *)(a1 + 56) = v63;
      *(_QWORD *)(a1 + 64) = 24;
      *(_BYTE *)(a1 + 96) = 1;
    }
    else
    {
      sub_140797030(a1, (unsigned int)aProjectStateIn, 23, (unsigned int)&unk_14178E92D, 24);
    }
  }
  else
  {
    v59 = v27;
    nullsub_1(v3);
    v4 = sub_140001650(23, 1);
    if ( !v4 )
      sub_1416C2D4B(1, 23);
    *(_OWORD *)v4 = *(_OWORD *)aProjectStateIn;
    v61 = v4;
    *(_QWORD *)(v4 + 15) = 0x797469726765746ELL;
    nullsub_1(0x797469726765746ELL);
    v5 = (_DWORD *)sub_140001650(7, 1);
    if ( !v5 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v5 + 3) = 1735289198;
    v62 = v5;
    *v5 = 1852989815;
    nullsub_1(v6);
    v7 = (_OWORD *)sub_140001650(30, 1);
    if ( !v7 )
      sub_1416C2D4B(1, 30);
    *(_OWORD *)((char *)v7 + 14) = *(__int128 *)((char *)&xmmword_14178EA26 + 14);
    v63 = v7;
    *v7 = xmmword_14178EA26;
    *(_QWORD *)&v44 = &v59;
    *((_QWORD *)&v44 + 1) = sub_14041F680;
    sub_14149C0F0(&v42, &unk_14178EA44, &v44);
    *(_QWORD *)(a1 + 88) = v43;
    *(_OWORD *)(a1 + 72) = v42;
    *(_QWORD *)a1 = 23;
    *(_QWORD *)(a1 + 8) = v61;
    *(_QWORD *)(a1 + 16) = 23;
    *(_QWORD *)(a1 + 24) = 7;
    *(_QWORD *)(a1 + 32) = v62;
    *(_QWORD *)(a1 + 40) = 7;
    *(_QWORD *)(a1 + 48) = 30;
    *(_QWORD *)(a1 + 56) = v63;
    *(_QWORD *)(a1 + 64) = 30;
    *(_BYTE *)(a1 + 96) = 0;
  }
  return sub_14043F000(v23);
}