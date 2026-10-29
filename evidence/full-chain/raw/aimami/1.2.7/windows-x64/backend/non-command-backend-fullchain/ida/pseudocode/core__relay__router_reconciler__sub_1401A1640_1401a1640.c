// win 1.2.7 | module src/core/relay/router_reconciler.rs | ea 0x1401a1640 | name sub_1401A1640
// win 1.2.7 | module src/core/relay/router_reconciler.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401A1640(__int128 *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _OWORD *v4; // r12
  __int64 v5; // r13
  __m128i v6; // xmm0
  char *v7; // r14
  char v8; // al
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __m128i *v11; // rbx
  __m128i *v12; // r9
  __int64 result; // rax
  __m128i v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // r15
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  __m128i v20; // xmm0
  char v21; // al
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __m128i v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rdi
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int128 v33; // xmm3
  _BYTE v34[24]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v35[24]; // [rsp+48h] [rbp-38h] BYREF
  _OWORD v36[6]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v37; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v38; // [rsp+D0h] [rbp+50h]
  _QWORD *v39; // [rsp+D8h] [rbp+58h]
  __int128 v40; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v41; // [rsp+F0h] [rbp+70h]
  __int128 v42; // [rsp+100h] [rbp+80h]
  __int128 v43; // [rsp+110h] [rbp+90h]
  __int128 v44; // [rsp+120h] [rbp+A0h]
  __int128 v45; // [rsp+130h] [rbp+B0h]
  _QWORD *v46; // [rsp+140h] [rbp+C0h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+148h] [rbp+C8h]
  __int128 *v48; // [rsp+150h] [rbp+D0h]
  __int64 (__fastcall *v49)(_QWORD, _QWORD); // [rsp+158h] [rbp+D8h]
  __int128 v50; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v51; // [rsp+170h] [rbp+F0h]
  __int128 v52; // [rsp+180h] [rbp+100h]
  __int128 v53; // [rsp+190h] [rbp+110h]
  __int128 v54; // [rsp+1A0h] [rbp+120h]
  __int128 v55; // [rsp+1B0h] [rbp+130h]
  _QWORD v56[2]; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v57; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v58; // [rsp+1E0h] [rbp+160h]
  __int128 v59; // [rsp+1F0h] [rbp+170h]
  __int128 v60; // [rsp+200h] [rbp+180h]
  __int128 v61; // [rsp+210h] [rbp+190h]
  __int128 v62; // [rsp+220h] [rbp+1A0h]
  __int64 v63; // [rsp+230h] [rbp+1B0h]
  char v64; // [rsp+23Fh] [rbp+1BFh] BYREF
  __int64 v65; // [rsp+240h] [rbp+1C0h]

  v65 = -2;
  v3 = *(_QWORD **)a2;
  v4 = *(_OWORD **)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(__m128i *)(v5 + 8);
  v7 = *(char **)(a2 + 24);
  v8 = *v7;
  v9 = v4[8];
  v10 = *(_OWORD *)((char *)v4 + 152);
  v58 = *(_OWORD *)((char *)v4 + 104);
  v59 = v9;
  v57 = v6;
  LOBYTE(v61) = 1;
  BYTE1(v61) = v8;
  v60 = v10;
  v11 = *(__m128i **)(a2 + 32);
  v12 = v11;
  if ( v11->m128i_i32[0] == -1 )
    v12 = (__m128i *)v11->m128i_i64[1];
  result = sub_14017A0F0(a1, v3, &v57, v12);
  if ( *(_DWORD *)a1 != -1 )
  {
    v36[5] = a1[5];
    v36[4] = a1[4];
    v14 = (__m128i)*a1;
    v15 = a1[1];
    v16 = a1[2];
    v36[3] = a1[3];
    v36[2] = v16;
    v36[1] = v15;
    v36[0] = v14;
    v56[0] = aRouterOnConfig;
    v56[1] = 21;
    result = sub_14022A4A0(v36);
    if ( (_BYTE)result )
    {
      sub_140229720(&v50, v36);
      v57.m128i_i64[0] = (__int64)v56;
      v57.m128i_i64[1] = (__int64)sub_140186EE0;
      *(_QWORD *)&v58 = &v50;
      *((_QWORD *)&v58 + 1) = sub_1400015F0;
      sub_1416ABFD0(v35, &unk_1419D5782, &v57);
      if ( (_QWORD)v50 )
        sub_140001660(*((_QWORD *)&v50 + 1), v50, 1);
      sub_14019B500((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe, 19, (__int64)v35);
      sub_140EC2070(&v40);
      v63 = v40;
      if ( (_QWORD)v40 == -1 )
      {
        LODWORD(v50) = DWORD2(v40);
        v57.m128i_i64[0] = (__int64)v56;
        v57.m128i_i64[1] = (__int64)sub_140186EE0;
        *(_QWORD *)&v58 = &v50;
        *((_QWORD *)&v58 + 1) = sub_1416BBD00;
        sub_1416ABFD0(v34, &unk_1419D57BA, &v57);
        sub_14019B500((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe_0, 32, (__int64)v34);
        v39 = v3;
        v63 = *((_QWORD *)&v41 + 1);
        v17 = v42;
        if ( (_QWORD)v42 )
        {
          v18 = (_QWORD *)(v63 + 8);
          do
          {
            v19 = *(v18 - 1);
            if ( v19 )
              sub_140001660(*v18, v19, 1);
            v18 += 3;
            --v17;
          }
          while ( v17 );
        }
        v3 = v39;
        if ( (_QWORD)v41 )
          sub_140001660(v63, 24 * v41, 8);
      }
      else
      {
        v55 = v45;
        v54 = v44;
        v53 = v43;
        v52 = v42;
        v51 = v41;
        v50 = v40;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v46 = v56;
          v47 = sub_140186EE0;
          v48 = &v50;
          v49 = sub_14104A7D0;
          *(_QWORD *)&v60 = 2;
          *((_QWORD *)&v60 + 1) = aCodexmateLibCo_18;
          *(_QWORD *)&v61 = 45;
          *(_QWORD *)&v62 = &unk_1419D57EC;
          *((_QWORD *)&v62 + 1) = &v46;
          v57.m128i_i64[0] = 0;
          v57.m128i_i64[1] = (__int64)aCodexmateLibCo_18;
          v58 = 0x2Du;
          *(_QWORD *)&v59 = aSrcCoreRelayRo;
          *((_QWORD *)&v59 + 1) = 35;
          *((_QWORD *)&v61 + 1) = 0x2E500000001LL;
          sub_1414D53A0(&v64, &v57);
        }
        sub_1401954F0(&v50);
      }
      sub_141696800(0, 700000000);
      v20 = *(__m128i *)(v5 + 8);
      v21 = *v7;
      v22 = v4[8];
      v23 = *(_OWORD *)((char *)v4 + 152);
      v58 = *(_OWORD *)((char *)v4 + 104);
      v59 = v22;
      v57 = v20;
      LOBYTE(v61) = 1;
      BYTE1(v61) = v21;
      v60 = v23;
      if ( v11->m128i_i32[0] == -1 )
        v11 = (__m128i *)v11->m128i_i64[1];
      sub_14017A0F0(a1, v3, &v57, v11);
      if ( *(_DWORD *)a1 != -1 )
      {
        v62 = a1[5];
        v61 = a1[4];
        v24 = (__m128i)*a1;
        v25 = a1[1];
        v26 = a1[2];
        v60 = a1[3];
        v59 = v26;
        v58 = v25;
        v57 = v24;
        if ( (unsigned __int8)sub_14022A4A0(&v57) )
        {
          sub_140229720(&v46, v36);
          sub_140229720(&v40, &v57);
          *(_QWORD *)&v50 = v56;
          *((_QWORD *)&v50 + 1) = sub_140186EE0;
          *(_QWORD *)&v51 = &v46;
          *((_QWORD *)&v51 + 1) = sub_1400015F0;
          *(_QWORD *)&v52 = &v40;
          *((_QWORD *)&v52 + 1) = sub_1400015F0;
          sub_1416ABFD0(&v37, &unk_1419D676D, &v50);
          if ( (_QWORD)v40 )
            sub_140001660(*((_QWORD *)&v40 + 1), v40, 1);
          if ( v46 )
            sub_140001660(v47, v46, 1);
          v40 = v37;
          *(_QWORD *)&v41 = v38;
          v27 = 10;
          sub_1401954F0(&v57);
        }
        else
        {
          v27 = v57.m128i_i64[0];
          v40 = *(__int128 *)((char *)a1 + 8);
          *(_QWORD *)&v41 = *((_QWORD *)a1 + 3);
          v28 = a1[3];
          v29 = a1[4];
          v30 = a1[5];
          v50 = a1[2];
          v51 = v28;
          v52 = v29;
          v53 = v30;
        }
        *(_QWORD *)a1 = v27;
        *(__int128 *)((char *)a1 + 8) = v40;
        *((_QWORD *)a1 + 3) = v41;
        v31 = v51;
        v32 = v52;
        v33 = v53;
        a1[2] = v50;
        a1[3] = v31;
        a1[4] = v32;
        a1[5] = v33;
      }
      return sub_1401954F0(v36);
    }
  }
  return result;
}
