// win 1.2.7 | module src/core/repository.rs | ea 0x1401ef2a0 | name sub_1401EF2A0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401EF2A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int128 v16; // kr10_16
  __m128i v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  void *v23; // rax
  __int64 v24; // r14
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // kr20_16
  unsigned __int64 v29; // rdx
  __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  __m128i v31; // [rsp+38h] [rbp-48h]
  __int128 v32; // [rsp+48h] [rbp-38h]
  __int128 v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+68h] [rbp-18h]
  __int128 v35; // [rsp+78h] [rbp-8h]
  __int128 v36; // [rsp+88h] [rbp+8h]
  __int128 v37; // [rsp+98h] [rbp+18h]
  __int128 v38; // [rsp+A8h] [rbp+28h]
  __int128 v39; // [rsp+B8h] [rbp+38h]
  __int128 v40; // [rsp+C8h] [rbp+48h]
  __int64 v41; // [rsp+D8h] [rbp+58h]
  _QWORD v42[2]; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v43; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v44; // [rsp+100h] [rbp+80h]
  __int64 v45; // [rsp+110h] [rbp+90h]
  __int64 v46; // [rsp+118h] [rbp+98h]
  __int64 v47; // [rsp+128h] [rbp+A8h]
  __int64 v48; // [rsp+130h] [rbp+B0h]
  __int64 v49; // [rsp+140h] [rbp+C0h]
  __int64 v50; // [rsp+148h] [rbp+C8h]
  __int64 v51; // [rsp+158h] [rbp+D8h]
  __int64 v52; // [rsp+160h] [rbp+E0h]
  __int64 v53; // [rsp+170h] [rbp+F0h]
  __int64 v54; // [rsp+178h] [rbp+F8h]
  __m128i v55; // [rsp+190h] [rbp+110h] BYREF
  __int128 v56; // [rsp+1A0h] [rbp+120h]
  __int128 v57; // [rsp+1B0h] [rbp+130h]
  __int128 v58; // [rsp+1C0h] [rbp+140h]
  __int128 v59; // [rsp+1D0h] [rbp+150h]
  __int128 v60; // [rsp+1E0h] [rbp+160h]
  _BYTE v61[104]; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v62; // [rsp+2A8h] [rbp+228h]
  __int128 v63; // [rsp+2B8h] [rbp+238h]
  __int128 v64; // [rsp+2C8h] [rbp+248h]
  __int128 v65; // [rsp+2D8h] [rbp+258h]
  __int64 v66; // [rsp+2E8h] [rbp+268h]
  __int64 v67; // [rsp+2F0h] [rbp+270h]
  __int64 v68; // [rsp+2F8h] [rbp+278h]
  __int64 v69; // [rsp+300h] [rbp+280h]
  __int64 v70; // [rsp+308h] [rbp+288h]
  __int64 v71; // [rsp+310h] [rbp+290h]
  __int64 v72; // [rsp+318h] [rbp+298h]
  __int64 v73; // [rsp+320h] [rbp+2A0h]

  v73 = -2;
  v10 = a2[5];
  v11 = a2[6];
  sub_141695A00(v61, v10, v11);
  if ( *(_DWORD *)v61 == 2 )
  {
    result = *(_QWORD *)&v61[8];
    if ( (v61[8] & 3u) - 2 >= 2 && (v61[8] & 3) != 0 )
    {
      --*(_QWORD *)&v61[8];
      v61[0] = 3;
      result = sub_1416BCB00(&v61[8]);
    }
    *(_QWORD *)a1 = -1;
    return result;
  }
  sub_14169D480(v61, v10, v11);
  v13 = *(_QWORD *)&v61[8];
  result = *(_QWORD *)v61;
  if ( *(_QWORD *)v61 == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v13;
    return result;
  }
  v69 = *(_QWORD *)v61;
  v14 = *(_QWORD *)&v61[16];
  v71 = *(_QWORD *)&v61[8];
  v55 = *(__m128i *)&v61[8];
  v56 = 0;
  sub_140630900(v61, &v55);
  result = *(_QWORD *)&v61[8];
  if ( *(_QWORD *)v61 == -2 )
  {
    *(_QWORD *)a1 = 3;
    *(_QWORD *)(a1 + 8) = result;
    v15 = v69;
    if ( !v69 )
      return result;
    return sub_140001660(v71, v15, 1);
  }
  v68 = v14;
  v70 = a4;
  v16 = *(_OWORD *)v61;
  sub_1418F44E0(&v43, (const __m128i *)&v61[16], 0xA0u);
  v72 = v16;
  v67 = v16 >> 64;
  v42[0] = v16;
  v42[1] = *((_QWORD *)&v16 + 1);
  result = sub_140ED8760(v42);
  if ( !(_BYTE)result )
  {
    result = sub_140ED4AD0(v42);
    if ( !(_BYTE)result )
    {
      result = sub_140ED7E50(v42);
      if ( (_BYTE)result )
      {
        sub_140ED5630(v61, v42, v10, v11);
        result = *(_QWORD *)v61;
        v55 = *(__m128i *)&v61[8];
        v56 = *(_OWORD *)&v61[24];
        v57 = *(_OWORD *)&v61[40];
        v58 = *(_OWORD *)&v61[56];
        v59 = *(_OWORD *)&v61[72];
        v60 = *(_OWORD *)&v61[88];
        if ( *(_QWORD *)v61 == 2 )
        {
          *(_OWORD *)(a1 + 80) = v60;
          *(_OWORD *)(a1 + 64) = v59;
          v17 = v55;
          v18 = v56;
          v19 = v57;
          *(_OWORD *)(a1 + 48) = v58;
          *(_OWORD *)(a1 + 32) = v19;
          *(_OWORD *)(a1 + 16) = v18;
          *(__m128i *)a1 = v17;
          v20 = v72;
          if ( v72 <= 0 )
            goto LABEL_19;
          goto LABEL_18;
        }
        v21 = v66;
        v41 = v66;
        v40 = v65;
        v39 = v64;
        v38 = v63;
        v37 = v62;
        v31 = v55;
        v32 = v56;
        v33 = v57;
        v34 = v58;
        v35 = v59;
        v36 = v60;
        v30 = *(_QWORD *)v61;
        v22 = v72;
        if ( (_QWORD)v58 != a6 || (unsigned int)sub_1418F4B70(*((_QWORD *)&v33 + 1), a5) )
        {
          nullsub_1(v21);
          v23 = (void *)sub_140001650(50, 1);
          if ( !v23 )
            sub_141938D2B(1, 50);
          qmemcpy(v23, "Live account changed while handing off credentials", 50);
          *(_QWORD *)a1 = 10;
          *(_QWORD *)(a1 + 8) = 50;
          *(_QWORD *)(a1 + 16) = v23;
          *(_QWORD *)(a1 + 24) = 50;
          goto LABEL_44;
        }
        sub_140ED9AE0((unsigned int)v61, a3, v70, a2[41], a2[42]);
        v24 = v68;
        if ( *(_DWORD *)v61 != -1 )
        {
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v61[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v61[64];
          v25 = *(_OWORD *)v61;
          v26 = *(_OWORD *)&v61[16];
          v27 = *(_OWORD *)&v61[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v61[48];
          *(_OWORD *)(a1 + 32) = v27;
          *(_OWORD *)(a1 + 16) = v26;
          *(_OWORD *)a1 = v25;
          goto LABEL_44;
        }
        sub_140ED4870(&v55, a3, v70);
        if ( v55.m128i_i64[0] == -2 )
        {
          sub_14018FDA0(&v55);
        }
        else
        {
          sub_1418F44E0((__m128i *)v61, &v55, 0xB0u);
          if ( (unsigned __int8)sub_1402C22D0(v61, v42) )
          {
            *(_QWORD *)a1 = -1;
            sub_140195410(&v55);
            goto LABEL_44;
          }
          sub_140195410(&v55);
        }
        sub_14169D480(v61, a3, v70);
        v28 = *(_OWORD *)v61;
        if ( *(_QWORD *)v61 == -1 )
        {
          sub_14018FAF0(-1, *(_QWORD *)&v61[8]);
        }
        else
        {
          if ( *(_QWORD *)&v61[16] == v24 && !(unsigned int)sub_1418F4B70(*(_QWORD *)&v61[8], v71) )
          {
            if ( (_QWORD)v28 )
              sub_140001660(*((_QWORD *)&v28 + 1), v28, 1);
            *(_QWORD *)a1 = -1;
            v22 = v72;
            goto LABEL_44;
          }
          if ( (_QWORD)v28 )
            sub_140001660(*((_QWORD *)&v28 + 1), v28, 1);
        }
        if ( (sub_140222E10(a3, v70, v71, v24) & 1) == 0 )
        {
          sub_1401BD710(v29, v29);
          *(_QWORD *)a1 = -1;
          sub_140034220(&v30);
          result = sub_140195410(v42);
          v15 = v69;
          if ( !v69 )
            return result;
          return sub_140001660(v71, v15, 1);
        }
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v29;
LABEL_44:
        result = sub_140034220(&v30);
        v20 = v22;
        if ( v22 <= 0 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
  }
  *(_QWORD *)a1 = -1;
  v20 = v72;
  if ( v72 > 0 )
LABEL_18:
    result = sub_140001660(v67, v20, 1);
LABEL_19:
  if ( v43.m128i_i64[1] != -1 && v43.m128i_i64[1] )
    result = sub_140001660(v44, v43.m128i_i64[1], 1);
  if ( v45 != -1 && v45 )
    result = sub_140001660(v46, v45, 1);
  if ( v47 != -1 && v47 )
    result = sub_140001660(v48, v47, 1);
  if ( v49 != -1 && v49 )
    result = sub_140001660(v50, v49, 1);
  if ( v51 != -1 && v51 )
    result = sub_140001660(v52, v51, 1);
  if ( v53 != -1 && v53 )
    result = sub_140001660(v54, v53, 1);
  v15 = v69;
  if ( v69 )
    return sub_140001660(v71, v15, 1);
  return result;
}
