// __ZN13codexmate_lib8platform7process23command_runs_executable @ 0x100362530 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::command_runs_executable::h592cda2c9961586f(
        unsigned __int8 *__s2,
        size_t __n,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r14d
  void *v5; // rbx
  size_t v6; // r15
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // [rsp+8h] [rbp-38h] BYREF
  void *__s2a; // [rsp+10h] [rbp-30h]
  size_t __na; // [rsp+18h] [rbp-28h]

  v4 = (unsigned int)__s2; /*0x100362542*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v13, a3, a4); /*0x10036254f*/
  v5 = __s2a; /*0x100362554*/
  v6 = __na; /*0x100362558*/
  if ( __n == __na && !memcmp(__s2, __s2a, __n) ) /*0x100362571*/
  {
    LOBYTE(v4) = 1; /*0x1003625c4*/
  }
  else
  {
    if ( __n < v6 || memcmp(v5, __s2, v6) || __n == v6 ) /*0x10036258d*/
      goto LABEL_6; /*0x10036258d*/
    v8 = __s2[v6]; /*0x1003625c9*/
    if ( (v8 & 0x80u) != 0 ) /*0x1003625d0*/
    {
      v9 = v8 & 0x1F; /*0x1003625d4*/
      v10 = __s2[v6 + 1] & 0x3F; /*0x1003625dd*/
      if ( (unsigned __int8)v8 <= 0xDFu ) /*0x1003625e2*/
      {
        v8 = v10 | (v9 << 6); /*0x100362613*/
      }
      else
      {
        v11 = (v10 << 6) | __s2[v6 + 2] & 0x3F; /*0x1003625f0*/
        if ( (unsigned __int8)v8 < 0xF0u ) /*0x1003625f4*/
          v8 = (v9 << 12) | v11; /*0x10036261c*/
        else
          v8 = ((v8 & 7) << 18) | (v11 << 6) | __s2[v6 + 3] & 0x3F; /*0x10036260a*/
      }
    }
    LOBYTE(v4) = 1; /*0x10036262e*/
    if ( ((unsigned __int8)(0x80001Fu >> (v8 - 9)) & (v8 - 9 < 0x18)) == 0 ) /*0x100362634*/
    {
      if ( v8 < 0x80 ) /*0x10036263f*/
      {
LABEL_6:
        v4 = 0; /*0x10036258f*/
        goto LABEL_7; /*0x10036258f*/
      }
      v12 = v8 >> 8; /*0x100362647*/
      v4 = 0; /*0x10036264a*/
      if ( v8 >> 8 > 0x1F ) /*0x100362650*/
      {
        if ( v12 == 32 ) /*0x100362670*/
        {
          v4 = (unsigned __int8)core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v8]; /*0x1003626a7*/
          LOBYTE(v4) = (unsigned __int8)v4 >> 1; /*0x1003626ac*/
        }
        else if ( v12 == 48 ) /*0x100362675*/
        {
          LOBYTE(v4) = v8 == 12288; /*0x100362680*/
        }
      }
      else if ( v12 ) /*0x100362654*/
      {
        if ( v12 == 22 ) /*0x100362659*/
          LOBYTE(v4) = v8 == 5760; /*0x100362664*/
      }
      else
      {
        v4 = (unsigned __int8)core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v8]; /*0x100362693*/
      }
    }
  }
LABEL_7:
  if ( 2 * v13 ) /*0x100362596*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v13, 1); /*0x1003625ab*/
  LOBYTE(v4) = v4 & 1; /*0x1003625b0*/
  return v4; /*0x1003625b7*/
}