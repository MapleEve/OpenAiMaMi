// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | ea 0x14026dc80 | name sub_14026DC80
// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | attributed via panic-Location xref (win-native)
int __fastcall sub_14026DC80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r14
  void *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r13
  char v12; // r14
  unsigned __int64 v13; // rdi
  __m128i *v14; // r14
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  __m128i *v18; // rax
  __int64 v19; // rax
  __m128i *v20; // rcx
  __m128i si128; // xmm0
  __int64 v22; // rbx
  unsigned __int64 v23; // rsi
  __m128i *v24; // rcx
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i *v27; // rax
  __m128i v29; // [rsp+28h] [rbp-58h] BYREF
  int v30; // [rsp+38h] [rbp-48h]
  _QWORD v31[8189]; // [rsp+3Ch] [rbp-44h]
  __m128i v32; // [rsp+10028h] [rbp+FFA8h] BYREF
  __int64 v33; // [rsp+10038h] [rbp+FFB8h]
  _OWORD v34[3]; // [rsp+10040h] [rbp+FFC0h] BYREF
  __int64 v35; // [rsp+10070h] [rbp+FFF0h]
  unsigned __int64 v36; // [rsp+10078h] [rbp+FFF8h]
  __int128 v37; // [rsp+10080h] [rbp+10000h] BYREF
  __m128i v38; // [rsp+10090h] [rbp+10010h]
  _BYTE v39[80]; // [rsp+100A0h] [rbp+10020h] BYREF
  __m128i v40; // [rsp+100F0h] [rbp+10070h] BYREF
  __m128i v41; // [rsp+10100h] [rbp+10080h] BYREF
  __int128 v42; // [rsp+10110h] [rbp+10090h] BYREF
  __int128 v43; // [rsp+10120h] [rbp+100A0h]
  __int128 v44; // [rsp+10130h] [rbp+100B0h]
  __int128 v45; // [rsp+10140h] [rbp+100C0h]
  __int128 v46; // [rsp+10150h] [rbp+100D0h]
  __int64 v47; // [rsp+10168h] [rbp+100E8h]
  __int64 v48; // [rsp+10170h] [rbp+100F0h]
  __int64 v49; // [rsp+10178h] [rbp+100F8h]
  HANDLE hObject; // [rsp+10180h] [rbp+10100h] BYREF
  __m128i *v51; // [rsp+10188h] [rbp+10108h]
  __int64 v52; // [rsp+10190h] [rbp+10110h]

  v52 = -2;
  sub_141695A00(&v29, a2, a3);
  if ( v29.m128i_i32[0] == 2 )
  {
    v6 = v29.m128i_i64[1];
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 20) = 0;
    return v6;
  }
  v7 = *(_QWORD *)((char *)&v31[3] + 4);
  v48 = *(_QWORD *)((char *)&v31[4] + 4);
  v29.m128i_i32[0] = 0;
  v29.m128i_i64[1] = 0;
  v30 = 7;
  v31[0] = 0x100000000LL;
  *(_QWORD *)((char *)v31 + 5) = 0;
  v47 = a3;
  v6 = sub_141690E40(&v29);
  if ( v6 == 1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v8;
    return v6;
  }
  v49 = v7;
  v51 = (__m128i *)a1;
  hObject = v8;
  v37 = xmmword_1419E2188;
  v38 = _mm_loadu_si128(xmmword_1419E2198);
  memset(v39, 0, 73);
  sub_1418F4C70(&v29, 0, 0x10000);
  while ( 1 )
  {
    v9 = sub_141685410(&hObject, &v29, 0x10000);
    v11 = v10;
    if ( v9 == 1 )
    {
      v18 = v51;
      v51->m128i_i64[0] = 2;
      v18->m128i_i64[1] = v10;
      goto LABEL_27;
    }
    if ( !v10 )
      break;
    if ( v10 >= 0x10001 )
      sub_1419392D0(0, v10, 0x10000, &off_1419E0D68);
    v12 = v39[72];
    v13 = 64LL - v39[72];
    if ( v13 > v10 )
    {
      sub_1418F44E0((__m128i *)&v39[v39[72] + 8], &v29, v10);
      v39[72] = v12 + v11;
    }
    else
    {
      if ( !v39[72] )
      {
        v14 = &v29;
        v15 = v10 >> 6;
        if ( !(v10 >> 6) )
          goto LABEL_16;
LABEL_15:
        *(_QWORD *)v39 += v15;
        sub_14140F460(&v37, v14, v15);
        goto LABEL_16;
      }
      sub_1418F44E0((__m128i *)&v39[v39[72] + 8], &v29, 64LL - v39[72]);
      ++*(_QWORD *)v39;
      sub_14140F460(&v37, &v39[8], 1);
      v14 = (__m128i *)((char *)&v29 + v13);
      v11 -= v13;
      v15 = v11 >> 6;
      if ( v11 >> 6 )
        goto LABEL_15;
LABEL_16:
      v16 = v11 & 0x7FFFFFFFFFFFFFC0LL;
      v17 = v11 & 0x3F;
      sub_1418F44E0((__m128i *)&v39[8], (__m128i *)((char *)v14 + v16), v17);
      v39[72] = v17;
    }
  }
  sub_141695A00(&v40, a2, v47);
  if ( v40.m128i_i32[0] == 2 )
  {
    v19 = v40.m128i_i64[1];
    v20 = v51;
    v51->m128i_i64[0] = 2;
    v20->m128i_i64[1] = v19;
    v20[1].m128i_i32[0] = 1;
    *(__int64 *)((char *)v20[1].m128i_i64 + 4) = 0;
  }
  else if ( __PAIR128__(v48, v49) == v43 )
  {
    v46 = *(_OWORD *)&v39[64];
    si128 = _mm_load_si128((const __m128i *)&v37);
    v42 = *(_OWORD *)v39;
    v45 = *(_OWORD *)&v39[48];
    v44 = *(_OWORD *)&v39[32];
    v43 = *(_OWORD *)&v39[16];
    v41 = v38;
    v40 = si128;
    v22 = v39[72];
    v23 = _byteswap_uint64((*(_QWORD *)v39 << 9) | (8 * (unsigned int)v39[72]));
    *((_BYTE *)&v42 + v39[72] + 8) = 0x80;
    if ( (_DWORD)v22 == 63 || (sub_1418F4C70((char *)&v42 + v22 + 9, 0, v22 ^ 0x3F), ((unsigned int)v22 ^ 0x38) <= 7) )
    {
      sub_14140F460(&v40, (char *)&v42 + 8, 1);
      memset(v34, 0, sizeof(v34));
      v35 = 0;
      v36 = v23;
      sub_14140F460(&v40, v34, 1);
    }
    else
    {
      *(_QWORD *)&v46 = v23;
      sub_14140F460(&v40, (char *)&v42 + 8, 1);
    }
    v25 = _mm_load_si128(&v40);
    v26 = _mm_load_si128(&v41);
    v27 = v51;
    v51[2] = _mm_packus_epi16(
               _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v25, (__m128i)0LL), 27), 27),
               _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v25, (__m128i)0LL), 27), 27));
    v27[3] = _mm_packus_epi16(
               _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v26, (__m128i)0LL), 27), 27),
               _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v26, (__m128i)0LL), 27), 27));
    v27->m128i_i64[1] = v48;
    v27[1].m128i_i32[0] = 1;
    *(__int64 *)((char *)v27[1].m128i_i64 + 4) = v49;
    v27->m128i_i64[0] = -1;
  }
  else
  {
    *(_QWORD *)&v34[0] = a2;
    *((_QWORD *)&v34[0] + 1) = v47;
    v40.m128i_i64[0] = (__int64)v34;
    v40.m128i_i64[1] = (__int64)sub_14169F630;
    sub_1416ABFD0(&v32, &unk_1419E0D2A, &v40);
    v24 = v51;
    v51[1].m128i_i64[1] = v33;
    *(__m128i *)((char *)v24 + 8) = _mm_loadu_si128(&v32);
    v24->m128i_i64[0] = 10;
  }
LABEL_27:
  LODWORD(v6) = CloseHandle(hObject);
  return v6;
}
