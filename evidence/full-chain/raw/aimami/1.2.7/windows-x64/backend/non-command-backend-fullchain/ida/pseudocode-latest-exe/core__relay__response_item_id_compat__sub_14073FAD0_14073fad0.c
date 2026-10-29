// win 1.2.7 latest-exe | module src/core/relay/response_item_id_compat.rs | ea 0x14073fad0 | successor of pre-update 0x14026dc80 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.705, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_14073FAD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  void *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r13
  char v14; // r14
  unsigned __int64 v15; // rbx
  char *v16; // r14
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __m128i si128; // xmm0
  __int64 v22; // r14
  unsigned __int64 v23; // rbx
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  _DWORD v27[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v28; // [rsp+30h] [rbp-50h]
  int v29; // [rsp+38h] [rbp-48h]
  _QWORD v30[8189]; // [rsp+3Ch] [rbp-44h]
  __m128i v31; // [rsp+10028h] [rbp+FFA8h] BYREF
  __int64 v32; // [rsp+10038h] [rbp+FFB8h]
  _OWORD v33[3]; // [rsp+10040h] [rbp+FFC0h] BYREF
  __int64 v34; // [rsp+10070h] [rbp+FFF0h]
  unsigned __int64 v35; // [rsp+10078h] [rbp+FFF8h]
  __int128 v36; // [rsp+10080h] [rbp+10000h] BYREF
  __m128i v37; // [rsp+10090h] [rbp+10010h]
  _BYTE v38[80]; // [rsp+100A0h] [rbp+10020h] BYREF
  __m128i v39; // [rsp+100F0h] [rbp+10070h] BYREF
  __m128i v40; // [rsp+10100h] [rbp+10080h] BYREF
  __int128 v41; // [rsp+10110h] [rbp+10090h] BYREF
  __int128 v42; // [rsp+10120h] [rbp+100A0h]
  __int128 v43; // [rsp+10130h] [rbp+100B0h]
  __int128 v44; // [rsp+10140h] [rbp+100C0h]
  __int128 v45; // [rsp+10150h] [rbp+100D0h]
  __int64 v46; // [rsp+10168h] [rbp+100E8h]
  __int64 v47; // [rsp+10170h] [rbp+100F0h]
  unsigned __int64 v48; // [rsp+10178h] [rbp+100F8h]
  unsigned __int64 v49; // [rsp+10180h] [rbp+10100h]
  HANDLE hObject[9]; // [rsp+10188h] [rbp+10108h] BYREF

  hObject[1] = (HANDLE)-2LL;
  sub_1416C49D0(v27, a2, a3);
  if ( v27[0] == 2 )
  {
    v6 = v28;
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 20) = 0;
    return a1;
  }
  v7 = a2;
  v8 = *(_QWORD *)((char *)&v30[3] + 4);
  v9 = *(_QWORD *)((char *)&v30[4] + 4);
  v27[0] = 0;
  v28 = 0;
  v29 = 7;
  v30[0] = 0x100000000LL;
  *(_QWORD *)((char *)v30 + 5) = 0;
  v47 = v7;
  v46 = a3;
  if ( sub_1416BFE10(v27, v7, a3) == 1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v10;
    return a1;
  }
  v48 = v9;
  v49 = v8;
  hObject[0] = v10;
  v36 = xmmword_141A412B0;
  v37 = _mm_loadu_si128((const __m128i *)&xmmword_141A412C0);
  memset(v38, 0, 73);
  sub_141923C40(v27, 0, 0x10000);
  while ( 1 )
  {
    v11 = sub_1416B43E0(hObject, v27, 0x10000);
    v13 = v12;
    if ( v11 == 1 )
    {
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v12;
      goto LABEL_27;
    }
    if ( !v12 )
      break;
    if ( v12 >= 0x10001 )
      sub_14196B880(0, v12, 0x10000, &off_141A3F5E0);
    v14 = v38[72];
    v15 = 64LL - v38[72];
    if ( v15 > v12 )
    {
      sub_1419234B0(&v38[v38[72] + 8], v27, v12);
      v38[72] = v14 + v13;
    }
    else
    {
      if ( !v38[72] )
      {
        v16 = (char *)v27;
        v17 = v12 >> 6;
        if ( !(v12 >> 6) )
          goto LABEL_16;
LABEL_15:
        *(_QWORD *)v38 += v17;
        sub_14143B950(&v36, v16, v17);
        goto LABEL_16;
      }
      sub_1419234B0(&v38[v38[72] + 8], v27, 64LL - v38[72]);
      ++*(_QWORD *)v38;
      sub_14143B950(&v36, &v38[8], 1);
      v16 = (char *)v27 + v15;
      v13 -= v15;
      v17 = v13 >> 6;
      if ( v13 >> 6 )
        goto LABEL_15;
LABEL_16:
      v18 = v13 & 0x7FFFFFFFFFFFFFC0LL;
      v19 = v13 & 0x3F;
      sub_1419234B0(&v38[8], &v16[v18], v19);
      v38[72] = v19;
    }
  }
  sub_1416C49D0(&v39, v47, v46);
  if ( v39.m128i_i32[0] == 2 )
  {
    v20 = v39.m128i_i64[1];
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v20;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 20) = 0;
  }
  else if ( __PAIR128__(v48, v49) == v42 )
  {
    v45 = *(_OWORD *)&v38[64];
    si128 = _mm_load_si128((const __m128i *)&v36);
    v41 = *(_OWORD *)v38;
    v44 = *(_OWORD *)&v38[48];
    v43 = *(_OWORD *)&v38[32];
    v42 = *(_OWORD *)&v38[16];
    v40 = v37;
    v39 = si128;
    v22 = v38[72];
    v23 = _byteswap_uint64((*(_QWORD *)v38 << 9) | (8 * (unsigned int)v38[72]));
    *((_BYTE *)&v41 + v38[72] + 8) = 0x80;
    if ( (_DWORD)v22 == 63 || (sub_141923C40((char *)&v41 + v22 + 9, 0, v22 ^ 0x3F), ((unsigned int)v22 ^ 0x38) <= 7) )
    {
      sub_14143B950(&v39, (char *)&v41 + 8, 1);
      memset(v33, 0, sizeof(v33));
      v34 = 0;
      v35 = v23;
      sub_14143B950(&v39, v33, 1);
    }
    else
    {
      *(_QWORD *)&v45 = v23;
      sub_14143B950(&v39, (char *)&v41 + 8, 1);
    }
    v24 = _mm_load_si128(&v39);
    v25 = _mm_load_si128(&v40);
    *(__m128i *)(a1 + 32) = _mm_packus_epi16(
                              _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v24, (__m128i)0LL), 27), 27),
                              _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v24, (__m128i)0LL), 27), 27));
    *(__m128i *)(a1 + 48) = _mm_packus_epi16(
                              _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v25, (__m128i)0LL), 27), 27),
                              _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v25, (__m128i)0LL), 27), 27));
    *(_QWORD *)(a1 + 8) = v48;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 20) = v49;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    *(_QWORD *)&v33[0] = v47;
    *((_QWORD *)&v33[0] + 1) = v46;
    v39.m128i_i64[0] = (__int64)v33;
    v39.m128i_i64[1] = (__int64)sub_1416CE600;
    sub_1416DAFA0(&v31, &unk_141A3F5A2, &v39);
    *(_QWORD *)(a1 + 24) = v32;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v31);
    *(_QWORD *)a1 = 10;
  }
LABEL_27:
  CloseHandle(hObject[0]);
  return a1;
}
