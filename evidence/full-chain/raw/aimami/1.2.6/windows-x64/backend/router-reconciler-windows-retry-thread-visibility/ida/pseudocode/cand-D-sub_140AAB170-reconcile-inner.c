__int64 __fastcall sub_140AAB170(__int128 *a1, __int64 *a2)
{
  __int64 v3; // rdi
  _OWORD *v4; // r12
  __int64 v5; // r13
  __int128 v6; // xmm0
  char *v7; // r14
  char v8; // al
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 v11; // rbx
  __int64 result; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // r15
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int128 v19; // xmm0
  char v20; // al
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // rdi
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  _BYTE v33[24]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v34[24]; // [rsp+48h] [rbp-38h] BYREF
  _OWORD v35[6]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v36; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v37; // [rsp+D0h] [rbp+50h]
  __int64 v38; // [rsp+D8h] [rbp+58h]
  __int128 v39; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v40; // [rsp+F0h] [rbp+70h]
  __int128 v41; // [rsp+100h] [rbp+80h]
  __int128 v42; // [rsp+110h] [rbp+90h]
  __int128 v43; // [rsp+120h] [rbp+A0h]
  __int128 v44; // [rsp+130h] [rbp+B0h]
  _QWORD *v45; // [rsp+140h] [rbp+C0h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+148h] [rbp+C8h]
  __int128 *v47; // [rsp+150h] [rbp+D0h]
  __int64 (__fastcall *v48)(_QWORD, _QWORD); // [rsp+158h] [rbp+D8h]
  __int128 v49; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v50; // [rsp+170h] [rbp+F0h]
  __int128 v51; // [rsp+180h] [rbp+100h]
  __int128 v52; // [rsp+190h] [rbp+110h]
  __int128 v53; // [rsp+1A0h] [rbp+120h]
  __int128 v54; // [rsp+1B0h] [rbp+130h]
  _QWORD v55[2]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v56; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v57; // [rsp+1E0h] [rbp+160h]
  __int128 v58; // [rsp+1F0h] [rbp+170h]
  __int128 v59; // [rsp+200h] [rbp+180h]
  __int128 v60; // [rsp+210h] [rbp+190h]
  __int128 v61; // [rsp+220h] [rbp+1A0h]
  __int64 v62; // [rsp+230h] [rbp+1B0h]
  char v63; // [rsp+23Fh] [rbp+1BFh] BYREF
  __int64 v64; // [rsp+240h] [rbp+1C0h]

  v64 = -2;
  v3 = *a2;
  v4 = (_OWORD *)a2[1];
  v5 = a2[2];
  v6 = *(_OWORD *)(v5 + 8);
  v7 = (char *)a2[3];
  v8 = *v7;
  v9 = v4[2];
  v10 = *(_OWORD *)((char *)v4 + 56);
  v57 = *(_OWORD *)((char *)v4 + 8);
  v58 = v9;
  v56 = v6;
  LOBYTE(v60) = 1;
  BYTE1(v60) = v8;
  v59 = v10;
  v11 = a2[4];
  result = sub_140342D60(a1, v3, &v56, v11);
  if ( *(_DWORD *)a1 != -1 )
  {
    v35[5] = a1[5];
    v35[4] = a1[4];
    v13 = *a1;
    v14 = a1[1];
    v15 = a1[2];
    v35[3] = a1[3];
    v35[2] = v15;
    v35[1] = v14;
    v35[0] = v13;
    v55[0] = aRouterOnConfig;
    v55[1] = 21;
    result = sub_140B50A60(v35);
    if ( (_BYTE)result )
    {
      sub_140B4F910(&v49, v35);
      *(_QWORD *)&v56 = v55;
      *((_QWORD *)&v56 + 1) = sub_1402DDC10;
      *(_QWORD *)&v57 = &v49;
      *((_QWORD *)&v57 + 1) = sub_1400015F0;
      sub_141543AF0(v34, &unk_14185AE5B, &v56);
      if ( (_QWORD)v49 )
        sub_140001660(*((_QWORD *)&v49 + 1), v49, 1);
      sub_140AA6250((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe, 19, (__int64)v34);
      sub_140AFAD30(&v39);
      v62 = v39;
      if ( (_QWORD)v39 == -1 )
      {
        LODWORD(v49) = DWORD2(v39);
        *(_QWORD *)&v56 = v55;
        *((_QWORD *)&v56 + 1) = sub_1402DDC10;
        *(_QWORD *)&v57 = &v49;
        *((_QWORD *)&v57 + 1) = sub_141553180;
        sub_141543AF0(v33, &unk_14185AE93, &v56);
        sub_140AA6250((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe_0, 32, (__int64)v33);
        v38 = v3;
        v62 = *((_QWORD *)&v40 + 1);
        v16 = v41;
        if ( (_QWORD)v41 )
        {
          v17 = (_QWORD *)(v62 + 8);
          do
          {
            v18 = *(v17 - 1);
            if ( v18 )
              sub_140001660(*v17, v18, 1);
            v17 += 3;
            --v16;
          }
          while ( v16 );
        }
        v3 = v38;
        if ( (_QWORD)v40 )
          sub_140001660(v62, 24 * v40, 8);
      }
      else
      {
        v54 = v44;
        v53 = v43;
        v52 = v42;
        v51 = v41;
        v50 = v40;
        v49 = v39;
        if ( *(_QWORD *)off_141FB9E30 >= 2u )
        {
          v45 = v55;
          v46 = sub_1402DDC10;
          v47 = &v49;
          v48 = sub_1405060F0;
          *(_QWORD *)&v56 = 0;
          *((_QWORD *)&v56 + 1) = aCodexmateLibCo_7;
          v57 = 0x2Du;
          *(_QWORD *)&v58 = aSrcCoreRelayRo_0;
          *((_QWORD *)&v58 + 1) = 35;
          *(_QWORD *)&v59 = 2;
          *((_QWORD *)&v59 + 1) = aCodexmateLibCo_7;
          *(_QWORD *)&v60 = 45;
          *((_QWORD *)&v60 + 1) = 0x2FA00000001LL;
          *(_QWORD *)&v61 = &unk_14185AEC5;
          *((_QWORD *)&v61 + 1) = &v45;
          sub_14136A9F0(&v63, &v56);
        }
        sub_140A9E920(&v49);
      }
      sub_14152EE30(0, 700000000);
      v19 = *(_OWORD *)(v5 + 8);
      v20 = *v7;
      v21 = v4[2];
      v22 = *(_OWORD *)((char *)v4 + 56);
      v57 = *(_OWORD *)((char *)v4 + 8);
      v58 = v21;
      v56 = v19;
      LOBYTE(v60) = 1;
      BYTE1(v60) = v20;
      v59 = v22;
      sub_140342D60(a1, v3, &v56, v11);
      if ( *(_DWORD *)a1 != -1 )
      {
        v61 = a1[5];
        v60 = a1[4];
        v23 = *a1;
        v24 = a1[1];
        v25 = a1[2];
        v59 = a1[3];
        v58 = v25;
        v57 = v24;
        v56 = v23;
        if ( (unsigned __int8)sub_140B50A60(&v56) )
        {
          sub_140B4F910(&v45, v35);
          sub_140B4F910(&v39, &v56);
          *(_QWORD *)&v49 = v55;
          *((_QWORD *)&v49 + 1) = sub_1402DDC10;
          *(_QWORD *)&v50 = &v45;
          *((_QWORD *)&v50 + 1) = sub_1400015F0;
          *(_QWORD *)&v51 = &v39;
          *((_QWORD *)&v51 + 1) = sub_1400015F0;
          sub_141543AF0(&v36, &unk_14185BBF0, &v49);
          if ( (_QWORD)v39 )
            sub_140001660(*((_QWORD *)&v39 + 1), v39, 1);
          if ( v45 )
            sub_140001660(v46, v45, 1);
          v39 = v36;
          *(_QWORD *)&v40 = v37;
          v26 = 10;
          sub_140A9E920(&v56);
        }
        else
        {
          v26 = v56;
          v39 = *(__int128 *)((char *)a1 + 8);
          *(_QWORD *)&v40 = *((_QWORD *)a1 + 3);
          v27 = a1[3];
          v28 = a1[4];
          v29 = a1[5];
          v49 = a1[2];
          v50 = v27;
          v51 = v28;
          v52 = v29;
        }
        *(_QWORD *)a1 = v26;
        *(__int128 *)((char *)a1 + 8) = v39;
        *((_QWORD *)a1 + 3) = v40;
        v30 = v50;
        v31 = v51;
        v32 = v52;
        a1[2] = v49;
        a1[3] = v30;
        a1[4] = v31;
        a1[5] = v32;
      }
      return sub_140A9E920(v35);
    }
  }
  return result;
}
