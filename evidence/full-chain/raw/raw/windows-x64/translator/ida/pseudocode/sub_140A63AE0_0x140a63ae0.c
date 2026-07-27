// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A63AE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int128 v19; // xmm0
  _DWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  void *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  _DWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  void *v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int128 v44; // [rsp+50h] [rbp-30h] BYREF
  __int64 v45; // [rsp+60h] [rbp-20h]
  __int128 v46; // [rsp+68h] [rbp-18h] BYREF
  __int64 v47; // [rsp+78h] [rbp-8h]
  __m256i v48; // [rsp+80h] [rbp+0h]
  __int64 v49; // [rsp+A0h] [rbp+20h]
  _QWORD *v50; // [rsp+A8h] [rbp+28h]
  __int128 v51; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v52; // [rsp+C0h] [rbp+40h]
  __int64 v53; // [rsp+C8h] [rbp+48h]
  __int64 v54; // [rsp+D0h] [rbp+50h]
  _OWORD v55[2]; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v56; // [rsp+F8h] [rbp+78h]
  __int128 v57; // [rsp+100h] [rbp+80h] BYREF
  __int128 v58; // [rsp+110h] [rbp+90h]
  __int64 v59; // [rsp+120h] [rbp+A0h]
  __int64 v60; // [rsp+128h] [rbp+A8h]
  __m256i v61; // [rsp+130h] [rbp+B0h] BYREF
  char v62; // [rsp+158h] [rbp+D8h]
  char v63; // [rsp+159h] [rbp+D9h]
  char v64; // [rsp+15Ah] [rbp+DAh]
  char v65; // [rsp+15Bh] [rbp+DBh]
  char v66; // [rsp+15Ch] [rbp+DCh]
  char v67; // [rsp+15Dh] [rbp+DDh]
  char v68; // [rsp+15Eh] [rbp+DEh]
  char v69; // [rsp+15Fh] [rbp+DFh]
  __int64 v70; // [rsp+160h] [rbp+E0h]

  v70 = -2; /*0x140a63af7*/
  v5 = sub_141433D50(aName_7, 4, a3); /*0x140a63b14*/
  if ( v5 && *(_BYTE *)v5 == 3 ) /*0x140a63b21*/
  {
    v7 = *(_QWORD *)(v5 + 24); /*0x140a63b23*/
    if ( v7 < 0 ) /*0x140a63b2a*/
    {
      v8 = 0; /*0x140a63b2c*/
      goto LABEL_5; /*0x140a63b2c*/
    }
    v56 = *(_QWORD *)(v5 + 24); /*0x140a63b52*/
    if ( v7 ) /*0x140a63b56*/
    {
      v10 = *(_QWORD *)(v5 + 16); /*0x140a63b58*/
      nullsub_1(v6); /*0x140a63b5c*/
      v8 = 1; /*0x140a63b61*/
      v11 = sub_140001650(v7, 1); /*0x140a63b6f*/
      if ( !v11 ) /*0x140a63b77*/
LABEL_5:
        sub_1416C2D4B(v8, v7); /*0x140a63b2f*/
      v49 = v11; /*0x140a63b79*/
      sub_141684120(v11, v10, v7); /*0x140a63b86*/
    }
    else
    {
      v49 = 1; /*0x140a63b92*/
    }
    v63 = 1; /*0x140a63b96*/
    v12 = sub_141433D50(aDescription_2, 11, a3); /*0x140a63bac*/
    LOBYTE(v13) = 1; /*0x140a63bb2*/
    v59 = v13; /*0x140a63bb4*/
    if ( v12 && *(_BYTE *)v12 == 3 ) /*0x140a63bc3*/
    {
      v14 = *(_QWORD *)(v12 + 24); /*0x140a63bc5*/
      if ( v14 < 0 ) /*0x140a63bcc*/
      {
        v15 = 0; /*0x140a63bd2*/
        goto LABEL_16; /*0x140a63bd2*/
      }
      if ( v14 ) /*0x140a63dd1*/
      {
        v26 = *(_QWORD *)(v12 + 16); /*0x140a63dd7*/
        nullsub_1(v13); /*0x140a63ddb*/
        v15 = 1; /*0x140a63de0*/
        v27 = sub_140001650(v14, 1); /*0x140a63dee*/
        if ( !v27 ) /*0x140a63df6*/
        {
LABEL_16:
          v63 = 1; /*0x140a63bd5*/
          sub_1416C2D4B(v15, v14); /*0x140a63be2*/
        }
        v54 = v27; /*0x140a63dfc*/
        v60 = v14; /*0x140a63e06*/
        sub_141684120(v27, v26, v14); /*0x140a63e10*/
      }
      else
      {
        v54 = 1; /*0x140a63eba*/
        v60 = 0; /*0x140a63ebe*/
      }
      v59 = 0; /*0x140a63ec9*/
    }
    else
    {
      v60 = -1; /*0x140a63bed*/
    }
    v69 = 1; /*0x140a63bf8*/
    v68 = 1; /*0x140a63bff*/
    v16 = sub_141433D50(aInputSchema, 12, a3); /*0x140a63c15*/
    if ( v16 ) /*0x140a63c1e*/
    {
      v18 = v56; /*0x140a63c31*/
      switch ( *(_BYTE *)v16 ) /*0x140a63c35*/
      {
        case 0: /*0x140a63c35*/
          v61.m256i_i8[0] = 0; /*0x140a63e49*/
          goto LABEL_43; /*0x140a63e50*/
        case 1: /*0x140a63c35*/
        case 2: /*0x140a63c35*/
          v19 = *(_OWORD *)v16; /*0x140a63c37*/
          *(_OWORD *)&v61.m256i_u64[2] = *(_OWORD *)(v16 + 16); /*0x140a63c3e*/
          *(_OWORD *)v61.m256i_i8 = v19; /*0x140a63c45*/
          goto LABEL_43; /*0x140a63c4c*/
        case 3: /*0x140a63c35*/
          v69 = 1; /*0x140a63e60*/
          v68 = 1; /*0x140a63e67*/
          sub_14149C500(&v61.m256i_u64[1], v16 + 8); /*0x140a63e71*/
          v61.m256i_i8[0] = 3; /*0x140a63e77*/
          goto LABEL_42; /*0x140a63e7e*/
        case 4: /*0x140a63c35*/
          v28 = *(_QWORD *)(v16 + 16); /*0x140a63e21*/
          v29 = *(_QWORD *)(v16 + 24); /*0x140a63e25*/
          v69 = 1; /*0x140a63e29*/
          v68 = 1; /*0x140a63e30*/
          sub_1402CE260(&v61.m256i_u64[1], v28, v29); /*0x140a63e37*/
          v61.m256i_i8[0] = 4; /*0x140a63e3d*/
          goto LABEL_42; /*0x140a63e44*/
        case 5: /*0x140a63c35*/
          if ( *(_QWORD *)(v16 + 24) ) /*0x140a63e80*/
          {
            v30 = *(_QWORD *)(v16 + 8); /*0x140a63e87*/
            if ( !v30 ) /*0x140a63e8e*/
            {
              v69 = 1; /*0x140a6439a*/
              v68 = 1; /*0x140a643a1*/
              sub_1416C3040(&off_141747358); /*0x140a643af*/
            }
            v31 = *(_QWORD *)(v16 + 16); /*0x140a63e9b*/
            v69 = 1; /*0x140a63e9f*/
            v68 = 1; /*0x140a63ea6*/
            sub_1402CCD80(&v61.m256i_u64[1], v30, v31); /*0x140a63ead*/
          }
          else
          {
            v61.m256i_i64[1] = 0; /*0x140a63ed9*/
            v61.m256i_i64[3] = 0; /*0x140a63ee4*/
          }
          v61.m256i_i8[0] = 5; /*0x140a63eef*/
LABEL_42:
          v18 = v56; /*0x140a63ef6*/
LABEL_43:
          v25 = *(__int64 *)((char *)v61.m256i_i64 + 1); /*0x140a63efa*/
          v48 = v61; /*0x140a63f25*/
          break; /*0x140a63f25*/
      }
    }
    else
    {
      *(_QWORD *)&v51 = 0; /*0x140a63c51*/
      v52 = 0; /*0x140a63c59*/
      nullsub_1(v17); /*0x140a63c61*/
      v20 = (_DWORD *)sub_140001650(4, 1); /*0x140a63c70*/
      if ( !v20 ) /*0x140a63c78*/
        sub_1416C2D4B(1, 4); /*0x140a64474*/
      *v20 = 1701869940; /*0x140a63c7e*/
      *(_QWORD *)&v57 = 4; /*0x140a63c84*/
      *((_QWORD *)&v57 + 1) = v20; /*0x140a63c8f*/
      *(_QWORD *)&v58 = 4; /*0x140a63c96*/
      nullsub_1(v21); /*0x140a63ca1*/
      v22 = sub_140001650(6, 1); /*0x140a63cb0*/
      v53 = v22; /*0x140a63cb8*/
      if ( !v22 ) /*0x140a63cbc*/
        sub_1416C2D4B(1, 6); /*0x140a64486*/
      *(_WORD *)(v22 + 4) = 29795; /*0x140a63cc2*/
      *(_DWORD *)v22 = 1701470831; /*0x140a63cc8*/
      v61.m256i_i8[0] = 3; /*0x140a63cce*/
      v61.m256i_i64[1] = 6; /*0x140a63cd5*/
      v61.m256i_i64[2] = v22; /*0x140a63ce0*/
      v61.m256i_i64[3] = 6; /*0x140a63ce7*/
      sub_140307860(v55, &v51, &v57, &v61); /*0x140a63d08*/
      if ( LOBYTE(v55[0]) != 0xFF ) /*0x140a63d12*/
        sub_1400104F0(v55); /*0x140a63d18*/
      nullsub_1(v23); /*0x140a63d1e*/
      v24 = (void *)sub_140001650(10, 1); /*0x140a63d2d*/
      if ( !v24 ) /*0x140a63d35*/
        sub_1416C2D4B(1, 10); /*0x140a64498*/
      qmemcpy(v24, "properties", 10); /*0x140a63d45*/
      *(_QWORD *)&v57 = 10; /*0x140a63d4e*/
      *((_QWORD *)&v57 + 1) = v24; /*0x140a63d59*/
      *(_QWORD *)&v58 = 10; /*0x140a63d60*/
      v61.m256i_i64[1] = 0; /*0x140a63d6b*/
      v61.m256i_i64[3] = 0; /*0x140a63d76*/
      v61.m256i_i8[0] = 5; /*0x140a63d81*/
      sub_140307860(v55, &v51, &v57, &v61); /*0x140a63d9e*/
      if ( LOBYTE(v55[0]) != 0xFF ) /*0x140a63da8*/
        sub_1400104F0(v55); /*0x140a63dae*/
      *(_OWORD *)&v48.m256i_u64[1] = v51; /*0x140a63db8*/
      v48.m256i_i64[3] = v52; /*0x140a63dc0*/
      v48.m256i_i8[0] = 5; /*0x140a63dc4*/
      v18 = v56; /*0x140a63dc8*/
    }
    *(_QWORD *)&v46 = 0; /*0x140a63f3c*/
    v47 = 0; /*0x140a63f44*/
    nullsub_1(v25); /*0x140a63f4c*/
    v32 = (_DWORD *)sub_140001650(4, 1); /*0x140a63f5b*/
    LOBYTE(v53) = v32 == nullptr; /*0x140a63f63*/
    if ( !v32 ) /*0x140a63f67*/
    {
      v67 = 1; /*0x140a643ba*/
      v66 = 1; /*0x140a643c1*/
      v65 = 1; /*0x140a643c8*/
      sub_1416C2D4B(1, 4); /*0x140a643d9*/
    }
    *v32 = 1701667182; /*0x140a63f6d*/
    *(_QWORD *)&v57 = 4; /*0x140a63f73*/
    *((_QWORD *)&v57 + 1) = v32; /*0x140a63f7e*/
    *(_QWORD *)&v58 = 4; /*0x140a63f85*/
    v61.m256i_i64[1] = v18; /*0x140a63f90*/
    v61.m256i_i64[2] = v49; /*0x140a63f9b*/
    v61.m256i_i64[3] = v18; /*0x140a63fa2*/
    v61.m256i_i8[0] = 3; /*0x140a63fa9*/
    v67 = 1; /*0x140a63fb0*/
    v66 = 1; /*0x140a63fb7*/
    v65 = 1; /*0x140a63fbe*/
    sub_140307860(v55, &v46, &v57, &v61); /*0x140a63fdb*/
    if ( LOBYTE(v55[0]) != 0xFF ) /*0x140a63fe5*/
    {
      v67 = 1; /*0x140a63fe7*/
      v66 = 1; /*0x140a63fee*/
      v65 = 1; /*0x140a63ff5*/
      sub_1400104F0(v55); /*0x140a64000*/
    }
    if ( !(_BYTE)v59 ) /*0x140a6400d*/
    {
      nullsub_1(v33); /*0x140a64013*/
      v34 = (_QWORD *)sub_140001650(11, 1); /*0x140a64022*/
      v50 = v34; /*0x140a6402a*/
      if ( !v34 ) /*0x140a6402e*/
        sub_1416C2D4B(1, 11); /*0x140a64462*/
      qmemcpy(v34, "description", 11); /*0x140a6403e*/
      *(_QWORD *)&v57 = 11; /*0x140a64048*/
      *((_QWORD *)&v57 + 1) = v34; /*0x140a64053*/
      *(_QWORD *)&v58 = 11; /*0x140a6405a*/
      v61.m256i_i64[1] = v60; /*0x140a6406c*/
      v61.m256i_i64[2] = v54; /*0x140a64077*/
      v61.m256i_i64[3] = v60; /*0x140a6407e*/
      v61.m256i_i8[0] = 3; /*0x140a64085*/
      sub_140307860(v55, &v46, &v57, &v61); /*0x140a640a2*/
      if ( LOBYTE(v55[0]) != 0xFF ) /*0x140a640ac*/
        sub_1400104F0(v55); /*0x140a640b2*/
    }
    nullsub_1(v33); /*0x140a640b8*/
    v35 = (void *)sub_140001650(10, 1); /*0x140a640c7*/
    if ( !v35 ) /*0x140a640cf*/
    {
      v67 = 1; /*0x140a643e4*/
      v66 = 1; /*0x140a643eb*/
      v65 = v59; /*0x140a643f9*/
      sub_1416C2D4B(1, 10); /*0x140a64409*/
    }
    qmemcpy(v35, "parameters", 10); /*0x140a640df*/
    *(_QWORD *)&v57 = 10; /*0x140a640e8*/
    *((_QWORD *)&v57 + 1) = v35; /*0x140a640f3*/
    *(_QWORD *)&v58 = 10; /*0x140a640fa*/
    v61 = v48; /*0x140a6410d*/
    v67 = 1; /*0x140a6411b*/
    v66 = 0; /*0x140a64122*/
    v65 = v59; /*0x140a64130*/
    sub_140307860(v55, &v46, &v57, &v61); /*0x140a6414c*/
    if ( LOBYTE(v55[0]) != 0xFF ) /*0x140a64156*/
    {
      v67 = 1; /*0x140a64158*/
      v66 = 0; /*0x140a6415f*/
      v65 = v59; /*0x140a6416d*/
      sub_1400104F0(v55); /*0x140a64177*/
    }
    *(_QWORD *)&v44 = 0; /*0x140a6417d*/
    v45 = 0; /*0x140a64185*/
    nullsub_1(v36); /*0x140a6418d*/
    v37 = (_DWORD *)sub_140001650(4, 1); /*0x140a6419c*/
    if ( !v37 ) /*0x140a641a4*/
    {
      v64 = 1; /*0x140a64414*/
      sub_1416C2D4B(1, 4); /*0x140a64425*/
    }
    *v37 = 1701869940; /*0x140a641aa*/
    *(_QWORD *)&v57 = 4; /*0x140a641b0*/
    *((_QWORD *)&v57 + 1) = v37; /*0x140a641bb*/
    *(_QWORD *)&v58 = 4; /*0x140a641c2*/
    nullsub_1(v38); /*0x140a641cd*/
    v39 = (_QWORD *)sub_140001650(8, 1); /*0x140a641dc*/
    v50 = v39; /*0x140a641e4*/
    if ( !v39 ) /*0x140a641e8*/
      sub_1416C2D4B(1, 8); /*0x140a64437*/
    *v39 = 0x6E6F6974636E7566LL; /*0x140a641f8*/
    v61.m256i_i8[0] = 3; /*0x140a641fb*/
    v61.m256i_i64[1] = 8; /*0x140a64202*/
    v61.m256i_i64[2] = (__int64)v39; /*0x140a6420d*/
    v61.m256i_i64[3] = 8; /*0x140a64214*/
    sub_140307860(v55, &v44, &v57, &v61); /*0x140a64235*/
    if ( LOBYTE(v55[0]) != 0xFF ) /*0x140a6423f*/
    {
      v64 = 1; /*0x140a64241*/
      sub_1400104F0(v55); /*0x140a6424c*/
    }
    nullsub_1(v40); /*0x140a64252*/
    v41 = (_QWORD *)sub_140001650(8, 1); /*0x140a64261*/
    if ( !v41 ) /*0x140a64269*/
    {
      v64 = 1; /*0x140a6443f*/
      sub_1416C2D4B(1, 8); /*0x140a64450*/
    }
    *v41 = 0x6E6F6974636E7566LL; /*0x140a6426f*/
    *(_QWORD *)&v51 = 8; /*0x140a64272*/
    *((_QWORD *)&v51 + 1) = v41; /*0x140a6427a*/
    v52 = 8; /*0x140a6427e*/
    v61.m256i_i64[3] = v47; /*0x140a6428a*/
    *(_OWORD *)&v61.m256i_u64[1] = v46; /*0x140a64295*/
    v61.m256i_i8[0] = 5; /*0x140a6429c*/
    v62 = 1; /*0x140a642a3*/
    sub_140B842D0(v55, &v61); /*0x140a642b5*/
    if ( LOBYTE(v55[0]) == 0xFF ) /*0x140a642bf*/
    {
      *(_QWORD *)&v57 = *((_QWORD *)&v55[0] + 1); /*0x140a64362*/
      sub_1416C3060( /*0x140a6438f*/
        (unsigned int)aCalledResultUn_15,
        43,
        (unsigned int)&v57,
        (unsigned int)&off_1417A5560,
        (__int64)&off_1417A8140);
    }
    v58 = v55[1]; /*0x140a642cd*/
    v57 = v55[0]; /*0x140a642d4*/
    v62 = 0; /*0x140a642db*/
    sub_140307860(v55, &v44, &v51, &v57); /*0x140a642f5*/
    if ( LOBYTE(v55[0]) != 0xFF ) /*0x140a642ff*/
      sub_1400104F0(v55); /*0x140a64305*/
    v64 = 0; /*0x140a6430b*/
    sub_1400104F0(&v61); /*0x140a64319*/
    *(_OWORD *)((char *)&v61.m256i_u32[1] + 3) = v44; /*0x140a64327*/
    *(__int64 *)((char *)&v61.m256i_i64[2] + 7) = v45; /*0x140a6432e*/
    *(_BYTE *)a1 = 5; /*0x140a64335*/
    v42 = *(__int64 *)((char *)&v61.m256i_i64[1] + 7); /*0x140a6433f*/
    v43 = *(__int64 *)((char *)&v61.m256i_i64[2] + 7); /*0x140a64346*/
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v61.m256i_i8; /*0x140a6434d*/
    *(_QWORD *)(a1 + 16) = v42; /*0x140a64351*/
    *(_QWORD *)(a1 + 24) = v43; /*0x140a64355*/
  }
  else
  {
    *(_BYTE *)a1 = -1; /*0x140a63b3c*/
  }
  return a1; /*0x140a63b42*/
}