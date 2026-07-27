// module: codexmate_lib/commands/accounts
// addr: 0x140cf87b0
// name: sub_140CF87B0
// win 1.2.1 | module src/commands/accounts.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140CF87B0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  char v9; // of
  __int64 v10; // r12
  volatile signed __int64 *v11; // r14
  __int64 v12; // rt0
  volatile signed __int64 *v13; // r15
  __int64 v14; // rt0
  __int64 v15; // r13
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r15
  _BYTE *v25; // r12
  __int64 v26; // r14
  char result; // al
  __int64 v28; // r13
  __int64 *v29; // rbx
  __int64 v30; // rbx
  _BYTE *v31; // rdi
  __int64 v32; // rbx
  _QWORD *v33; // rdi
  __int64 v34; // [rsp+28h] [rbp-58h]
  _BYTE v35[864]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v36[864]; // [rsp+390h] [rbp+310h] BYREF
  __int64 v37; // [rsp+6F0h] [rbp+670h] BYREF
  __int128 v38; // [rsp+6F8h] [rbp+678h]
  _QWORD v39[2]; // [rsp+A48h] [rbp+9C8h] BYREF
  __int128 v40; // [rsp+A58h] [rbp+9D8h]
  char v41[864]; // [rsp+A68h] [rbp+9E8h] BYREF
  _BYTE v42[136]; // [rsp+DC8h] [rbp+D48h] BYREF
  __m256i v43; // [rsp+E50h] [rbp+DD0h] BYREF
  __int64 v44; // [rsp+E70h] [rbp+DF0h]
  __int64 v45; // [rsp+11C8h] [rbp+1148h] BYREF
  __m256i v46; // [rsp+11D0h] [rbp+1150h]
  __int64 v47[107]; // [rsp+11F0h] [rbp+1170h] BYREF
  _BYTE v48[152]; // [rsp+1548h] [rbp+14C8h] BYREF
  __int128 v49; // [rsp+15E0h] [rbp+1560h]
  __int128 v50; // [rsp+15F0h] [rbp+1570h]
  __int128 v51; // [rsp+1600h] [rbp+1580h] BYREF
  __int64 v52; // [rsp+1610h] [rbp+1590h]
  __int64 v53; // [rsp+1620h] [rbp+15A0h]
  __int64 *v54; // [rsp+1628h] [rbp+15A8h]
  __int64 v55; // [rsp+1630h] [rbp+15B0h]
  __int64 v56; // [rsp+1638h] [rbp+15B8h]
  _BYTE *v57; // [rsp+1640h] [rbp+15C0h]
  _BYTE *v58; // [rsp+1648h] [rbp+15C8h]
  __int64 v59; // [rsp+1650h] [rbp+15D0h]
  char v60; // [rsp+165Fh] [rbp+15DFh]
  __int64 v61; // [rsp+1660h] [rbp+15E0h]

  v61 = -2;
  v5 = *(unsigned __int8 *)(a2 + 504);
  v55 = a2;
  switch ( v5 )
  {
    case 0LL:
      v6 = a3;
      v7 = a2 + 168;
      v8 = a2;
      sub_141684120(a2 + 168, a2, 152);
      *(_OWORD *)(v8 + 320) = *(_OWORD *)(v8 + 152);
      sub_1401C50B0(&v45, v7);
      v10 = v55;
      v11 = *(volatile signed __int64 **)(v55 + 304);
      v12 = _InterlockedIncrement64(v11);
      if ( (v12 < 0) ^ v9 | (v12 == 0)
        || (v13 = *(volatile signed __int64 **)(v10 + 312),
            v14 = _InterlockedIncrement64(v13),
            (v14 < 0) ^ v9 | (v14 == 0)) )
      {
        BUG();
      }
      sub_141684120(v42, &v45, 136);
      v15 = v10 + 336;
      sub_141684120(v10 + 336, v42, 136);
      *(_QWORD *)(v10 + 472) = v11;
      *(_QWORD *)(v10 + 480) = v13;
      v58 = (_BYTE *)(v10 + 496);
      *(_BYTE *)(v10 + 496) = 0;
LABEL_7:
      v59 = v15;
      sub_141684120(v48, v15, 152);
      v18 = off_141EC8710;
      if ( *((_DWORD *)off_141EC8710 + 24) )
      {
        v60 = 1;
        v33 = off_141EC8710;
        sub_1416984A3(off_141EC8710);
        v18 = v33;
      }
      if ( *((_DWORD *)v18 + 4) == 2 )
      {
        v19 = 704;
        if ( *(_BYTE *)v18 )
          v19 = 472;
        v20 = v18[1] + v19;
        v60 = 0;
        v21 = sub_14089CD90(v20, (__int64)v18, (__int64)v48, (__int64)&off_1417642A8);
      }
      else
      {
        v22 = 704;
        if ( *((_BYTE *)v18 + 64) )
          v22 = 472;
        v23 = v18[9] + v22;
        v60 = 0;
        v21 = sub_14089CD90(v23, (__int64)(v18 + 8), (__int64)v48, (__int64)&off_141764290);
      }
      a2 = v55;
      *(_QWORD *)(v55 + 488) = v21;
      a3 = v6;
LABEL_18:
      v54 = (__int64 *)(a2 + 488);
      sub_140AFFB00(&v45, (_QWORD *)(a2 + 488), a3);
      v24 = v45;
      if ( v45 == -3 )
      {
        *v58 = 3;
        *(_QWORD *)a1 = -2;
        result = 3;
        goto LABEL_31;
      }
      v25 = v58;
      if ( (_DWORD)v45 == -2 )
      {
        v52 = v46.m256i_i64[2];
        v51 = *(_OWORD *)v46.m256i_i8;
        v26 = 0x800000000000000CuLL;
      }
      else
      {
        v26 = v46.m256i_i64[0];
        v51 = *(_OWORD *)&v46.m256i_u64[1];
        v52 = v46.m256i_i64[3];
        sub_141684120(&v37, v47, 856);
      }
      v28 = v59;
      v29 = v54;
      *(_OWORD *)v43.m256i_i8 = v51;
      v43.m256i_i64[2] = v52;
      sub_141684120(&v43.m256i_u64[3], &v37, 856);
      v30 = *v29;
      v57 = v25;
      v56 = v28;
      if ( (unsigned __int8)sub_1412F2A80(v30) )
      {
        v57 = v25;
        v56 = v28;
        sub_1412E7580(v30);
      }
      if ( (_DWORD)v24 == -2 )
      {
        v45 = v26;
        v46 = v43;
        v47[0] = v44;
        *(_QWORD *)&v51 = &v45;
        *((_QWORD *)&v51 + 1) = sub_141230630;
        sub_14149C0F0(&v37, &unk_1417B8CB0, &v51);
        v31 = v58;
        v57 = v58;
        v56 = v59;
        sub_140BF0F60(&v45);
        v26 = v37;
        v50 = v38;
        *v31 = 1;
        v32 = v55;
      }
      else
      {
        sub_141684120(v36, &v43.m256i_u64[2], 864);
        v50 = *(_OWORD *)v43.m256i_i8;
        *v25 = 1;
        v32 = v55;
        if ( (_DWORD)v24 != -1 )
        {
          sub_141684120(v41, v36, 864);
          v39[1] = v26;
          v40 = v50;
          v39[0] = v24;
          sub_1403EE240(v32 + 168, (__int64)v39, *(_QWORD *)(v32 + 320), *(_QWORD *)(v32 + 328), 0, v34);
          v49 = v50;
          sub_141684120(v35, v36, 864);
          sub_140014150(v32 + 168);
          goto LABEL_30;
        }
      }
      v49 = v50;
      v24 = -1;
      sub_140014150(v32 + 168);
LABEL_30:
      *(_QWORD *)a1 = v24;
      *(_QWORD *)(a1 + 8) = v26;
      *(_OWORD *)(a1 + 16) = v49;
      sub_141684120(a1 + 32, v35, 864);
      result = 1;
LABEL_31:
      *(_BYTE *)(v55 + 504) = result;
      return result;
    case 1LL:
      sub_1416C3400(&off_1417BB3C8, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417BB3C8, a2, a3, a4);
    case 3LL:
      v16 = a2 + 496;
      v17 = *(unsigned __int8 *)(a2 + 496);
      v15 = a2 + 336;
      v58 = (_BYTE *)(a2 + 496);
      switch ( v17 )
      {
        case 0LL:
          v6 = a3;
          goto LABEL_7;
        case 1LL:
          v53 = a2 + 336;
          sub_1416C3400(&off_1417B8048, a2, a3, v16);
        case 2LL:
          v53 = a2 + 336;
          sub_1416C3420(&off_1417B8048, a2, a3, v16);
        case 3LL:
          v59 = a2 + 336;
          goto LABEL_18;
      }
  }
}