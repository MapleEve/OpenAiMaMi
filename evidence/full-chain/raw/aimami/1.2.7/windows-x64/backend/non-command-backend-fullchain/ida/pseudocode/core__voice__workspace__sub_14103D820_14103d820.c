// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x14103d820 | name sub_14103D820
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14103D820(__int64 a1, __int64 a2, __int64 a3)
{
  __int32 v4; // edx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i *v9; // r14
  void *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r12
  _OWORD *v19; // rax
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r12
  _QWORD *v30; // rax
  void *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 result; // rax
  __m128i v43; // [rsp+28h] [rbp-58h] BYREF
  __int64 v44; // [rsp+38h] [rbp-48h]
  __int64 v45; // [rsp+40h] [rbp-40h]
  __int64 v46; // [rsp+48h] [rbp-38h]
  __int64 v47; // [rsp+50h] [rbp-30h]
  __int64 v48; // [rsp+58h] [rbp-28h]
  __int64 v49; // [rsp+60h] [rbp-20h]
  __int64 v50; // [rsp+68h] [rbp-18h]
  __int64 v51; // [rsp+70h] [rbp-10h]
  __int64 v52; // [rsp+88h] [rbp+8h]
  __int64 v53; // [rsp+A0h] [rbp+20h]
  _QWORD *v54; // [rsp+A8h] [rbp+28h]
  __int64 v55; // [rsp+B0h] [rbp+30h]
  __int64 v56; // [rsp+B8h] [rbp+38h]
  char v57; // [rsp+C0h] [rbp+40h]
  __m128i v58; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v59; // [rsp+D8h] [rbp+58h]
  __int64 v60; // [rsp+E0h] [rbp+60h]
  __int64 v61; // [rsp+E8h] [rbp+68h]
  __int64 v62; // [rsp+F0h] [rbp+70h]
  __int64 v63; // [rsp+F8h] [rbp+78h]
  __int64 v64; // [rsp+100h] [rbp+80h]
  __int64 v65; // [rsp+108h] [rbp+88h]
  __int64 v66; // [rsp+110h] [rbp+90h]
  __int64 v67; // [rsp+128h] [rbp+A8h]
  __int64 v68; // [rsp+140h] [rbp+C0h]
  _OWORD *v69; // [rsp+148h] [rbp+C8h]
  __int64 v70; // [rsp+150h] [rbp+D0h]
  __int64 v71; // [rsp+158h] [rbp+D8h]
  char v72; // [rsp+160h] [rbp+E0h]
  __int128 v73; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v74; // [rsp+178h] [rbp+F8h]
  __int64 v75; // [rsp+180h] [rbp+100h]
  __int64 v76; // [rsp+188h] [rbp+108h]
  __int64 v77; // [rsp+190h] [rbp+110h]
  __m128i *v78; // [rsp+198h] [rbp+118h]
  __int64 v79; // [rsp+1A0h] [rbp+120h]

  v79 = -2;
  v58.m128i_i32[0] = sub_141683E80(a1, a2, a3);
  v58.m128i_i32[1] = v4;
  sub_141683E30(&v43, &v58, 3577643008LL, 27111902);
  if ( v43.m128i_i8[0] )
    v5 = 0;
  else
    v5 = v43.m128i_i64[1];
  sub_1410384A0(&v73, v5);
  nullsub_1(v6);
  v7 = sub_140001650(480, 8);
  if ( !v7 )
    sub_141938D11(8, 480);
  v9 = (__m128i *)v7;
  nullsub_1(v8);
  v10 = (void *)sub_140001650(19, 1);
  if ( !v10 )
  {
    v78 = v9;
    sub_141938D2B(1, 19);
  }
  v12 = (__int64)v10;
  qmemcpy(v10, "builtin-vocab-codex", 19);
  nullsub_1(v11);
  v13 = sub_140001650(12, 1);
  if ( !v13 )
  {
    v77 = v12;
    v78 = v9;
    sub_141938D2B(1, 12);
  }
  v15 = v13;
  *(_QWORD *)v13 = 0x85E5A6B8E5A389E6uLL;
  *(_DWORD *)(v13 + 8) = -1349065077;
  nullsub_1(v14);
  v16 = sub_140001650(5, 1);
  if ( !v16 )
  {
    v76 = v15;
    v77 = v12;
    v78 = v9;
    sub_141938D2B(1, 5);
  }
  v18 = v16;
  *(_BYTE *)(v16 + 4) = 120;
  *(_DWORD *)v16 = 1701080899;
  nullsub_1(v17);
  v19 = (_OWORD *)sub_140001650(30, 1);
  if ( !v19 )
  {
    v75 = v18;
    v76 = v15;
    v77 = v12;
    v78 = v9;
    sub_141938D2B(1, 30);
  }
  *(_OWORD *)((char *)v19 + 14) = *(__int128 *)((char *)&xmmword_141A7198A + 14);
  *v19 = xmmword_141A7198A;
  v58.m128i_i64[0] = 19;
  v58.m128i_i64[1] = v12;
  v59 = 19;
  v60 = 12;
  v61 = v15;
  v62 = 12;
  v63 = 5;
  v64 = v18;
  v65 = 5;
  v72 = 0;
  v66 = -1;
  v67 = -1;
  v68 = 30;
  v69 = v19;
  v70 = 30;
  v71 = v5;
  nullsub_1(v20);
  v21 = (void *)sub_140001650(20, 1);
  if ( !v21 )
  {
    v78 = v9;
    sub_141938D2B(1, 20);
  }
  v23 = (__int64)v21;
  qmemcpy(v21, "builtin-vocab-aimami", 20);
  nullsub_1(v22);
  v24 = sub_140001650(9, 1);
  if ( !v24 )
  {
    v77 = v23;
    v78 = v9;
    sub_141938D2B(1, 9);
  }
  v26 = v24;
  *(_QWORD *)v24 = 0x92E588A6E5B188E7uLL;
  *(_BYTE *)(v24 + 8) = -86;
  nullsub_1(v25);
  v27 = sub_140001650(6, 1);
  if ( !v27 )
  {
    v76 = v26;
    v77 = v23;
    v78 = v9;
    sub_141938D2B(1, 6);
  }
  v29 = v27;
  *(_WORD *)(v27 + 4) = 26957;
  *(_DWORD *)v27 = 1632463169;
  nullsub_1(v28);
  v30 = (_QWORD *)sub_140001650(15, 1);
  if ( !v30 )
  {
    v75 = v29;
    v76 = v26;
    v77 = v23;
    v78 = v9;
    sub_141938D2B(1, 15);
  }
  *(_QWORD *)((char *)v30 + 7) = 0x84B0E5A098E68D90uLL;
  *v30 = 0x90E58C89E78193E5uLL;
  v43.m128i_i64[0] = 20;
  v43.m128i_i64[1] = v23;
  v44 = 20;
  v45 = 9;
  v46 = v26;
  v47 = 9;
  v48 = 6;
  v49 = v29;
  v50 = 6;
  v57 = 1;
  v51 = -1;
  v52 = -1;
  v53 = 15;
  v54 = v30;
  v55 = 15;
  v56 = v5;
  nullsub_1(0x90E58C89E78193E5uLL);
  v31 = (void *)sub_140001650(19, 1);
  if ( !v31 )
  {
    v78 = v9;
    sub_141938D2B(1, 19);
  }
  v33 = (__int64)v31;
  qmemcpy(v31, "builtin-vocab-tauri", 19);
  nullsub_1(v32);
  v34 = sub_140001650(6, 1);
  if ( !v34 )
  {
    v77 = v33;
    v78 = v9;
    sub_141938D2B(1, 6);
  }
  v36 = v34;
  *(_WORD *)(v34 + 4) = -24943;
  *(_DWORD *)v34 = -409433626;
  nullsub_1(v35);
  v37 = sub_140001650(5, 1);
  if ( !v37 )
  {
    v76 = v36;
    v77 = v33;
    v78 = v9;
    sub_141938D2B(1, 5);
  }
  v39 = v37;
  *(_BYTE *)(v37 + 4) = 105;
  *(_DWORD *)v37 = 1920295252;
  nullsub_1(v38);
  v40 = sub_140001650(21, 1);
  if ( !v40 )
  {
    v75 = v39;
    v76 = v36;
    v77 = v33;
    v78 = v9;
    sub_141938D2B(1, 21);
  }
  v41 = v40;
  *(_OWORD *)v40 = xmmword_141A719CF;
  *(_QWORD *)(v40 + 13) = 0xB69EE686A1E6A29DuLL;
  sub_1418F44E0(v9, &v58, 0xA0u);
  sub_1418F44E0(v9 + 10, &v43, 0xA0u);
  v9[20].m128i_i64[0] = 19;
  v9[20].m128i_i64[1] = v33;
  v9[21].m128i_i64[0] = 19;
  v9[21].m128i_i64[1] = 6;
  v9[22].m128i_i64[0] = v36;
  v9[22].m128i_i64[1] = 6;
  v9[23].m128i_i64[0] = 5;
  v9[23].m128i_i64[1] = v39;
  v9[24].m128i_i64[0] = 5;
  v9[24].m128i_i64[1] = -1;
  v9[26].m128i_i64[0] = -1;
  v9[27].m128i_i64[1] = 21;
  v9[28].m128i_i64[0] = v41;
  v9[28].m128i_i64[1] = 21;
  v9[29].m128i_i64[0] = v5;
  v9[29].m128i_i8[8] = 0;
  *(_DWORD *)(a1 + 136) = 1;
  *(_QWORD *)(a1 + 128) = v5;
  *(_OWORD *)a1 = v73;
  result = v74;
  *(_QWORD *)(a1 + 16) = v74;
  *(_QWORD *)(a1 + 24) = 3;
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 40) = 3;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 8;
  *(_OWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 8;
  *(_QWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 96) = -1;
  return result;
}
