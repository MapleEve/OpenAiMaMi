// win 1.2.7 | module src/core/relay/router_reconciler.rs | ea 0x1401a0ee0 | name sub_1401A0EE0
// win 1.2.7 | module src/core/relay/router_reconciler.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401A0EE0(__int128 *a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // rbx
  __int64 v9; // r14
  _QWORD *v10; // r12
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rdi
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  _BYTE v22[24]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v23[24]; // [rsp+48h] [rbp-38h] BYREF
  _OWORD v24[6]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v25; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+50h]
  _QWORD v27[3]; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v28; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v29; // [rsp+100h] [rbp+80h]
  __int128 v30; // [rsp+110h] [rbp+90h]
  __int128 v31; // [rsp+120h] [rbp+A0h]
  __int128 v32; // [rsp+130h] [rbp+B0h]
  __int128 v33; // [rsp+140h] [rbp+C0h]
  __int128 v34; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v35; // [rsp+160h] [rbp+E0h]
  __int128 v36; // [rsp+170h] [rbp+F0h]
  __int128 v37; // [rsp+180h] [rbp+100h]
  __int128 v38; // [rsp+190h] [rbp+110h]
  __int128 v39; // [rsp+1A0h] [rbp+120h]
  _QWORD *v40; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+1B8h] [rbp+138h]
  __int128 *v42; // [rsp+1C0h] [rbp+140h]
  __int64 (__fastcall *v43)(_QWORD, _QWORD); // [rsp+1C8h] [rbp+148h]
  __int128 v44; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v45; // [rsp+1E0h] [rbp+160h]
  __int128 v46; // [rsp+1F0h] [rbp+170h]
  __int128 v47; // [rsp+200h] [rbp+180h]
  __int128 v48; // [rsp+210h] [rbp+190h]
  __int128 v49; // [rsp+220h] [rbp+1A0h]
  char v50; // [rsp+23Fh] [rbp+1BFh] BYREF
  __int64 v51; // [rsp+240h] [rbp+1C0h]

  v51 = -2;
  result = sub_140F02690(a1, a2);
  if ( *(_DWORD *)a1 != -1 )
  {
    v24[5] = a1[5];
    v24[4] = a1[4];
    v5 = *a1;
    v6 = a1[1];
    v7 = a1[2];
    v24[3] = a1[3];
    v24[2] = v7;
    v24[1] = v6;
    v24[0] = v5;
    v27[0] = aConfigTakeover;
    v27[1] = 15;
    result = sub_14022A4A0(v24);
    if ( (_BYTE)result )
    {
      sub_140229720(&v34, v24);
      *(_QWORD *)&v44 = v27;
      *((_QWORD *)&v44 + 1) = sub_140186EE0;
      *(_QWORD *)&v45 = &v34;
      *((_QWORD *)&v45 + 1) = sub_1400015F0;
      sub_1416ABFD0(v23, &unk_1419D5782, &v44);
      if ( (_QWORD)v34 )
        sub_140001660(*((_QWORD *)&v34 + 1), v34, 1);
      sub_14019B500((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe, 19, (__int64)v23);
      sub_140EC2070(&v28);
      v27[2] = v28;
      if ( (_QWORD)v28 == -1 )
      {
        LODWORD(v34) = DWORD2(v28);
        *(_QWORD *)&v44 = v27;
        *((_QWORD *)&v44 + 1) = sub_140186EE0;
        *(_QWORD *)&v45 = &v34;
        *((_QWORD *)&v45 + 1) = sub_1416BBD00;
        sub_1416ABFD0(v22, &unk_1419D57BA, &v44);
        sub_14019B500((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe_0, 32, (__int64)v22);
        v8 = *((_QWORD *)&v29 + 1);
        v9 = v30;
        if ( (_QWORD)v30 )
        {
          v10 = (_QWORD *)(*((_QWORD *)&v29 + 1) + 8LL);
          do
          {
            v11 = *(v10 - 1);
            if ( v11 )
              sub_140001660(*v10, v11, 1);
            v10 += 3;
            --v9;
          }
          while ( v9 );
        }
        if ( (_QWORD)v29 )
          sub_140001660(v8, 24 * v29, 8);
      }
      else
      {
        v39 = v33;
        v38 = v32;
        v37 = v31;
        v36 = v30;
        v35 = v29;
        v34 = v28;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v40 = v27;
          v41 = sub_140186EE0;
          v42 = &v34;
          v43 = sub_14104A7D0;
          *(_QWORD *)&v47 = 2;
          *((_QWORD *)&v47 + 1) = aCodexmateLibCo_18;
          *(_QWORD *)&v48 = 45;
          *(_QWORD *)&v49 = &unk_1419D57EC;
          *((_QWORD *)&v49 + 1) = &v40;
          *(_QWORD *)&v44 = 0;
          *((_QWORD *)&v44 + 1) = aCodexmateLibCo_18;
          v45 = 0x2Du;
          *(_QWORD *)&v46 = aSrcCoreRelayRo;
          *((_QWORD *)&v46 + 1) = 35;
          *((_QWORD *)&v48 + 1) = 0x2E500000001LL;
          sub_1414D53A0(&v50, &v44);
        }
        sub_1401954F0(&v34);
      }
      sub_141696800(0, 700000000);
      sub_140F02690(a1, a2);
      if ( *(_DWORD *)a1 != -1 )
      {
        v49 = a1[5];
        v48 = a1[4];
        v12 = *a1;
        v13 = a1[1];
        v14 = a1[2];
        v47 = a1[3];
        v46 = v14;
        v45 = v13;
        v44 = v12;
        if ( (unsigned __int8)sub_14022A4A0(&v44) )
        {
          sub_140229720(&v40, v24);
          sub_140229720(&v28, &v44);
          *(_QWORD *)&v34 = v27;
          *((_QWORD *)&v34 + 1) = sub_140186EE0;
          *(_QWORD *)&v35 = &v40;
          *((_QWORD *)&v35 + 1) = sub_1400015F0;
          *(_QWORD *)&v36 = &v28;
          *((_QWORD *)&v36 + 1) = sub_1400015F0;
          sub_1416ABFD0(&v25, &unk_1419D676D, &v34);
          if ( (_QWORD)v28 )
            sub_140001660(*((_QWORD *)&v28 + 1), v28, 1);
          if ( v40 )
            sub_140001660(v41, v40, 1);
          v28 = v25;
          *(_QWORD *)&v29 = v26;
          v15 = 10;
          sub_1401954F0(&v44);
        }
        else
        {
          v15 = v44;
          v28 = *(__int128 *)((char *)a1 + 8);
          *(_QWORD *)&v29 = *((_QWORD *)a1 + 3);
          v16 = a1[3];
          v17 = a1[4];
          v18 = a1[5];
          v34 = a1[2];
          v35 = v16;
          v36 = v17;
          v37 = v18;
        }
        *(_QWORD *)a1 = v15;
        *(__int128 *)((char *)a1 + 8) = v28;
        *((_QWORD *)a1 + 3) = v29;
        v19 = v35;
        v20 = v36;
        v21 = v37;
        a1[2] = v34;
        a1[3] = v19;
        a1[4] = v20;
        a1[5] = v21;
      }
      return sub_1401954F0(v24);
    }
  }
  return result;
}
