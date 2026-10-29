// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140eb20d0 | successor of pre-update 0x140d94d30 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.903, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140EB20D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // r14
  char v10; // r13
  unsigned __int8 v11; // r14
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v17; // rax
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
  _BYTE v36[888]; // [rsp+C8h] [rbp+48h] BYREF
  _BYTE v37[364]; // [rsp+440h] [rbp+3C0h] BYREF
  char v38; // [rsp+5ACh] [rbp+52Ch]
  char v39[2]; // [rsp+5BEh] [rbp+53Eh] BYREF
  _BYTE v40[104]; // [rsp+5C0h] [rbp+540h] BYREF
  _BYTE v41[896]; // [rsp+628h] [rbp+5A8h] BYREF
  __int128 v42; // [rsp+9A8h] [rbp+928h] BYREF
  __int64 v43; // [rsp+9B8h] [rbp+938h]
  __int128 *v44; // [rsp+9C0h] [rbp+940h] BYREF
  __int128 v45; // [rsp+9C8h] [rbp+948h]
  __int128 v46; // [rsp+9D8h] [rbp+958h]
  __int128 v47; // [rsp+9E8h] [rbp+968h]
  __int128 v48; // [rsp+9F8h] [rbp+978h]
  __int128 v49; // [rsp+A08h] [rbp+988h]
  __int128 v50; // [rsp+A18h] [rbp+998h]
  __int128 v51; // [rsp+A28h] [rbp+9A8h]
  __int128 v52; // [rsp+A38h] [rbp+9B8h]
  __int128 v53; // [rsp+A48h] [rbp+9C8h]
  __int128 v54; // [rsp+A58h] [rbp+9D8h]
  __int64 v55; // [rsp+A68h] [rbp+9E8h]
  __int128 v56; // [rsp+A70h] [rbp+9F0h]
  __int128 v57; // [rsp+A80h] [rbp+A00h]
  __int128 v58; // [rsp+A90h] [rbp+A10h]
  __int128 v59; // [rsp+AA0h] [rbp+A20h]
  __int64 v60; // [rsp+AB0h] [rbp+A30h]
  __int128 v61; // [rsp+AC0h] [rbp+A40h]
  __int128 v62; // [rsp+AD0h] [rbp+A50h]
  __int128 v63; // [rsp+AE0h] [rbp+A60h]
  __int128 v64; // [rsp+AF0h] [rbp+A70h]
  __int64 v65; // [rsp+B00h] [rbp+A80h]
  __int128 v66; // [rsp+B08h] [rbp+A88h] BYREF
  __int128 v67; // [rsp+B18h] [rbp+A98h]
  __int128 v68; // [rsp+B28h] [rbp+AA8h]
  __int128 v69; // [rsp+B38h] [rbp+AB8h]
  __int128 v70; // [rsp+B48h] [rbp+AC8h]
  __int128 v71; // [rsp+B58h] [rbp+AD8h]
  __int64 v72; // [rsp+B68h] [rbp+AE8h]
  __int128 v73; // [rsp+B70h] [rbp+AF0h] BYREF
  __int128 v74; // [rsp+B80h] [rbp+B00h]
  __int128 v75; // [rsp+B90h] [rbp+B10h]
  __int128 v76; // [rsp+BA0h] [rbp+B20h]
  __int128 v77; // [rsp+BB0h] [rbp+B30h]
  __int128 v78; // [rsp+BC0h] [rbp+B40h]
  __int128 v79; // [rsp+BD0h] [rbp+B50h] BYREF
  __int128 v80; // [rsp+BE0h] [rbp+B60h]
  __int128 v81; // [rsp+BF0h] [rbp+B70h]
  __int128 v82; // [rsp+C00h] [rbp+B80h]
  __int128 v83; // [rsp+C10h] [rbp+B90h]
  __int128 v84; // [rsp+C20h] [rbp+BA0h]
  __int128 v85; // [rsp+C30h] [rbp+BB0h] BYREF
  __int128 v86; // [rsp+C40h] [rbp+BC0h]
  __int128 v87; // [rsp+C50h] [rbp+BD0h]
  __int128 v88; // [rsp+C60h] [rbp+BE0h]
  __int128 v89; // [rsp+C70h] [rbp+BF0h]
  __int128 v90; // [rsp+C80h] [rbp+C00h]
  __int64 v91; // [rsp+C90h] [rbp+C10h] BYREF
  __int64 v92; // [rsp+C98h] [rbp+C18h]
  _BYTE v93[104]; // [rsp+CA0h] [rbp+C20h] BYREF
  __int128 v94; // [rsp+D08h] [rbp+C88h]
  __int128 v95; // [rsp+D18h] [rbp+C98h]
  __int128 v96; // [rsp+D28h] [rbp+CA8h]
  __int128 v97; // [rsp+D38h] [rbp+CB8h]
  __int64 v98; // [rsp+D48h] [rbp+CC8h]
  __int64 v99; // [rsp+D58h] [rbp+CD8h]
  __int64 v100; // [rsp+D60h] [rbp+CE0h]
  char v101; // [rsp+D6Fh] [rbp+CEFh] BYREF
  __int64 v102; // [rsp+D70h] [rbp+CF0h]

  v102 = -2;
  v91 = a3;
  v92 = a4;
  sub_140EB7850(v37, a2);
  sub_140E9E6E0(v40, a2);
  v9 = *(_QWORD *)v40;
  *(_OWORD *)v93 = *(_OWORD *)&v40[8];
  *(_OWORD *)&v93[16] = *(_OWORD *)&v40[24];
  *(_OWORD *)&v93[32] = *(_OWORD *)&v40[40];
  *(_OWORD *)&v93[48] = *(_OWORD *)&v40[56];
  *(_OWORD *)&v93[64] = *(_OWORD *)&v40[72];
  *(_OWORD *)&v93[80] = *(_OWORD *)&v40[88];
  if ( *(_QWORD *)v40 == -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v93[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v93[64];
    v13 = *(_OWORD *)v93;
    v14 = *(_OWORD *)&v93[16];
    v15 = *(_OWORD *)&v93[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v93[48];
    *(_OWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
    return sub_140292E20(v37);
  }
  sub_1419234B0(v36, v41, 888);
  v30 = *(_OWORD *)v93;
  v31 = *(_OWORD *)&v93[16];
  v32 = *(_OWORD *)&v93[32];
  v33 = *(_OWORD *)&v93[48];
  v34 = *(_OWORD *)&v93[64];
  v35 = *(_OWORD *)&v93[80];
  v29 = v9;
  v10 = v38;
  v11 = v38 ^ 1;
  v101 = v38 ^ 1;
  v12 = *a2;
  *(_QWORD *)&v73 = a3;
  *((_QWORD *)&v73 + 1) = a4;
  sub_1407468D0(v93, v12 + 16, v37);
  if ( *(_DWORD *)v93 == -1 )
  {
    v17 = -2;
    if ( v10 )
    {
      sub_1401DFE20(v40, v37);
      sub_1401E01F0(v93, v40, &v29);
      v17 = *(_QWORD *)v93;
      v79 = *(_OWORD *)&v93[8];
      v80 = *(_OWORD *)&v93[24];
      v81 = *(_OWORD *)&v93[40];
      v82 = *(_OWORD *)&v93[56];
      v83 = *(_OWORD *)&v93[72];
      v84 = *(_OWORD *)&v93[88];
      v56 = v94;
      v57 = v95;
      v58 = v96;
      v59 = v97;
      v60 = v98;
      v85 = *(_OWORD *)&v93[8];
      v86 = *(_OWORD *)&v93[24];
      v87 = *(_OWORD *)&v93[40];
      v88 = *(_OWORD *)&v93[56];
      v89 = *(_OWORD *)&v93[72];
      v90 = *(_OWORD *)&v93[88];
      if ( *(_QWORD *)v93 == -2 )
      {
        v18 = v85;
        v19 = v86;
        v20 = v87;
        v21 = v88;
        v73 = v85;
        v74 = v86;
        v75 = v87;
        v76 = v88;
        v22 = v89;
        v77 = v89;
        v78 = v90;
        *(_OWORD *)(a1 + 80) = v90;
        *(_OWORD *)(a1 + 64) = v22;
        *(_OWORD *)(a1 + 48) = v21;
        *(_OWORD *)(a1 + 32) = v20;
        *(_OWORD *)(a1 + 16) = v19;
        *(_OWORD *)a1 = v18;
        goto LABEL_4;
      }
      v65 = v60;
      v64 = v59;
      v63 = v58;
      v62 = v57;
      v61 = v56;
    }
    v73 = v85;
    v74 = v86;
    v75 = v87;
    v76 = v88;
    v77 = v89;
    v78 = v90;
    v51 = v61;
    v52 = v62;
    v53 = v63;
    v54 = v64;
    v55 = v65;
    v50 = v90;
    v49 = v89;
    v48 = v88;
    v47 = v87;
    v46 = v86;
    v45 = v85;
    v44 = (__int128 *)v17;
    *(_QWORD *)v40 = &v91;
    *(_QWORD *)&v40[8] = a2;
    *(_QWORD *)&v40[16] = &v29;
    *(_QWORD *)&v40[24] = &v44;
    *(_QWORD *)v93 = a2;
    *(_QWORD *)&v93[8] = &v29;
    *(_QWORD *)&v93[16] = &v101;
    sub_140DD3C60(
      (__int64)&v66,
      (__int128 *)&v29,
      v11,
      v91,
      v92,
      (__int64)&v29,
      0,
      a5,
      (__int64 **)v40,
      (__int64 *)v93,
      (__int64)a2,
      v39);
    if ( (_DWORD)v66 == -1 )
    {
      sub_140EB8E30(a1, (char *)&v66 + 8);
    }
    else if ( BYTE1(v72) > 1u || (unsigned __int8)v72 >= 2u )
    {
      *(_QWORD *)&v40[96] = v72;
      *(_OWORD *)&v40[80] = v71;
      *(_OWORD *)&v40[64] = v70;
      *(_OWORD *)&v40[48] = v69;
      *(_OWORD *)&v40[32] = v68;
      *(_OWORD *)&v40[16] = v67;
      *(_OWORD *)v40 = v66;
      *(_QWORD *)v93 = &v91;
      *(_QWORD *)&v93[8] = sub_140191200;
      *(_QWORD *)&v93[16] = v40;
      *(_QWORD *)&v93[24] = sub_140EDAE40;
      sub_1416DAFA0(&v79, &unk_141AA0AE8, v93);
      v99 = *((_QWORD *)&v79 + 1);
      v100 = v79;
      sub_140EACA40((unsigned int)&v79, (_DWORD)a2, (unsigned int)&v29, (unsigned int)v37, *((__int64 *)&v79 + 1), v80);
      if ( (_DWORD)v79 == -1 )
      {
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v40[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v40[64];
        v26 = *(_OWORD *)v40;
        v27 = *(_OWORD *)&v40[16];
        v28 = *(_OWORD *)&v40[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v40[48];
        *(_OWORD *)(a1 + 32) = v28;
        *(_OWORD *)(a1 + 16) = v27;
        *(_OWORD *)a1 = v26;
        if ( v100 )
          sub_140001660(v99, v100, 1);
      }
      else
      {
        *(_OWORD *)&v93[80] = v84;
        *(_OWORD *)&v93[64] = v83;
        *(_OWORD *)&v93[48] = v82;
        *(_OWORD *)&v93[32] = v81;
        *(_OWORD *)&v93[16] = v80;
        *(_OWORD *)v93 = v79;
        *(_QWORD *)&v85 = v40;
        *((_QWORD *)&v85 + 1) = sub_140EDAE40;
        *(_QWORD *)&v86 = v93;
        *((_QWORD *)&v86 + 1) = sub_140D76130;
        sub_1416DAFA0(&v42, &unk_141A9F159, &v85);
        *(_QWORD *)(a1 + 24) = v43;
        *(_OWORD *)(a1 + 8) = v42;
        *(_QWORD *)a1 = 10;
        sub_140D8A3A0(v93);
        if ( v100 )
          sub_140001660(v99, v100, 1);
        sub_140D8A3A0(v40);
      }
    }
    else
    {
      *(_OWORD *)(a1 + 80) = v71;
      *(_OWORD *)(a1 + 64) = v70;
      v23 = v66;
      v24 = v67;
      v25 = v68;
      *(_OWORD *)(a1 + 48) = v69;
      *(_OWORD *)(a1 + 32) = v25;
      *(_OWORD *)(a1 + 16) = v24;
      *(_OWORD *)a1 = v23;
    }
    if ( (_DWORD)v44 != -2 )
      sub_140D8A630(&v44);
    goto LABEL_4;
  }
  *(_OWORD *)&v40[80] = *(_OWORD *)&v93[80];
  *(_OWORD *)&v40[64] = *(_OWORD *)&v93[64];
  *(_OWORD *)&v40[48] = *(_OWORD *)&v93[48];
  *(_OWORD *)&v40[32] = *(_OWORD *)&v93[32];
  *(_OWORD *)&v40[16] = *(_OWORD *)&v93[16];
  *(_OWORD *)v40 = *(_OWORD *)v93;
  v44 = &v73;
  *(_QWORD *)&v45 = sub_140191200;
  *((_QWORD *)&v45 + 1) = v40;
  *(_QWORD *)&v46 = sub_140D76130;
  sub_1416DAFA0(&v79, &unk_141A9F192, &v44);
  v85 = v79;
  *(_QWORD *)&v86 = v80;
  sub_140D8A3A0(v40);
  *(_QWORD *)(a1 + 24) = v86;
  *(_OWORD *)(a1 + 8) = v85;
  *(_QWORD *)a1 = 10;
LABEL_4:
  sub_140038710(&v29);
  return sub_140292E20(v37);
}
