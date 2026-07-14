// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1007c6b30 depth=2
__int64 __fastcall http::header::map::hash_elem_using::h264a804aff6cac0b(__int64 a1, __int64 *a2)
{
  __m128i v3; // xmm0
  __int64 v4; // r14
  unsigned int *v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int8 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int8 *v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rax
  __m128i v44; // [rsp+0h] [rbp-60h] BYREF
  __m128i v45; // [rsp+10h] [rbp-50h]
  __m128i v46; // [rsp+20h] [rbp-40h]
  __int128 v47; // [rsp+30h] [rbp-30h]
  __int64 v48; // [rsp+40h] [rbp-20h]
  unsigned int v49[6]; // [rsp+48h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 == 2 ) /*0x1007c6b41*/
  {
    v3 = _mm_loadu_si128((const __m128i *)(a1 + 8)); /*0x1007c6b43*/
    v44 = _mm_xor_si128(_mm_shuffle_epi32(v3, 68), (__m128i)xmmword_1012C8670); /*0x1007c6b55*/
    v45 = _mm_xor_si128(_mm_shuffle_epi32(v3, 238), (__m128i)xmmword_1012C8680); /*0x1007c6b67*/
    v46 = v3; /*0x1007c6b6c*/
    v47 = 0; /*0x1007c6b75*/
    v48 = 0; /*0x1007c6b7a*/
    v4 = *a2; /*0x1007c6b82*/
    *(_QWORD *)v49 = *a2 != 0; /*0x1007c6b8d*/
    _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h1d8db205c8c4d35e(v44.i64, v49, 8u); /*0x1007c6b9e*/
    if ( v4 ) /*0x1007c6ba6*/
    {
      v5 = (unsigned int *)a2[1]; /*0x1007c6bac*/
      v6 = a2[2]; /*0x1007c6bb0*/
    }
    else
    {
      *(_QWORD *)v49 = *((unsigned __int8 *)a2 + 8); /*0x1007c6c48*/
      v5 = v49; /*0x1007c6c50*/
      v6 = 8; /*0x1007c6c54*/
    }
    _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h1d8db205c8c4d35e(v44.i64, v5, v6); /*0x1007c6c59*/
    v14 = *((_QWORD *)&v47 + 1) | ((_QWORD)v47 << 56); /*0x1007c6c6a*/
    v15 = (v14 ^ v45.i64[1]) + v44.i64[1]; /*0x1007c6c80*/
    v16 = (v45.i64[0] + v44.i64[0]) ^ __ROL8__(v45.i64[0], 13); /*0x1007c6c87*/
    v17 = v15 ^ __ROL8__(v14 ^ v45.i64[1], 16); /*0x1007c6c92*/
    v18 = v16 + v15; /*0x1007c6c95*/
    v19 = v17 + __ROL8__(v45.i64[0] + v44.i64[0], 32); /*0x1007c6c9c*/
    v20 = v18 ^ __ROL8__(v16, 17); /*0x1007c6c9f*/
    v21 = v19 ^ __ROL8__(v17, 21); /*0x1007c6ca6*/
    v22 = v20 + (v14 ^ v19); /*0x1007c6cb7*/
    v23 = v21 + (__ROL8__(v18, 32) ^ 0xFFLL); /*0x1007c6cbe*/
    v24 = v22 ^ __ROL8__(v20, 13); /*0x1007c6cc1*/
    v25 = v23 ^ __ROL8__(v21, 16); /*0x1007c6cc8*/
    v26 = v24 + v23; /*0x1007c6ccf*/
    v27 = v25 + __ROL8__(v22, 32); /*0x1007c6cd2*/
    v28 = v26 ^ __ROL8__(v24, 17); /*0x1007c6cd9*/
    v29 = v27 ^ __ROL8__(v25, 21); /*0x1007c6ce4*/
    v30 = v28 + v27; /*0x1007c6ce7*/
    v31 = v29 + __ROL8__(v26, 32); /*0x1007c6cee*/
    v32 = v30 ^ __ROL8__(v28, 13); /*0x1007c6cf1*/
    v33 = v31 ^ __ROL8__(v29, 16); /*0x1007c6cf8*/
    v34 = v32 + v31; /*0x1007c6cff*/
    v35 = v33 + __ROL8__(v30, 32); /*0x1007c6d02*/
    v36 = v34 ^ __ROL8__(v32, 17); /*0x1007c6d09*/
    v37 = v35 ^ __ROL8__(v33, 21); /*0x1007c6d14*/
    v38 = v37 + __ROL8__(v34, 32); /*0x1007c6d1e*/
    v39 = (v36 + v35) ^ __ROL8__(v36, 13); /*0x1007c6d21*/
    v7 = (v39 >> 47) ^ ((v38 ^ (unsigned __int64)(v37 << 16)) >> 43) ^ (v39 + v38) ^ ((v39 + v38) >> 32); /*0x1007c6d43*/
  }
  else
  {
    v7 = 0x1EFAC7090AEF4A21LL * ((*a2 != 0) ^ 0xCBF29CE484222325LL); /*0x1007c6bdf*/
    if ( !*a2 ) /*0x1007c6be6*/
    {
      LOWORD(v7) = 18977 * (*((unsigned __int8 *)a2 + 8) ^ (unsigned __int16)v7); /*0x1007c6d52*/
      return v7 & 0x7FFF; /*0x1007c6d56*/
    }
    v8 = a2[2]; /*0x1007c6bec*/
    if ( v8 ) /*0x1007c6bf3*/
    {
      v9 = a2[1]; /*0x1007c6bf9*/
      v10 = a2[2] & 7; /*0x1007c6c0a*/
      if ( (v8 & 7) != 0 ) /*0x1007c6c0e*/
      {
        v11 = 0x1EFAC7090AEF4A21LL * ((*a2 != 0) ^ 0xCBF29CE484222325LL); /*0x1007c6c14*/
        v12 = (unsigned __int8 *)a2[1]; /*0x1007c6c17*/
        do /*0x1007c6c33*/
        {
          v13 = *v12++; /*0x1007c6c20*/
          v7 = 0x100000001B3LL * (v11 ^ v13); /*0x1007c6c29*/
          v11 = v7; /*0x1007c6c2d*/
          --v10; /*0x1007c6c30*/
        }
        while ( v10 ); /*0x1007c6c33*/
        if ( v8 < 8 ) /*0x1007c6c39*/
          return v7 & 0x7FFF; /*0x1007c6c39*/
      }
      else
      {
        v12 = (unsigned __int8 *)a2[1]; /*0x1007c6d58*/
        if ( v8 < 8 ) /*0x1007c6d5f*/
          return v7 & 0x7FFF; /*0x1007c6d5f*/
      }
      v40 = (unsigned __int8 *)(v8 + v9); /*0x1007c6d61*/
      do /*0x1007c6dce*/
      {
        v41 = 0x100000001B3LL /*0x1007c6db8*/
            * ((0x100000001B3LL
              * ((0x100000001B3LL
                * ((0x100000001B3LL
                  * ((0x100000001B3LL * ((0x100000001B3LL * ((0x100000001B3LL * (v7 ^ *v12)) ^ v12[1])) ^ v12[2]))
                   ^ v12[3]))
                 ^ v12[4]))
               ^ v12[5]))
             ^ v12[6]);
        v42 = v12[7]; /*0x1007c6dbc*/
        v12 += 8; /*0x1007c6dc0*/
        v7 = 0x100000001B3LL * (v41 ^ v42); /*0x1007c6dc7*/
      }
      while ( v12 != v40 ); /*0x1007c6dce*/
    }
  }
  return v7 & 0x7FFF; /*0x1007c6dd5*/
}