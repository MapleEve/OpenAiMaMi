// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140d8f4c0 | name sub_140D8F4C0
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D8F4C0(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6, __int64 *a7)
{
  int v7; // r13d
  int v12; // edx
  __int64 *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // rax
  __int64 v20; // rcx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  char v24; // r12
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  _BYTE v35[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v36; // [rsp+68h] [rbp-18h]
  __int64 v37; // [rsp+70h] [rbp-10h]
  _BYTE v38[254]; // [rsp+E0h] [rbp+60h] BYREF
  char v39; // [rsp+1DEh] [rbp+15Eh]
  __int128 v40; // [rsp+1E0h] [rbp+160h]
  __int128 v41; // [rsp+1F0h] [rbp+170h]
  __int128 v42; // [rsp+200h] [rbp+180h]
  __m256i v43; // [rsp+210h] [rbp+190h]
  __int64 v44; // [rsp+238h] [rbp+1B8h] BYREF
  __m512i v45; // [rsp+240h] [rbp+1C0h]
  __int128 v46; // [rsp+280h] [rbp+200h]
  __m256i v47; // [rsp+290h] [rbp+210h]
  __int128 v48; // [rsp+2B0h] [rbp+230h]
  __int64 v49; // [rsp+2C0h] [rbp+240h]
  __int128 v50; // [rsp+2C8h] [rbp+248h]
  __int64 v51; // [rsp+2D8h] [rbp+258h]
  char v52; // [rsp+2E0h] [rbp+260h]
  __int128 v53; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v54; // [rsp+2F8h] [rbp+278h]
  __int128 v55; // [rsp+300h] [rbp+280h]
  __int128 v56; // [rsp+310h] [rbp+290h]
  __int128 v57; // [rsp+320h] [rbp+2A0h]
  __int64 v58; // [rsp+330h] [rbp+2B0h]
  __int128 v59; // [rsp+338h] [rbp+2B8h]
  __int64 v60; // [rsp+348h] [rbp+2C8h]
  __int128 v61; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v62; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v63; // [rsp+370h] [rbp+2F0h]
  __int64 v64; // [rsp+380h] [rbp+300h]
  __int128 v65; // [rsp+390h] [rbp+310h] BYREF
  __int128 v66; // [rsp+3A0h] [rbp+320h]
  __int128 v67; // [rsp+3B0h] [rbp+330h]
  __int64 v68; // [rsp+3C0h] [rbp+340h]
  _BYTE v69[80]; // [rsp+3D0h] [rbp+350h] BYREF
  __m256i v70; // [rsp+420h] [rbp+3A0h]
  int v71; // [rsp+448h] [rbp+3C8h]
  char v72; // [rsp+44Fh] [rbp+3CFh]
  __int64 v73; // [rsp+450h] [rbp+3D0h]

  v73 = -2;
  sub_140D9A5F0((__int64)v35, a2);
  if ( v38[236] )
  {
    v13 = a7;
    if ( a7 )
    {
      v7 = 0;
    }
    else
    {
      v72 = 0;
      sub_1403DCEA0(&v53, v36, v36 + (v37 << 8));
      sub_140229570(&v61, v35);
      v24 = v39;
      if ( v39 )
      {
        sub_1403F7D40(&v65, v38);
      }
      else
      {
        *(_QWORD *)&v65 = 0;
        *((_QWORD *)&v65 + 1) = 8;
        *(_QWORD *)&v66 = 0;
      }
      v70.m256i_i64[3] = v54;
      *(_OWORD *)&v70.m256i_u64[1] = v53;
      v48 = v61;
      v49 = v62;
      v50 = v65;
      v51 = v66;
      v44 = -1;
      v45 = *(__m512i *)v69;
      v46 = *(_OWORD *)&v69[64];
      v47 = v70;
      v52 = v24;
      v72 = 1;
      sub_1401BDB90(v69, &v44);
      if ( *(_DWORD *)v69 != -1 )
      {
        *(_OWORD *)(a1 + 80) = *(_OWORD *)v70.m256i_i8;
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v69[64];
        v31 = *(_OWORD *)v69;
        v32 = *(_OWORD *)&v69[16];
        v33 = *(_OWORD *)&v69[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v69[48];
        *(_OWORD *)(a1 + 32) = v33;
        *(_OWORD *)(a1 + 16) = v32;
        *(_OWORD *)a1 = v31;
        goto LABEL_17;
      }
      LOBYTE(v7) = 1;
      v13 = &v44;
    }
    v72 = v7;
    sub_14019F190((__int128 *)v69, a3, a2, (__int64)v13, a4, a5, 0);
    v14 = *(_QWORD *)v69;
    v65 = *(_OWORD *)&v69[8];
    v66 = *(_OWORD *)&v69[24];
    v67 = *(_OWORD *)&v69[40];
    v68 = *(_QWORD *)&v69[56];
    if ( *(_QWORD *)v69 != -1 )
    {
      v60 = v70.m256i_i64[0];
      v59 = *(_OWORD *)&v69[64];
      v15 = v70.m256i_i64[1];
      v58 = v68;
      v16 = v65;
      v17 = v66;
      v18 = v67;
      v55 = v65;
      v56 = v66;
      v57 = v67;
      *(_QWORD *)(a1 + 72) = *(_QWORD *)&v69[72];
      *(_QWORD *)(a1 + 80) = v60;
      *(_QWORD *)(a1 + 56) = v58;
      *(_QWORD *)(a1 + 64) = v59;
      *(_OWORD *)(a1 + 40) = v18;
      *(_OWORD *)(a1 + 24) = v17;
      *(_OWORD *)(a1 + 8) = v16;
      *(_QWORD *)a1 = v14;
      *(_QWORD *)(a1 + 88) = v15;
      if ( !(_BYTE)v7 )
        goto LABEL_18;
      goto LABEL_17;
    }
    v71 = v7;
    v61 = v65;
    v62 = v66;
    v63 = v67;
    v64 = v68;
    sub_1403F1200(v69, (char *)&v62 + 8);
    v58 = v64;
    v28 = v61;
    v29 = v62;
    v30 = v63;
    v57 = v63;
    v56 = v62;
    v55 = v61;
    v59 = *(_OWORD *)v69;
    v60 = *(_QWORD *)&v69[16];
    *(_QWORD *)(a1 + 64) = v64;
    *(_OWORD *)(a1 + 48) = v30;
    *(_OWORD *)(a1 + 32) = v29;
    *(_OWORD *)(a1 + 16) = v28;
    *(_OWORD *)(a1 + 72) = v59;
    *(_QWORD *)(a1 + 88) = v60;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
    if ( (_BYTE)v71 )
LABEL_17:
      sub_140D1CCF0(&v44);
  }
  else
  {
    sub_140D946F0((unsigned int)&v44, v12, a3, (unsigned int)v35, (__int64)a4, a5, 0, a6, 0);
    v19 = v44;
    *(__m512i *)v69 = v45;
    *(_OWORD *)&v69[64] = v46;
    if ( v44 == -1 )
    {
      v25 = *(_OWORD *)v69;
      v26 = *(_OWORD *)&v69[16];
      v27 = *(_OWORD *)&v69[32];
      v43 = *(__m256i *)&v69[48];
      v40 = *(_OWORD *)v69;
      v41 = *(_OWORD *)&v69[16];
      v42 = *(_OWORD *)&v69[32];
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&v69[48];
      *(_OWORD *)(a1 + 48) = v27;
      *(_OWORD *)(a1 + 32) = v26;
      *(_OWORD *)(a1 + 16) = v25;
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v43.m256i_u64[1];
      *(_QWORD *)(a1 + 88) = v43.m256i_i64[3];
      *(_QWORD *)(a1 + 8) = 1;
      *(_QWORD *)a1 = -1;
    }
    else
    {
      v20 = v47.m256i_i64[0];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v69[64];
      v21 = *(_OWORD *)v69;
      v22 = *(_OWORD *)&v69[16];
      v23 = *(_OWORD *)&v69[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v69[48];
      *(_OWORD *)(a1 + 40) = v23;
      *(_OWORD *)(a1 + 24) = v22;
      *(_OWORD *)(a1 + 8) = v21;
      *(_QWORD *)a1 = v19;
      *(_QWORD *)(a1 + 88) = v20;
    }
  }
LABEL_18:
  sub_1407ADB20(v35);
  return a1;
}
