// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d94d30 | name sub_140D94D30
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D94D30(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // r14
  char v10; // r13
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v16; // rax
  char v17; // r12
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // [rsp+60h] [rbp-20h] BYREF
  __int128 v30; // [rsp+68h] [rbp-18h]
  __int128 v31; // [rsp+78h] [rbp-8h]
  __int128 v32; // [rsp+88h] [rbp+8h]
  __int128 v33; // [rsp+98h] [rbp+18h]
  __int128 v34; // [rsp+A8h] [rbp+28h]
  __int128 v35; // [rsp+B8h] [rbp+38h]
  __m128i v36[55]; // [rsp+C8h] [rbp+48h] BYREF
  _BYTE v37[8]; // [rsp+440h] [rbp+3C0h] BYREF
  __int64 v38; // [rsp+448h] [rbp+3C8h]
  __int64 v39; // [rsp+450h] [rbp+3D0h]
  _BYTE v40[236]; // [rsp+4C0h] [rbp+440h] BYREF
  char v41; // [rsp+5ACh] [rbp+52Ch]
  char v42; // [rsp+5BEh] [rbp+53Eh]
  _BYTE v43[112]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v44; // [rsp+630h] [rbp+5B0h]
  __int128 v45; // [rsp+638h] [rbp+5B8h]
  __int64 v46; // [rsp+648h] [rbp+5C8h]
  __int128 v47; // [rsp+650h] [rbp+5D0h]
  __int64 v48; // [rsp+660h] [rbp+5E0h]
  char v49; // [rsp+668h] [rbp+5E8h]
  _OWORD v50[6]; // [rsp+9A0h] [rbp+920h] BYREF
  __int128 v51; // [rsp+A08h] [rbp+988h] BYREF
  __int64 v52; // [rsp+A18h] [rbp+998h]
  __int128 *v53; // [rsp+A20h] [rbp+9A0h] BYREF
  __int128 v54; // [rsp+A28h] [rbp+9A8h]
  __int128 v55; // [rsp+A38h] [rbp+9B8h]
  __int128 v56; // [rsp+A48h] [rbp+9C8h]
  __int128 v57; // [rsp+A58h] [rbp+9D8h]
  __int128 v58; // [rsp+A68h] [rbp+9E8h]
  __int128 v59; // [rsp+A78h] [rbp+9F8h]
  __int128 v60; // [rsp+A88h] [rbp+A08h]
  __int128 v61; // [rsp+A98h] [rbp+A18h]
  __int128 v62; // [rsp+AA8h] [rbp+A28h]
  __int128 v63; // [rsp+AB8h] [rbp+A38h]
  __int64 v64; // [rsp+AC8h] [rbp+A48h]
  __int128 v65; // [rsp+AD0h] [rbp+A50h]
  __int128 v66; // [rsp+AE0h] [rbp+A60h]
  __int128 v67; // [rsp+AF0h] [rbp+A70h]
  __int128 v68; // [rsp+B00h] [rbp+A80h]
  __int64 v69; // [rsp+B10h] [rbp+A90h]
  __int128 v70; // [rsp+B20h] [rbp+AA0h]
  __int128 v71; // [rsp+B30h] [rbp+AB0h]
  __int128 v72; // [rsp+B40h] [rbp+AC0h]
  __int128 v73; // [rsp+B50h] [rbp+AD0h]
  __int64 v74; // [rsp+B60h] [rbp+AE0h]
  __int128 v75; // [rsp+B70h] [rbp+AF0h] BYREF
  __int64 v76; // [rsp+B80h] [rbp+B00h]
  __int128 v77; // [rsp+B88h] [rbp+B08h] BYREF
  __int64 v78; // [rsp+B98h] [rbp+B18h]
  __int128 v79; // [rsp+BA0h] [rbp+B20h] BYREF
  __int128 v80; // [rsp+BB0h] [rbp+B30h]
  __int128 v81; // [rsp+BC0h] [rbp+B40h]
  __int128 v82; // [rsp+BD0h] [rbp+B50h]
  __int128 v83; // [rsp+BE0h] [rbp+B60h]
  __int128 v84; // [rsp+BF0h] [rbp+B70h]
  _BYTE v85[104]; // [rsp+C08h] [rbp+B88h] BYREF
  __int64 v86[2]; // [rsp+C70h] [rbp+BF0h] BYREF
  __int128 v87; // [rsp+C80h] [rbp+C00h] BYREF
  __int128 v88; // [rsp+C90h] [rbp+C10h]
  __int128 v89; // [rsp+CA0h] [rbp+C20h]
  __int128 v90; // [rsp+CB0h] [rbp+C30h]
  __int128 v91; // [rsp+CC0h] [rbp+C40h]
  __int128 v92; // [rsp+CD0h] [rbp+C50h]
  __int128 v93; // [rsp+CE0h] [rbp+C60h] BYREF
  __int128 v94; // [rsp+CF0h] [rbp+C70h]
  __int128 v95; // [rsp+D00h] [rbp+C80h]
  __int128 v96; // [rsp+D10h] [rbp+C90h]
  __int128 v97; // [rsp+D20h] [rbp+CA0h]
  __int128 v98; // [rsp+D30h] [rbp+CB0h]
  _BYTE v99[104]; // [rsp+D40h] [rbp+CC0h] BYREF
  __int128 v100; // [rsp+DA8h] [rbp+D28h]
  __int128 v101; // [rsp+DB8h] [rbp+D38h]
  __int128 v102; // [rsp+DC8h] [rbp+D48h]
  __int128 v103; // [rsp+DD8h] [rbp+D58h]
  __int64 v104; // [rsp+DE8h] [rbp+D68h]
  __int64 v105; // [rsp+DF8h] [rbp+D78h]
  __int64 v106; // [rsp+E00h] [rbp+D80h]
  char v107; // [rsp+E0Fh] [rbp+D8Fh] BYREF
  __int64 v108; // [rsp+E10h] [rbp+D90h]

  v108 = -2;
  v86[0] = a3;
  v86[1] = a4;
  sub_140D9A5F0(v37, a2);
  sub_140D81D50((__int64)v43, a2);
  v9 = *(_QWORD *)v43;
  *(_OWORD *)v99 = *(_OWORD *)&v43[8];
  *(_OWORD *)&v99[16] = *(_OWORD *)&v43[24];
  *(_OWORD *)&v99[32] = *(_OWORD *)&v43[40];
  *(_OWORD *)&v99[48] = *(_OWORD *)&v43[56];
  *(_OWORD *)&v99[64] = *(_OWORD *)&v43[72];
  *(_OWORD *)&v99[80] = *(_OWORD *)&v43[88];
  if ( *(_QWORD *)v43 == -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v99[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v99[64];
    v12 = *(_OWORD *)v99;
    v13 = *(_OWORD *)&v99[16];
    v14 = *(_OWORD *)&v99[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v99[48];
    *(_OWORD *)(a1 + 32) = v14;
    *(_OWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
    return sub_1407ADB20(v37);
  }
  sub_1418F44E0(v36, (const __m128i *)&v43[104], 0x378u);
  v30 = *(_OWORD *)v99;
  v31 = *(_OWORD *)&v99[16];
  v32 = *(_OWORD *)&v99[32];
  v33 = *(_OWORD *)&v99[48];
  v34 = *(_OWORD *)&v99[64];
  v35 = *(_OWORD *)&v99[80];
  v29 = v9;
  v10 = v41;
  LOBYTE(v9) = v41 ^ 1;
  v107 = v41 ^ 1;
  v11 = *a2;
  *(_QWORD *)&v79 = a3;
  *((_QWORD *)&v79 + 1) = a4;
  sub_140F6EA90(v99, v11 + 16, v37);
  if ( *(_DWORD *)v99 == -1 )
  {
    v16 = -2;
    if ( v10 )
    {
      sub_1403DCEA0(&v77, v38, v38 + (v39 << 8));
      sub_140229570(&v75, v37);
      v17 = v42;
      if ( v42 )
      {
        sub_1403F7D40(v99, v40);
      }
      else
      {
        *(_QWORD *)v99 = 0;
        *(_QWORD *)&v99[8] = 8;
        *(_QWORD *)&v99[16] = 0;
      }
      v44 = v78;
      *(_OWORD *)&v43[96] = v77;
      v45 = v75;
      v46 = v76;
      v49 = v17;
      v47 = *(_OWORD *)v99;
      v48 = *(_QWORD *)&v99[16];
      *(_QWORD *)v43 = -1;
      sub_1401BDEC0((__int64)v99, (const __m128i *)v43, (__int64)&v29);
      v16 = *(_QWORD *)v99;
      v87 = *(_OWORD *)&v99[8];
      v88 = *(_OWORD *)&v99[24];
      v89 = *(_OWORD *)&v99[40];
      v90 = *(_OWORD *)&v99[56];
      v91 = *(_OWORD *)&v99[72];
      v92 = *(_OWORD *)&v99[88];
      v65 = v100;
      v66 = v101;
      v67 = v102;
      v68 = v103;
      v69 = v104;
      v93 = *(_OWORD *)&v99[8];
      v94 = *(_OWORD *)&v99[24];
      v95 = *(_OWORD *)&v99[40];
      v96 = *(_OWORD *)&v99[56];
      v97 = *(_OWORD *)&v99[72];
      v98 = *(_OWORD *)&v99[88];
      if ( *(_QWORD *)v99 == -2 )
      {
        v18 = v93;
        v19 = v94;
        v20 = v95;
        v21 = v96;
        v79 = v93;
        v80 = v94;
        v81 = v95;
        v82 = v96;
        v22 = v97;
        v83 = v97;
        v84 = v98;
        *(_OWORD *)(a1 + 80) = v98;
        *(_OWORD *)(a1 + 64) = v22;
        *(_OWORD *)(a1 + 48) = v21;
        *(_OWORD *)(a1 + 32) = v20;
        *(_OWORD *)(a1 + 16) = v19;
        *(_OWORD *)a1 = v18;
        goto LABEL_4;
      }
      v74 = v69;
      v73 = v68;
      v72 = v67;
      v71 = v66;
      v70 = v65;
    }
    v79 = v93;
    v80 = v94;
    v81 = v95;
    v82 = v96;
    v83 = v97;
    v84 = v98;
    v60 = v70;
    v61 = v71;
    v62 = v72;
    v63 = v73;
    v64 = v74;
    v59 = v98;
    v58 = v97;
    v57 = v96;
    v56 = v95;
    v55 = v94;
    v54 = v93;
    v53 = (__int128 *)v16;
    *(_QWORD *)v43 = v86;
    *(_QWORD *)&v43[8] = a2;
    *(_QWORD *)&v43[16] = &v29;
    *(_QWORD *)&v43[24] = &v53;
    *(_QWORD *)v99 = a2;
    *(_QWORD *)&v99[8] = &v29;
    *(_QWORD *)&v99[16] = &v107;
    sub_140BCEB80((char)v85, (char)&v29, (__int128 *)(unsigned int)v9, 0, a5, 0, v86[0]);
    if ( *(_DWORD *)v85 == -1 )
    {
      v50[5] = *(_OWORD *)&v85[88];
      v50[4] = *(_OWORD *)&v85[72];
      v50[3] = *(_OWORD *)&v85[56];
      v50[2] = *(_OWORD *)&v85[40];
      v50[1] = *(_OWORD *)&v85[24];
      v50[0] = *(_OWORD *)&v85[8];
      sub_140C1E360(a1, (__int64)v50);
      if ( (_DWORD)v53 == -2 )
        goto LABEL_4;
    }
    else
    {
      if ( v85[97] > 1u || v85[96] >= 2u )
      {
        *(_QWORD *)&v43[96] = *(_QWORD *)&v85[96];
        *(_OWORD *)&v43[80] = *(_OWORD *)&v85[80];
        *(_OWORD *)&v43[64] = *(_OWORD *)&v85[64];
        *(_OWORD *)&v43[48] = *(_OWORD *)&v85[48];
        *(_OWORD *)&v43[32] = *(_OWORD *)&v85[32];
        *(_OWORD *)&v43[16] = *(_OWORD *)&v85[16];
        *(_OWORD *)v43 = *(_OWORD *)v85;
        *(_QWORD *)v99 = v86;
        *(_QWORD *)&v99[8] = sub_140186EE0;
        *(_QWORD *)&v99[16] = v43;
        *(_QWORD *)&v99[24] = sub_140C9DC90;
        sub_1416ABFD0(&v87, &unk_141A4B700, v99);
        v105 = *((_QWORD *)&v87 + 1);
        v106 = v87;
        sub_140D8F270(
          (unsigned int)&v87,
          (_DWORD)a2,
          (unsigned int)&v29,
          (unsigned int)v37,
          *((__int64 *)&v87 + 1),
          v88);
        if ( (_DWORD)v87 == -1 )
        {
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v43[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v43[64];
          v26 = *(_OWORD *)v43;
          v27 = *(_OWORD *)&v43[16];
          v28 = *(_OWORD *)&v43[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v43[48];
          *(_OWORD *)(a1 + 32) = v28;
          *(_OWORD *)(a1 + 16) = v27;
          *(_OWORD *)a1 = v26;
          if ( v106 )
            sub_140001660(v105, v106, 1);
        }
        else
        {
          *(_OWORD *)&v99[80] = v92;
          *(_OWORD *)&v99[64] = v91;
          *(_OWORD *)&v99[48] = v90;
          *(_OWORD *)&v99[32] = v89;
          *(_OWORD *)&v99[16] = v88;
          *(_OWORD *)v99 = v87;
          *(_QWORD *)&v93 = v43;
          *((_QWORD *)&v93 + 1) = sub_140C9DC90;
          *(_QWORD *)&v94 = v99;
          *((_QWORD *)&v94 + 1) = sub_14104A7D0;
          sub_1416ABFD0(&v51, &unk_141A47AB2, &v93);
          *(_QWORD *)(a1 + 24) = v52;
          *(_OWORD *)(a1 + 8) = v51;
          *(_QWORD *)a1 = 10;
          sub_140D1BEA0(v99);
          if ( v106 )
            sub_140001660(v105, v106, 1);
          sub_140D1BEA0(v43);
        }
      }
      else
      {
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v85[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v85[64];
        v23 = *(_OWORD *)v85;
        v24 = *(_OWORD *)&v85[16];
        v25 = *(_OWORD *)&v85[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v85[48];
        *(_OWORD *)(a1 + 32) = v25;
        *(_OWORD *)(a1 + 16) = v24;
        *(_OWORD *)a1 = v23;
      }
      if ( (_DWORD)v53 == -2 )
        goto LABEL_4;
    }
    sub_140D1CCF0((__int64 *)&v53);
    goto LABEL_4;
  }
  *(_OWORD *)&v43[80] = *(_OWORD *)&v99[80];
  *(_OWORD *)&v43[64] = *(_OWORD *)&v99[64];
  *(_OWORD *)&v43[48] = *(_OWORD *)&v99[48];
  *(_OWORD *)&v43[32] = *(_OWORD *)&v99[32];
  *(_OWORD *)&v43[16] = *(_OWORD *)&v99[16];
  *(_OWORD *)v43 = *(_OWORD *)v99;
  v53 = &v79;
  *(_QWORD *)&v54 = sub_140186EE0;
  *((_QWORD *)&v54 + 1) = v43;
  *(_QWORD *)&v55 = sub_14104A7D0;
  sub_1416ABFD0(&v87, &unk_141A47B36, &v53);
  v93 = v87;
  *(_QWORD *)&v94 = v88;
  sub_140D1BEA0(v43);
  *(_QWORD *)(a1 + 24) = v94;
  *(_OWORD *)(a1 + 8) = v93;
  *(_QWORD *)a1 = 10;
LABEL_4:
  sub_140034990(&v29);
  return sub_1407ADB20(v37);
}
