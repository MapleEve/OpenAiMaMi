// win 1.2.7 | module src/core/relay/router_reconciler.rs | ea 0x1401a1ec0 | name sub_1401A1EC0
// win 1.2.7 | module src/core/relay/router_reconciler.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401A1EC0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // r14
  __int64 v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  const char *v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdi
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  _BYTE v26[24]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v27[24]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v28; // [rsp+68h] [rbp-18h] BYREF
  __int64 v29; // [rsp+78h] [rbp-8h]
  _QWORD v30[2]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v31; // [rsp+90h] [rbp+10h]
  __int128 v32; // [rsp+A0h] [rbp+20h]
  __int128 v33; // [rsp+B0h] [rbp+30h]
  __int128 v34; // [rsp+C0h] [rbp+40h]
  __int128 v35; // [rsp+D0h] [rbp+50h]
  _QWORD v36[3]; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v37; // [rsp+100h] [rbp+80h] BYREF
  __int128 v38; // [rsp+110h] [rbp+90h]
  __int128 v39; // [rsp+120h] [rbp+A0h]
  __int128 v40; // [rsp+130h] [rbp+B0h]
  __int128 v41; // [rsp+140h] [rbp+C0h]
  __int128 v42; // [rsp+150h] [rbp+D0h]
  __int128 v43; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v44; // [rsp+170h] [rbp+F0h]
  __int128 v45; // [rsp+180h] [rbp+100h]
  __int128 v46; // [rsp+190h] [rbp+110h]
  __int128 v47; // [rsp+1A0h] [rbp+120h]
  __int128 v48; // [rsp+1B0h] [rbp+130h]
  _QWORD *v49; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+1C8h] [rbp+148h]
  __int128 *v51; // [rsp+1D0h] [rbp+150h]
  __int64 (__fastcall *v52)(_QWORD, _QWORD); // [rsp+1D8h] [rbp+158h]
  _QWORD *v53; // [rsp+1E0h] [rbp+160h] BYREF
  const char *v54; // [rsp+1E8h] [rbp+168h]
  __int128 v55; // [rsp+1F0h] [rbp+170h]
  __int128 v56; // [rsp+200h] [rbp+180h]
  __int128 v57; // [rsp+210h] [rbp+190h]
  __int128 v58; // [rsp+220h] [rbp+1A0h]
  __int128 v59; // [rsp+230h] [rbp+1B0h]
  char v60; // [rsp+24Fh] [rbp+1CFh] BYREF
  __int64 v61; // [rsp+250h] [rbp+1D0h]

  v61 = -2;
  v56 = 8u;
  v57 = 8u;
  v53 = nullptr;
  LOWORD(v59) = 0;
  v58 = 8u;
  *(_QWORD *)&v55 = 0;
  v4 = sub_1401B6D70(a2);
  if ( v4 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v4;
  }
  else
  {
    result = sub_140E9A360(a1, a2[9], a2[10], (__int64)&unk_141A3E122, 23, (__int64)&v53);
    if ( *(_QWORD *)a1 == -1 )
      return result;
  }
  v35 = *(_OWORD *)(a1 + 80);
  v34 = *(_OWORD *)(a1 + 64);
  v6 = *(_QWORD **)a1;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_OWORD *)(a1 + 16);
  v9 = *(_OWORD *)(a1 + 32);
  v33 = *(_OWORD *)(a1 + 48);
  v32 = v9;
  v31 = v8;
  v30[0] = v6;
  v30[1] = v7;
  v36[0] = aNativeOffConfi_0;
  v36[1] = 37;
  result = sub_14022A4A0(v30);
  if ( (_BYTE)result )
  {
    sub_140229720(&v43, v30);
    v53 = v36;
    v54 = (const char *)sub_140186EE0;
    *(_QWORD *)&v55 = &v43;
    *((_QWORD *)&v55 + 1) = sub_1400015F0;
    sub_1416ABFD0(v27, &unk_1419D5782, &v53);
    if ( (_QWORD)v43 )
      sub_140001660(*((_QWORD *)&v43 + 1), v43, 1);
    sub_14019B500((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe, 19, (__int64)v27);
    sub_140EC2070(&v37);
    v36[2] = v37;
    if ( (_QWORD)v37 == -1 )
    {
      LODWORD(v43) = DWORD2(v37);
      v53 = v36;
      v54 = (const char *)sub_140186EE0;
      *(_QWORD *)&v55 = &v43;
      *((_QWORD *)&v55 + 1) = sub_1416BBD00;
      sub_1416ABFD0(v26, &unk_1419D57BA, &v53);
      sub_14019B500((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe_0, 32, (__int64)v26);
      v10 = *((_QWORD *)&v38 + 1);
      v11 = v39;
      if ( (_QWORD)v39 )
      {
        v12 = (_QWORD *)(*((_QWORD *)&v38 + 1) + 8LL);
        do
        {
          v13 = *(v12 - 1);
          if ( v13 )
            sub_140001660(*v12, v13, 1);
          v12 += 3;
          --v11;
        }
        while ( v11 );
      }
      if ( (_QWORD)v38 )
        sub_140001660(v10, 24 * v38, 8);
    }
    else
    {
      v48 = v42;
      v47 = v41;
      v46 = v40;
      v45 = v39;
      v44 = v38;
      v43 = v37;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v49 = v36;
        v50 = sub_140186EE0;
        v51 = &v43;
        v52 = sub_14104A7D0;
        *(_QWORD *)&v57 = 2;
        *((_QWORD *)&v57 + 1) = aCodexmateLibCo_18;
        *(_QWORD *)&v58 = 45;
        *(_QWORD *)&v59 = &unk_1419D57EC;
        *((_QWORD *)&v59 + 1) = &v49;
        v53 = nullptr;
        v54 = aCodexmateLibCo_18;
        v55 = 0x2Du;
        *(_QWORD *)&v56 = aSrcCoreRelayRo;
        *((_QWORD *)&v56 + 1) = 35;
        *((_QWORD *)&v58 + 1) = 0x2E500000001LL;
        sub_1414D53A0(&v60, &v53);
      }
      sub_1401954F0(&v43);
    }
    sub_141696800(0, 700000000);
    v56 = 8u;
    v57 = 8u;
    v53 = nullptr;
    LOWORD(v59) = 0;
    v58 = 8u;
    *(_QWORD *)&v55 = 0;
    v14 = sub_1401B6D70(a2);
    if ( v14 )
    {
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v14;
    }
    else
    {
      sub_140E9A360(a1, a2[9], a2[10], (__int64)&unk_141A3E122, 23, (__int64)&v53);
      if ( *(_QWORD *)a1 == -1 )
        return sub_1401954F0(v30);
    }
    v59 = *(_OWORD *)(a1 + 80);
    v58 = *(_OWORD *)(a1 + 64);
    v15 = *(_QWORD **)a1;
    v16 = *(const char **)(a1 + 8);
    v17 = *(_OWORD *)(a1 + 16);
    v18 = *(_OWORD *)(a1 + 32);
    v57 = *(_OWORD *)(a1 + 48);
    v56 = v18;
    v55 = v17;
    v53 = v15;
    v54 = v16;
    if ( (unsigned __int8)sub_14022A4A0(&v53) )
    {
      sub_140229720(&v49, v30);
      sub_140229720(&v37, &v53);
      *(_QWORD *)&v43 = v36;
      *((_QWORD *)&v43 + 1) = sub_140186EE0;
      *(_QWORD *)&v44 = &v49;
      *((_QWORD *)&v44 + 1) = sub_1400015F0;
      *(_QWORD *)&v45 = &v37;
      *((_QWORD *)&v45 + 1) = sub_1400015F0;
      sub_1416ABFD0(&v28, &unk_1419D676D, &v43);
      if ( (_QWORD)v37 )
        sub_140001660(*((_QWORD *)&v37 + 1), v37, 1);
      if ( v49 )
        sub_140001660(v50, v49, 1);
      v37 = v28;
      *(_QWORD *)&v38 = v29;
      v19 = 10;
      sub_1401954F0(&v53);
    }
    else
    {
      v19 = (__int64)v53;
      v37 = *(_OWORD *)(a1 + 8);
      *(_QWORD *)&v38 = *(_QWORD *)(a1 + 24);
      v20 = *(_OWORD *)(a1 + 48);
      v21 = *(_OWORD *)(a1 + 64);
      v22 = *(_OWORD *)(a1 + 80);
      v43 = *(_OWORD *)(a1 + 32);
      v44 = v20;
      v45 = v21;
      v46 = v22;
    }
    *(_QWORD *)a1 = v19;
    *(_OWORD *)(a1 + 8) = v37;
    *(_QWORD *)(a1 + 24) = v38;
    v23 = v44;
    v24 = v45;
    v25 = v46;
    *(_OWORD *)(a1 + 32) = v43;
    *(_OWORD *)(a1 + 48) = v23;
    *(_OWORD *)(a1 + 64) = v24;
    *(_OWORD *)(a1 + 80) = v25;
    return sub_1401954F0(v30);
  }
  return result;
}
