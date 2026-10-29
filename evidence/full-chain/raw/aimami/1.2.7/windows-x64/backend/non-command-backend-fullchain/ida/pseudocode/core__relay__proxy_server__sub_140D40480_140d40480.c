// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d40480 | name sub_140D40480
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D40480(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // r14
  const __m128i *v10; // r13
  _BYTE *v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  const __m128i *v14; // r12
  __int64 v15; // r14
  __int64 v16; // rax
  const __m128i *v17; // rcx
  __int64 v18; // rdx
  const __m128i *i; // rax
  __int64 *v20; // rdx
  __int64 v21; // rax
  unsigned __int128 v22; // kr00_16
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  bool v26; // cf
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  char result; // al
  __int64 (__fastcall **v31)(); // r13
  __int64 v32; // rdx
  const __m128i *v33; // r13
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // r15
  char v37; // bl
  char v38; // al
  int v39; // edx
  bool v40; // zf
  unsigned __int64 v41; // rbx
  __int64 v42; // rdx
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  __int128 v45; // xmm3
  _QWORD v46[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v47; // [rsp+60h] [rbp-20h]
  __int128 v48; // [rsp+70h] [rbp-10h]
  __int128 v49; // [rsp+80h] [rbp+0h]
  __int128 v50; // [rsp+90h] [rbp+10h]
  __int128 v51; // [rsp+A0h] [rbp+20h]
  const __m128i *v52; // [rsp+B0h] [rbp+30h]
  _QWORD *v53; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v54; // [rsp+C8h] [rbp+48h] BYREF
  __m128i v55; // [rsp+D0h] [rbp+50h] BYREF
  _BYTE v56[104]; // [rsp+E0h] [rbp+60h] BYREF
  const __m128i *v57; // [rsp+148h] [rbp+C8h]
  const __m128i *v58; // [rsp+158h] [rbp+D8h]
  _QWORD *v59; // [rsp+160h] [rbp+E0h]
  __int64 v60; // [rsp+168h] [rbp+E8h]
  const __m128i *v61; // [rsp+178h] [rbp+F8h]
  const __m128i *v62; // [rsp+180h] [rbp+100h]
  __int64 (__fastcall **v63)(); // [rsp+188h] [rbp+108h] BYREF
  __int64 v64; // [rsp+190h] [rbp+110h]
  _QWORD *v65; // [rsp+198h] [rbp+118h]
  const __m128i *v66; // [rsp+1A0h] [rbp+120h]
  char v67; // [rsp+1AFh] [rbp+12Fh] BYREF
  _QWORD *v68; // [rsp+1B0h] [rbp+130h]
  const __m128i *v69; // [rsp+1B8h] [rbp+138h]
  _QWORD *v70; // [rsp+1C0h] [rbp+140h]
  const __m128i *v71; // [rsp+1C8h] [rbp+148h]
  __int64 v72; // [rsp+1D0h] [rbp+150h]

  v72 = -2;
  v7 = *(unsigned __int8 *)(a2 + 489);
  v71 = (const __m128i *)a2;
  switch ( v7 )
  {
    case 0LL:
      v8 = *(_BYTE *)(a2 + 488);
      *(_BYTE *)(a2 + 490) = v8;
      v9 = 0x20000000;
      if ( v8 )
        v9 = 0x100000;
      v10 = (const __m128i *)(a2 + 136);
      sub_1418F44E0((__m128i *)(a2 + 136), (const __m128i *)a2, 0x88u);
      *(_QWORD *)(a2 + 272) = v9;
      v11 = (_BYTE *)(a2 + 480);
      *(_BYTE *)(a2 + 480) = 0;
LABEL_7:
      *(_WORD *)(a2 + 481) = 1;
      v3 = a2 + 280;
      sub_1418F44E0((__m128i *)(a2 + 280), v10, 0x88u);
      *(_QWORD *)(a2 + 416) = v9;
      v58 = v10;
      v12 = sub_141234880(a2 + 280);
      v14 = v71;
      if ( v12 == 1 )
      {
        v15 = 2;
        if ( v13 > v71[26].m128i_i64[0] )
        {
          v69 = v10;
          if ( v71[30].m128i_i8[1] )
            goto LABEL_38;
          goto LABEL_41;
        }
      }
      v71[26].m128i_i64[1] = 1;
      v14[27] = 0;
      v14[28].m128i_i64[0] = 1;
      v14[30].m128i_i8[2] = 1;
      v14[30].m128i_i8[1] = 0;
      sub_1418F44E0(&v55, (const __m128i *)v3, 0x88u);
      v69 = v10;
      v62 = v10;
      v16 = sub_1410D5D80(&v55);
      v17 = v71;
      v71[28].m128i_i64[1] = v16;
      v17[29].m128i_i64[0] = v18;
      for ( i = v17; ; i = v71 )
      {
        v20 = &i[28].m128i_i64[1];
        i[29].m128i_i64[1] = (__int64)&i[28].m128i_i64[1];
LABEL_17:
        sub_14036AA40(&v55, v20, a3);
        if ( v55.m128i_i64[0] == 2 )
        {
          *v11 = 3;
          *(_QWORD *)a1 = -2;
          result = 3;
          goto LABEL_66;
        }
        v21 = v55.m128i_i64[1];
        v22 = *(_OWORD *)v56;
        v14 = v71;
        if ( v55.m128i_i32[0] != 1 )
          break;
        if ( !v55.m128i_i64[1] )
        {
          v63 = *(__int64 (__fastcall ***)())v56;
          v70 = *(_QWORD **)v56;
          LOBYTE(v3) = sub_14122E5A0(&v63);
          sub_140D19140(v70);
          v15 = (unsigned __int8)v3;
          goto LABEL_33;
        }
        *(_OWORD *)v56 = *(_OWORD *)&v56[8];
        v55.m128i_i64[0] = v55.m128i_i64[1];
        v3 = v22 >> 64;
        v55.m128i_i64[1] = v22;
        v23 = v71[26].m128i_u64[0];
        v24 = v71[27].m128i_u64[0];
        v25 = 0;
        v26 = v23 < v24;
        v27 = v23 - v24;
        if ( !v26 )
          v25 = v27;
        if ( *((_QWORD *)&v22 + 1) > v25 )
        {
          v15 = 2;
          (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(v21 + 32))(&v56[8], v22, *((_QWORD *)&v22 + 1));
LABEL_33:
          v70 = (_QWORD *)v71[28].m128i_i64[1];
          v68 = (_QWORD *)v71[29].m128i_i64[0];
          if ( *v68 )
            ((void (__fastcall *)(_QWORD *))*v68)(v70);
          v32 = v68[1];
          if ( v32 )
            sub_140001660(v70, v32, v68[2]);
          v33 = v69;
          v61 = v69;
          sub_1416547E0(&v71[26].m128i_u64[1]);
          v14 = v71;
          v71[30].m128i_i8[2] = 0;
          v69 = v33;
          if ( v14[30].m128i_i8[1] )
          {
LABEL_38:
            sub_140402120(&v14[17].m128i_u64[1]);
            v14 = v71;
            a3 = (_QWORD *)v71[25].m128i_i64[1];
            if ( *a3 )
              sub_140001660(a3[1], *a3, 1);
            sub_140001660(a3, 88, 8);
          }
LABEL_41:
          v14[30].m128i_i8[1] = 0;
          v31 = nullptr;
          goto LABEL_42;
        }
        if ( *((_QWORD *)&v22 + 1) > v71[27].m128i_i64[1] - v24 )
        {
          LOBYTE(v25) = 1;
          sub_141654860(&v71[26].m128i_u64[1], *((_QWORD *)&v22 + 1), v25);
          v24 = v14[27].m128i_u64[0];
        }
        sub_1418F44E0((__m128i *)(v14[26].m128i_i64[1] + v24), (const __m128i *)v22, *((unsigned __int64 *)&v22 + 1));
        v28 = v14[27].m128i_i64[0];
        v29 = v14[27].m128i_i64[1] - v28;
        if ( *((_QWORD *)&v22 + 1) > v29 )
        {
          v63 = *((__int64 (__fastcall ***)())&v22 + 1);
          v64 = v29;
          sub_1419363E0(&v63);
        }
        v14[27].m128i_i64[0] = *((_QWORD *)&v22 + 1) + v28;
        (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(v55.m128i_i64[0] + 32))(
          &v56[8],
          v55.m128i_i64[1],
          *(_QWORD *)v56);
      }
      v71[30].m128i_i8[2] = 0;
      v15 = v14[26].m128i_i64[1];
      a3 = (_QWORD *)v14[27].m128i_i64[0];
      v3 = v14[28].m128i_u64[0];
      if ( (v3 & 1) != 0 )
      {
        v41 = v3 >> 5;
        v46[0] = v41 + v14[27].m128i_i64[1];
        v46[1] = v15 - v41;
        v46[2] = (char *)a3 + v41;
        sub_141654680(&v63, v46);
        v54 = v41;
        a3 = (_QWORD *)((char *)v65 - v41);
        if ( (unsigned __int64)v65 < v41 )
        {
          v70 = v65;
          v53 = v65;
          v55.m128i_i64[0] = (__int64)&v54;
          v55.m128i_i64[1] = (__int64)sub_140185A90;
          *(_QWORD *)v56 = &v53;
          *(_QWORD *)&v56[8] = sub_140185A90;
          sub_1419392A0(&unk_141A4EA82, &v55, &off_141A4EB10);
        }
        v31 = v63;
        v15 = v64 + v41;
        v3 = (unsigned __int64)v66;
        v14 = v71;
      }
      else
      {
        v31 = off_1421E7180;
      }
      v70 = (_QWORD *)v14[28].m128i_i64[1];
      v68 = (_QWORD *)v14[29].m128i_i64[0];
      if ( *v68 )
        ((void (__fastcall *)(_QWORD *))*v68)(v70);
      v42 = v68[1];
      if ( v42 )
        sub_140001660(v70, v42, v68[2]);
      *(__int16 *)((char *)v71[30].m128i_i16 + 1) = 0;
LABEL_42:
      *v11 = 1;
      sub_140D11B60(v69);
      if ( v31 )
      {
        v35 = a3;
        v36 = -1;
        goto LABEL_65;
      }
      v37 = v71[30].m128i_i8[10];
      v63 = nullptr;
      v64 = 1;
      v65 = nullptr;
      *(_QWORD *)v56 = 1610612768;
      v55.m128i_i64[0] = (__int64)&v63;
      v55.m128i_i64[1] = (__int64)&off_141A4F8C0;
      if ( (_BYTE)v15 )
      {
        if ( (unsigned __int8)v15 == 2 )
          v38 = sub_1416B24B0(&v55, aUpstreamBodyEx, 40);
        else
          v38 = sub_1416B24B0(&v55, aReadUpstreamBo_0, 28);
      }
      else
      {
        v38 = sub_1416B24B0(&v55, aReadUpstreamBo, 25);
      }
      if ( v38 )
        sub_141939040(
          (unsigned int)aADisplayImplem_8,
          55,
          (unsigned int)&v67,
          (unsigned int)&unk_141A49B48,
          (__int64)&off_141A4F978);
      v69 = (const __m128i *)v63;
      LOWORD(v39) = 502;
      v70 = (_QWORD *)v64;
      v68 = v65;
      sub_140DAFCE0((unsigned int)&v55, v39, v64, (_DWORD)v65, (__int64)aProxyUpstreamB, 19);
      v40 = (_BYTE)v15 == 2;
      v15 = v55.m128i_i64[1];
      if ( v40 || (v37 & 1) != 0 )
      {
        v31 = (__int64 (__fastcall **)())v55.m128i_i64[0];
        v3 = *(_QWORD *)&v56[8];
        v59 = *(_QWORD **)v56;
        v47 = *(_OWORD *)&v56[16];
        v48 = *(_OWORD *)&v56[32];
        v49 = *(_OWORD *)&v56[48];
        v50 = *(_OWORD *)&v56[64];
        v51 = *(_OWORD *)&v56[80];
        v52 = *(const __m128i **)&v56[96];
        v14 = v57;
        v36 = 5;
        if ( v69 )
        {
          a3 = v70;
          sub_140001660(v70, v69, 1);
          v35 = v59;
          goto LABEL_64;
        }
        v35 = v59;
      }
      else
      {
        v31 = (__int64 (__fastcall **)())v55.m128i_i64[1];
        v36 = v55.m128i_i64[0];
        v15 = *(_QWORD *)v56;
        v3 = *(_QWORD *)&v56[16];
        v47 = *(_OWORD *)&v56[24];
        v48 = *(_OWORD *)&v56[40];
        v49 = *(_OWORD *)&v56[56];
        v50 = *(_OWORD *)&v56[72];
        v51 = *(_OWORD *)&v56[88];
        v52 = v57;
        v35 = *(_QWORD **)&v56[8];
        v14 = v69;
      }
      a3 = v70;
LABEL_64:
      v34 = v68;
LABEL_65:
      *(_QWORD *)a1 = v36;
      *(_QWORD *)(a1 + 8) = v31;
      *(_QWORD *)(a1 + 16) = v15;
      *(_QWORD *)(a1 + 24) = v35;
      *(_QWORD *)(a1 + 32) = v3;
      v43 = v48;
      v44 = v49;
      v45 = v50;
      *(_OWORD *)(a1 + 40) = v47;
      *(_OWORD *)(a1 + 56) = v43;
      *(_OWORD *)(a1 + 72) = v44;
      *(_OWORD *)(a1 + 88) = v45;
      *(_OWORD *)(a1 + 104) = v51;
      *(_QWORD *)(a1 + 120) = v52;
      *(_QWORD *)(a1 + 128) = v14;
      *(_QWORD *)(a1 + 136) = a3;
      *(_QWORD *)(a1 + 144) = v34;
      result = 1;
LABEL_66:
      v71[30].m128i_i8[9] = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A48168);
    case 2LL:
      sub_141939400(&off_141A48168);
    case 3LL:
      v11 = (_BYTE *)(a2 + 480);
      v10 = (const __m128i *)(a2 + 136);
      switch ( *(_BYTE *)(a2 + 480) )
      {
        case 0:
          v9 = *(_QWORD *)(a2 + 272);
          goto LABEL_7;
        case 1:
          v60 = a2 + 136;
          sub_1419393E0(&off_141A47D08);
        case 2:
          v60 = a2 + 136;
          sub_141939400(&off_141A47D08);
        case 3:
          v69 = (const __m128i *)(a2 + 136);
          v20 = *(__int64 **)(a2 + 472);
          goto LABEL_17;
      }
  }
}
