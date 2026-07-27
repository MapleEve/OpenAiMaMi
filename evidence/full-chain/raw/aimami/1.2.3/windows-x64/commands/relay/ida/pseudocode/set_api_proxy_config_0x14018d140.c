// win 1.2.1 | tauri command handler = set_api_proxy_config | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall set_api_proxy_config(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r14
  __int128 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  _BYTE v13[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+238h] [rbp+1B8h]
  _BYTE v15[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v16; // [rsp+3C0h] [rbp+340h]
  int v17; // [rsp+3C8h] [rbp+348h]
  int v18; // [rsp+3CCh] [rbp+34Ch]
  const char *v19; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v20; // [rsp+3D8h] [rbp+358h]
  const char *v21; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v22; // [rsp+3E8h] [rbp+368h]
  _BYTE *v23; // [rsp+3F0h] [rbp+370h]
  __int128 *v24; // [rsp+3F8h] [rbp+378h]
  __int64 v25; // [rsp+400h] [rbp+380h]
  __int128 v26; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v27; // [rsp+570h] [rbp+4F0h]
  _OWORD v28[2]; // [rsp+580h] [rbp+500h] BYREF
  _OWORD v29[2]; // [rsp+5A0h] [rbp+520h] BYREF
  __m256i v30; // [rsp+5C0h] [rbp+540h] BYREF
  __int128 v31; // [rsp+5E0h] [rbp+560h] BYREF
  __int128 v32; // [rsp+5F0h] [rbp+570h]
  __int128 v33; // [rsp+600h] [rbp+580h]
  __int128 v34; // [rsp+610h] [rbp+590h]
  __int128 v35; // [rsp+620h] [rbp+5A0h]
  __int128 v36; // [rsp+630h] [rbp+5B0h]
  __int128 v37; // [rsp+640h] [rbp+5C0h]
  _BYTE v38[48]; // [rsp+650h] [rbp+5D0h] BYREF
  __int128 v39; // [rsp+680h] [rbp+600h]
  __int128 v40; // [rsp+690h] [rbp+610h]
  __int128 v41; // [rsp+6A0h] [rbp+620h]
  __int128 v42; // [rsp+6B0h] [rbp+630h]
  __int64 v43; // [rsp+6C8h] [rbp+648h]
  __int128 v44; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v45; // [rsp+6E0h] [rbp+660h]
  __int64 v46; // [rsp+6E8h] [rbp+668h]
  __int64 v47; // [rsp+6F0h] [rbp+670h]
  char v48; // [rsp+6FEh] [rbp+67Eh]
  char v49; // [rsp+6FFh] [rbp+67Fh]
  __int64 v50; // [rsp+700h] [rbp+680h]

  v50 = -2; /*0x14018d15b*/
  sub_141684120(v13, a1, 520); /*0x14018d179*/
  sub_141684120(v15, a1 + 520, 400); /*0x14018d195*/
  v45 = *(_QWORD *)(a1 + 936); /*0x14018d1a1*/
  v44 = *(_OWORD *)(a1 + 920); /*0x14018d1af*/
  v25 = 0; /*0x14018d1b6*/
  v19 = aSetApiProxyCon; /*0x14018d1c8*/
  v20 = 20; /*0x14018d1cf*/
  v21 = aRepo; /*0x14018d1e1*/
  v22 = 4; /*0x14018d1e8*/
  v23 = v13; /*0x14018d1f3*/
  v24 = &v44; /*0x14018d201*/
  v49 = 1; /*0x14018d213*/
  v3 = sub_140003640((volatile void *)(v14 + 16)); /*0x14018d220*/
  if ( !v3 ) /*0x14018d226*/
  {
    v49 = 1; /*0x14018d338*/
    sub_1416850A0(v29, &v19, &v21); /*0x14018d34d*/
    if ( LOBYTE(v29[0]) != 0xFF ) /*0x14018d35a*/
    {
      *(_OWORD *)&v38[24] = v29[1]; /*0x14018d36e*/
      *(_OWORD *)&v38[8] = v29[0]; /*0x14018d375*/
      sub_141684120(&v19, a1 + 520, 360); /*0x14018d38f*/
      v31 = *(_OWORD *)(a1 + 880); /*0x14018d3a2*/
      *(_QWORD *)&v32 = *(_QWORD *)(a1 + 896); /*0x14018d3b0*/
      *(_QWORD *)v38 = 1; /*0x14018d3c3*/
      v49 = 0; /*0x14018d3ce*/
      sub_14047E370((unsigned int)&v19, v16, (unsigned int)v38, (unsigned int)&v31, v17, v18); /*0x14018d3ee*/
      goto LABEL_22; /*0x14018d3f4*/
    }
    v3 = *((_QWORD *)&v29[0] + 1); /*0x14018d505*/
  }
  v25 = 0; /*0x14018d22c*/
  v19 = aSetApiProxyCon; /*0x14018d237*/
  v20 = 20; /*0x14018d23e*/
  v21 = aMode_0; /*0x14018d250*/
  v22 = 4; /*0x14018d257*/
  v23 = v13; /*0x14018d262*/
  v24 = &v44; /*0x14018d269*/
  v49 = 1; /*0x14018d270*/
  sub_140AEF5D0(v28, &v19); /*0x14018d285*/
  if ( LOBYTE(v28[0]) == 0xFF ) /*0x14018d292*/
  {
    LOBYTE(v1) = BYTE1(v28[0]); /*0x14018d3f9*/
    v25 = 0; /*0x14018d400*/
    v19 = aSetApiProxyCon; /*0x14018d40b*/
    v20 = 20; /*0x14018d412*/
    v21 = aUrl; /*0x14018d424*/
    v22 = 3; /*0x14018d42b*/
    v23 = v13; /*0x14018d436*/
    v24 = &v44; /*0x14018d43d*/
    v49 = 1; /*0x14018d444*/
    sub_140973410(&v30, &v19); /*0x14018d459*/
    if ( v30.m256i_i8[0] != -1 ) /*0x14018d466*/
    {
      *(__m256i *)&v38[8] = v30; /*0x14018d47a*/
      sub_141684120(&v19, a1 + 520, 360); /*0x14018d49b*/
      v31 = *(_OWORD *)(a1 + 880); /*0x14018d4ae*/
      *(_QWORD *)&v32 = *(_QWORD *)(a1 + 896); /*0x14018d4bc*/
      *(_QWORD *)v38 = 1; /*0x14018d4cf*/
      v49 = 0; /*0x14018d4da*/
      sub_14047E370((unsigned int)&v19, v16, (unsigned int)v38, (unsigned int)&v31, v17, v18); /*0x14018d4fa*/
      goto LABEL_22; /*0x14018d500*/
    }
    v27 = v30.m256i_i64[3]; /*0x14018d518*/
    v26 = *(_OWORD *)&v30.m256i_u64[1]; /*0x14018d526*/
    v49 = 1; /*0x14018d52d*/
    sub_1403D0AA0(&v31, v3, v1, &v26); /*0x14018d548*/
    sub_141684120(&v19, a1 + 520, 400); /*0x14018d55e*/
    if ( (_QWORD)v31 != -1 ) /*0x14018d56b*/
    {
      v42 = v37; /*0x14018d574*/
      v41 = v36; /*0x14018d582*/
      v40 = v35; /*0x14018d590*/
      v39 = v34; /*0x14018d5b3*/
      *(_OWORD *)&v38[32] = v33; /*0x14018d5ba*/
      *(_OWORD *)&v38[16] = v32; /*0x14018d5c1*/
      *(_OWORD *)v38 = v31; /*0x14018d5c8*/
LABEL_21:
      v48 = 0; /*0x14018d67f*/
      sub_1404332F0(&v19, v38); /*0x14018d694*/
      goto LABEL_22; /*0x14018d694*/
    }
    v5 = *((_QWORD *)&v31 + 1); /*0x14018d5d4*/
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&v32 + 1); /*0x14018d5e2*/
    v7 = v32; /*0x14018d5e2*/
    if ( v32 < 0 ) /*0x14018d5ec*/
    {
      v8 = 0; /*0x14018d5ee*/
      goto LABEL_13; /*0x14018d5ee*/
    }
    if ( *((_QWORD *)&v32 + 1) ) /*0x14018d60c*/
    {
      nullsub_1(v4); /*0x14018d60e*/
      v8 = 1; /*0x14018d613*/
      v9 = sub_140001650(*((_QWORD *)&v6 + 1), 1); /*0x14018d620*/
      if ( !v9 ) /*0x14018d628*/
      {
LABEL_13:
        v46 = v7; /*0x14018d5f0*/
        v47 = v5; /*0x14018d5f7*/
        sub_1416C2D4B(v8, *((_QWORD *)&v6 + 1)); /*0x14018d604*/
      }
      *(_QWORD *)&v6 = v9; /*0x14018d62a*/
      sub_141684120(v9, v7, *((_QWORD *)&v6 + 1)); /*0x14018d636*/
    }
    else
    {
      *(_QWORD *)&v6 = 1; /*0x14018d63d*/
    }
    if ( v5 ) /*0x14018d645*/
      sub_140001660(v7, v5, 1); /*0x14018d653*/
    v38[8] = 3; /*0x14018d658*/
    *(_QWORD *)&v38[16] = *((_QWORD *)&v6 + 1); /*0x14018d65f*/
    *(_OWORD *)&v38[24] = v6; /*0x14018d666*/
    *(_QWORD *)v38 = -1; /*0x14018d674*/
    goto LABEL_21; /*0x14018d674*/
  }
  *(_OWORD *)&v38[24] = v28[1]; /*0x14018d2a6*/
  *(_OWORD *)&v38[8] = v28[0]; /*0x14018d2ad*/
  sub_141684120(&v19, a1 + 520, 360); /*0x14018d2c7*/
  v31 = *(_OWORD *)(a1 + 880); /*0x14018d2da*/
  *(_QWORD *)&v32 = *(_QWORD *)(a1 + 896); /*0x14018d2e8*/
  *(_QWORD *)v38 = 1; /*0x14018d2fb*/
  v49 = 0; /*0x14018d306*/
  sub_14047E370((unsigned int)&v19, v16, (unsigned int)v38, (unsigned int)&v31, v17, v18); /*0x14018d326*/
LABEL_22:
  if ( (_QWORD)v44 != -1 ) /*0x14018d6a2*/
  {
    v10 = *((_QWORD *)&v44 + 1); /*0x14018d6a4*/
    v46 = v45; /*0x14018d6b2*/
    v47 = 0; /*0x14018d6b9*/
    v43 = *((_QWORD *)&v44 + 1); /*0x14018d6c4*/
    while ( v46 != v47 ) /*0x14018d6de*/
    {
      ++v47; /*0x14018d6e3*/
      v11 = v10 + 96; /*0x14018d6ea*/
      sub_1402C7520(); /*0x14018d6ee*/
      v10 = v11; /*0x14018d6f4*/
    }
    if ( (_QWORD)v44 ) /*0x14018d703*/
      sub_140001660(*((_QWORD *)&v44 + 1), 96 * v44, 8); /*0x14018d71a*/
  }
  return sub_140014270(v13); /*0x14018d729*/
}