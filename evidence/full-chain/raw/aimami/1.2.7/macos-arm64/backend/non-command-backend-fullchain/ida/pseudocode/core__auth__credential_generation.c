// aimami 1.2.7 mac truly_undone deep reverse — cluster core/auth/credential_generation
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::auth::credential_generation::h62ee2c51d26382c6 @ 0x100ac3680 size=1165 lines=167 =====
__int64 __fastcall codexmate_lib::core::auth::credential_generation::h62ee2c51d26382c6(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  size_t v3; // r12
  unsigned __int64 v4; // r15
  _QWORD *v5; // r13
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rcx
  size_t v8; // rbx
  char *v9; // r15
  char *v10; // r15
  size_t v11; // r13
  size_t v12; // rdx
  unsigned __int64 v13; // r12
  char *v14; // r13
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned __int64 v17; // r12
  __int64 *v18; // rsi
  __m128i si128; // xmm0
  __m128i v20; // xmm2
  __int64 v21; // rbx
  __m128i v23[7]; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-F0h]
  __int64 v25; // [rsp+78h] [rbp-E8h]
  _OWORD __src[3]; // [rsp+80h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-B0h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-A8h]
  _QWORD v29[19]; // [rsp+C8h] [rbp-98h] BYREF

  v25 = a1;
  v29[0] = 0xBB67AE856A09E667LL;
  v29[1] = 0xA54FF53A3C6EF372LL;
  v29[2] = 0x9B05688C510E527FLL;
  v29[3] = 0x5BE0CD191F83D9ABLL;
  memset(&v29[4], 0, 73);
  v23[1].i64[0] = a2 + 48;
  v23[1].i64[1] = a2 + 72;
  v23[2].i64[0] = a2 + 96;
  v23[2].i64[1] = a2 + 120;
  v2 = 2;
  LOBYTE(v3) = 0;
  v4 = 0x8000000000000000LL;
  v24 = 0x8000000000000000LL;
  do
  {
    while ( 1 )
    {
      v5 = (_QWORD *)v23[0].i64[v2];
      if ( *v5 == v4 )
        break;
      LOBYTE(__src[0]) = 1;
      if ( (unsigned __int8)v3 == 63 )
      {
        memcpy((char *)&v29[5] + (unsigned __int8)v3, __src, 64LL - (unsigned __int8)v3);
        ++v29[4];
        sha2::sha256::compress256::hc74ebc2fd6208bb9(v29, &v29[5]);
        v6 = 0;
      }
      else
      {
        *((_BYTE *)&v29[5] + (unsigned __int8)v3) = 1;
        v6 = v3 + 1;
      }
      LOBYTE(v29[13]) = v6;
      v7 = _byteswap_uint64(v5[2]);
      *(_QWORD *)&__src[0] = v7;
      if ( v6 >= 0x38u )
      {
        v9 = (char *)__src + 64LL - v6;
        v8 = v6 - 56LL;
        memcpy((char *)&v29[5] + v6, __src, 64LL - v6);
        ++v29[4];
        sha2::sha256::compress256::hc74ebc2fd6208bb9(v29, &v29[5]);
        memcpy(&v29[5], &v9[v8 & 0x7FFFFFFFFFFFFFC0LL], v8);
      }
      else
      {
        *(_QWORD *)((char *)&v29[5] + v6) = v7;
        v8 = v6 + 8LL;
      }
      LOBYTE(v29[13]) = v8;
      v10 = (char *)v5[1];
      v11 = v5[2];
      v12 = 64 - v8;
      v13 = v11 - (64 - v8);
      if ( v11 >= 64 - v8 )
      {
        if ( v8 )
        {
          v14 = &v10[v12];
          memcpy((char *)&v29[5] + v8, v10, v12);
          ++v29[4];
          sha2::sha256::compress256::hc74ebc2fd6208bb9(v29, &v29[5]);
          v10 = v14;
          if ( v13 >= 0x40 )
            goto LABEL_17;
        }
        else
        {
          v13 = v11;
          if ( v11 >= 0x40 )
          {
LABEL_17:
            v29[4] += v13 >> 6;
            sha2::sha256::compress256::hc74ebc2fd6208bb9(v29, v10);
          }
        }
        v15 = v13 & 0x7FFFFFFFFFFFFFC0LL;
        v3 = v13 & 0x3F;
        memcpy(&v29[5], &v10[v15], v3);
        goto LABEL_19;
      }
      memcpy((char *)&v29[5] + v8, v10, v11);
      LOBYTE(v3) = v8 + v11;
LABEL_19:
      LOBYTE(v29[13]) = v3;
      v4 = v24;
      if ( ++v2 == 6 )
        goto LABEL_23;
    }
    LOBYTE(__src[0]) = 0;
    if ( (unsigned __int8)v3 == 63 )
    {
      memcpy((char *)&v29[5] + (unsigned __int8)v3, __src, 64LL - (unsigned __int8)v3);
      ++v29[4];
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v29, &v29[5]);
      LOBYTE(v3) = 0;
    }
    else
    {
      *((_BYTE *)&v29[5] + (unsigned __int8)v3) = 0;
      LOBYTE(v3) = v3 + 1;
    }
    LOBYTE(v29[13]) = v3;
    ++v2;
  }
  while ( v2 != 6 );
LABEL_23:
  qmemcpy(v23, v29, sizeof(v23));
  v16 = v23[6].u8[8];
  v17 = _byteswap_uint64((v23[2].i64[0] << 9) | (8 * (unsigned int)v23[6].u8[8]));
  v23[2].i8[v23[6].u8[8] + 8] = 0x80;
  if ( (_DWORD)v16 == 63 || (__bzero((char *)&v23[2].u64[1] + v16 + 1, v16 ^ 0x3F), ((unsigned int)v16 ^ 0x38) <= 7) )
  {
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v23, &v23[2].u64[1]);
    memset(__src, 0, sizeof(__src));
    v27 = 0;
    v28 = v17;
    v18 = (__int64 *)__src;
  }
  else
  {
    v23[6].i64[0] = v17;
    v18 = &v23[2].i64[1];
  }
  sha2::sha256::compress256::hc74ebc2fd6208bb9(v23, v18);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1018315E0);
  v20 = _mm_shuffle_epi8(_mm_load_si128(&v23[1]), si128);
  v23[0] = _mm_shuffle_epi8(_mm_load_si128(v23), si128);
  v23[1] = v20;
  *(_QWORD *)&__src[0] = v23;
  *((_QWORD *)&__src[0] + 1) = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::h6a15623b74f49e7c;
  v21 = v25;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, &unk_101A2BC0F, __src);
  return v21;
}

