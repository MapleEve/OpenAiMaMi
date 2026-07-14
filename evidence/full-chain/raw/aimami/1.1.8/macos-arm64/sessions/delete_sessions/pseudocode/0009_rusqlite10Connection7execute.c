// mac 1.1.8 delete_sessions node va=0x1001e1620 depth=1
// rusqlite10Connection7execute
__int64 __fastcall rusqlite::Connection::execute::hc25883e027f66208(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  unsigned __int64 v7; // r12
  int v8; // eax
  int v9; // r14d
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  sqlite3_stmt *v12; // r15
  unsigned int v13; // r14d
  unsigned int v14; // eax
  char **v15; // r8
  __m128i inserted; // xmm0
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  sqlite3_int64 v19; // rax
  char **v20; // rdi
  int v21; // [rsp+0h] [rbp-120h] BYREF
  __int64 v22; // [rsp+8h] [rbp-118h]
  __int64 v23; // [rsp+10h] [rbp-110h]
  __int64 v24; // [rsp+18h] [rbp-108h]
  __int64 v25; // [rsp+20h] [rbp-100h]
  __int64 v26; // [rsp+28h] [rbp-F8h]
  __int64 v27; // [rsp+30h] [rbp-F0h]
  __int64 v28; // [rsp+38h] [rbp-E8h]
  sqlite3_stmt *v29; // [rsp+40h] [rbp-E0h]
  _QWORD v30[7]; // [rsp+48h] [rbp-D8h] BYREF
  sqlite3_stmt *pStmt; // [rsp+80h] [rbp-A0h]
  __int64 v32; // [rsp+88h] [rbp-98h] BYREF
  __int64 v33; // [rsp+90h] [rbp-90h] BYREF
  __int64 v34; // [rsp+98h] [rbp-88h]
  __int64 v35; // [rsp+A0h] [rbp-80h]
  __int64 v36; // [rsp+A8h] [rbp-78h]
  __int64 v37; // [rsp+B0h] [rbp-70h]
  unsigned __int64 v38; // [rsp+B8h] [rbp-68h] BYREF
  __m128i v39; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-50h]
  __int64 v41; // [rsp+D8h] [rbp-48h]
  __int64 v42; // [rsp+E0h] [rbp-40h]
  __int64 v43; // [rsp+E8h] [rbp-38h]
  __int64 v44; // [rsp+F0h] [rbp-30h]

  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v21, a2, a3, a4); /*0x1001e1644*/
  if ( v21 == 1 ) /*0x1001e1650*/
  {
    a1[7] = v29; /*0x1001e1656*/
    a1[6] = v28; /*0x1001e165e*/
    a1[5] = v27; /*0x1001e1666*/
    a1[4] = v26; /*0x1001e166e*/
    a1[3] = v25; /*0x1001e1676*/
    a1[2] = v24; /*0x1001e167e*/
    result = v22; /*0x1001e1682*/
    a1[1] = v23; /*0x1001e168a*/
    *a1 = result; /*0x1001e168e*/
    return result; /*0x1001e1691*/
  }
  v7 = 0x8000000000000016LL; /*0x1001e1696*/
  pStmt = v29; /*0x1001e16a4*/
  v30[6] = v28; /*0x1001e16af*/
  v30[5] = v27; /*0x1001e16ba*/
  v30[4] = v26; /*0x1001e16c5*/
  v30[3] = v25; /*0x1001e16d0*/
  v30[2] = v24; /*0x1001e16db*/
  v30[1] = v23; /*0x1001e16ea*/
  v30[0] = v22; /*0x1001e16f1*/
  v8 = sqlite3_bind_parameter_count(v29); /*0x1001e16f8*/
  v32 = a5; /*0x1001e16fd*/
  if ( !v8 ) /*0x1001e1706*/
  {
    inserted = _mm_cvtsi32_si128(1u); /*0x1001e17c5*/
LABEL_15:
    v10 = 0x8000000000000013LL; /*0x1001e181a*/
    goto LABEL_16; /*0x1001e181a*/
  }
  v9 = v8; /*0x1001e170c*/
  rusqlite::statement::Statement::bind_parameter::h9a95ab1bee77a4a0(&v38, v30, &v32, 1); /*0x1001e1726*/
  v10 = v38; /*0x1001e172b*/
  if ( v38 == 0x8000000000000016LL ) /*0x1001e1732*/
  {
    if ( v9 == 1 ) /*0x1001e173c*/
    {
      v11 = v30[0]; /*0x1001e1742*/
      v12 = pStmt; /*0x1001e1749*/
      v13 = sqlite3_step(pStmt); /*0x1001e1758*/
      v14 = sqlite3_reset(v12); /*0x1001e175e*/
      if ( v13 == 100 ) /*0x1001e1767*/
      {
        v7 = 0x8000000000000008LL; /*0x1001e1871*/
      }
      else
      {
        if ( v13 != 101 ) /*0x1001e1771*/
        {
          if ( *(_QWORD *)v11 < 0x7FFFFFFFFFFFFFFFuLL ) /*0x1001e1886*/
          {
            ++*(_QWORD *)v11; /*0x1001e188f*/
            rusqlite::error::decode_result_raw::h0a038d2a8c5fdb22(&v38, *(_QWORD *)(v11 + 16), v13); /*0x1001e189e*/
            --*(_QWORD *)v11; /*0x1001e18a3*/
            if ( v38 == 0x8000000000000016LL ) /*0x1001e18ab*/
            {
              v15 = &off_101526868; /*0x1001e1931*/
LABEL_28:
              core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1001e1938*/
                (__int64)"called `Result::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` value",
                46,
                (__int64)&v33,
                (__int64)&anon_0bcfb5f5de49270c5675714f036928d0_507,
                (__int64)v15);
            }
            goto LABEL_21; /*0x1001e18ab*/
          }
          goto LABEL_25; /*0x1001e1886*/
        }
        if ( v14 ) /*0x1001e1779*/
        {
          if ( *(_QWORD *)v11 < 0x7FFFFFFFFFFFFFFFuLL ) /*0x1001e178b*/
          {
            ++*(_QWORD *)v11; /*0x1001e1794*/
            rusqlite::error::decode_result_raw::h0a038d2a8c5fdb22(&v38, *(_QWORD *)(v11 + 16), v14); /*0x1001e17a2*/
            --*(_QWORD *)v11; /*0x1001e17a7*/
            if ( v38 == 0x8000000000000016LL ) /*0x1001e17af*/
            {
              v15 = &off_101526850; /*0x1001e17b5*/
              goto LABEL_28; /*0x1001e17bc*/
            }
LABEL_21:
            a1[7] = v44; /*0x1001e18b1*/
            a1[6] = v43; /*0x1001e18bd*/
            a1[5] = v42; /*0x1001e18c5*/
            a1[4] = v41; /*0x1001e18cd*/
            a1[3] = v40; /*0x1001e18d5*/
            a1[2] = v39.i64[1]; /*0x1001e18dd*/
            v18 = v38; /*0x1001e18e1*/
            a1[1] = v39.i64[0]; /*0x1001e18e9*/
            *a1 = v18; /*0x1001e18ed*/
            return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b(v30); /*0x1001e18f0*/
          }
LABEL_25:
          v20 = &anon_0bcfb5f5de49270c5675714f036928d0_638; /*0x1001e1923*/
          goto LABEL_26; /*0x1001e1923*/
        }
        if ( *(_QWORD *)v11 >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x1001e1901*/
        {
          v20 = &off_101526838; /*0x1001e1959*/
LABEL_26:
          core::cell::panic_already_mutably_borrowed::h333111125182db63(v20); /*0x1001e192a*/
        }
        ++*(_QWORD *)v11; /*0x1001e1906*/
        v19 = sqlite3_changes64(*(sqlite3 **)(v11 + 16)); /*0x1001e190e*/
        --*(_QWORD *)v11; /*0x1001e1913*/
        a1[1] = v19; /*0x1001e1917*/
      }
      *a1 = v7; /*0x1001e191b*/
      return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b(v30); /*0x1001e191e*/
    }
    inserted = _mm_insert_epi64(_mm_cvtsi32_si128(1u), v9, 1); /*0x1001e1813*/
    goto LABEL_15; /*0x1001e1813*/
  }
  inserted = _mm_loadu_si128(&v39); /*0x1001e17cf*/
  v33 = v40; /*0x1001e17d8*/
  v34 = v41; /*0x1001e17e3*/
  v35 = v42; /*0x1001e17ee*/
  v36 = v43; /*0x1001e17f6*/
  v37 = v44; /*0x1001e17fe*/
LABEL_16:
  *a1 = v10; /*0x1001e181d*/
  *(__m128i *)(a1 + 1) = inserted; /*0x1001e1820*/
  v17 = v34; /*0x1001e182c*/
  a1[3] = v33; /*0x1001e1833*/
  a1[4] = v17; /*0x1001e1837*/
  a1[5] = v35; /*0x1001e183f*/
  a1[6] = v36; /*0x1001e1847*/
  a1[7] = v37; /*0x1001e184f*/
  return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b(v30); /*0x1001e185f*/
}